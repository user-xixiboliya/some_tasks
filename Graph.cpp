#include "Graph.h"
#include <sstream>
#include <cstdlib>

void comment_process(FILE *in_fp)
{
	int temp_c = 0;      	 // 临时存储字符的变量
	while (((temp_c = fgetc(in_fp)) == '/' || temp_c == '\n') && (!feof(in_fp))) // 试探性读取一个字符
	{
    ungetc(temp_c, in_fp);
    while ((temp_c = fgetc(in_fp)) != '\n' && !feof(in_fp))
      ; // 如果是注释，把这行全略过，直至读到非注释的一行
	}
	if (!feof(in_fp))
    ungetc(temp_c, in_fp); // 如果没有读到文件尾部的话，就把当前字符放回去
}

void Graph::readCourses(FILE *in_fp)
{
	if (in_fp == nullptr)
	{
    cout << "Unable to open file" << endl;
    return;
	}
	comment_process(in_fp);
	char buffer[256];
	while (fgets(buffer, sizeof(buffer), in_fp))
	{
    std::istringstream ss(buffer);
    string id, name;
    int credit;
    ss >> id >> name >> credit;

    vector<string> prereqs;
    string prereq;
    while (ss >> prereq)
    {
      prereqs.push_back(prereq);
    }

    course temp(id, name, credit, prereqs);
    head.push_back(temp);
	}
	head.pop_back(); // 弹出最后一个空的节点，害人不浅
}
void Graph::add_edge(string num, vector<string> prerequisite)
{
  int class_idx = (num[1] - '0') * 10 + num[2] - '0' - 1; // 获得欲添加的课程在 head 数组中的位置
  head[class_idx].idx = class_idx;      // 把课程号作为下标写入
  for (auto &pre : prerequisite)
  {
    head[class_idx].enter++; // 节点入度++
    int pre_idx = (pre[1] - '0') * 10 + pre[2] - '0' - 1;
    head[pre_idx].out++;       // 结点出度++
    node_in *cur_ptr = head[pre_idx].next; // 在前置课程的邻接表尾部插入当前课程
    if (!cur_ptr)
    {
      // 邻接表当前行只有头节点
      head[pre_idx].next = new node_in; // 添加新节点
      head[pre_idx].next->idx_to_corresponsive_course = class_idx;
    }
    else
    {
      while (cur_ptr->next)
      	cur_ptr = cur_ptr->next;	 // 寻找尾巴节点
      cur_ptr->next = new node_in; // 添加新节点
      cur_ptr->next->idx_to_corresponsive_course = class_idx;
    }
  }
  return;
}

void Graph::topological_sort_choose1(int xuefen, int term, ClassTable &class_table)
{
	int buffer[30] = {0}; // 缓冲区,用于存储每次新产生的 0 入度结点，在函数结束前将缓冲区内的结点一次性入栈
	int buf_tail = -1;    // 队列结构,指示队列尾部
	new_add = 0;
	if (!is_sort) // 首次运行
	{
    is_sort = true;
    for (auto &i : head) // 把所有入度为 0 的顶点入栈
      if (i.enter == 0 && i.id != "")
      	zero_in_deg.push(i);
  }

	while (zero_in_deg.size())
	{
    course temp; // 临时变量，用于存储出队元素
    temp = zero_in_deg.front();
    if (xuefen + temp.credits > up_ceilling_every_term)
      break;
    xuefen += temp.credits;
    class_table.push_back(term, temp.name);
    zero_in_deg.pop();
    node_in *p_front = head[temp.idx].next; // 双指针法释放链表空间
    node_in *p_back = head[temp.idx].next;
    while (p_front) // 搜索一行邻接表
    {
      p_back = p_front;
      p_front = p_front->next;
      if (--head[p_back->idx_to_corresponsive_course].enter == 0) // 检查这个结点入度是否为 0
      {
      	buffer[++buf_tail] = p_back->idx_to_corresponsive_course; // 新的 0 入度结点写入缓冲区
      }
      delete p_back;
    }
	}
  for (int i = 0; i <= buf_tail; i++) // 将缓冲区内的结点入栈
  {
    zero_in_deg.push(head[buffer[i]]);
    new_add++;
  }
  return;
}

bool Graph::check_if_valid(void)
{
  bool valid = true;
  for (auto i : head)
  {
    if (i.enter != 0)
    { 
      valid = false;
      break;
    }
   }
  return valid;
}

void Graph::topological_sort_choose2(int xuefen, int term, ClassTable &class_table)
{
  int buffer[30] = {0}; // 缓冲区,用于存储每次新产生的 0 入度结点，在函数结束前将缓冲区内的结点一次性入栈
  int buf_tail = -1;    // 队列结构,指示队列尾部
  new_add = 0;
  if (!is_sort) // 首次运行
  {
  is_sort = true;
    for (auto &i : head) // 把所有入度为 0 的顶点入栈
      if (i.enter == 0 && i.id != "")
      	zero_in_deg.push(i);
  }

 while (zero_in_deg.size())
  {
    course temp; // 临时变量，用于存储出队元素
    temp = zero_in_deg.front();
    zero_in_deg.pop(); // 最大元素出队
    class_table.push_back(term, temp.name);
    node_in *p_front = head[temp.idx].next; // 双指针法释放链表空间
    node_in *p_back = head[temp.idx].next;

    while (p_front)
    {
      p_back = p_front;
      p_front = p_front->next;
      if (--head[p_back->idx_to_corresponsive_course].enter == 0) // 检查这个结点入度是否为 0
      {
      	buffer[++buf_tail] = p_back->idx_to_corresponsive_course; // 新的 0 入度结点写入缓冲区
      }
      delete p_back;
   }
  }

  for (int i = 0; i <= buf_tail; i++) // 将缓冲区内的结点入栈
  {
    zero_in_deg.push(head[buffer[i]]);
    new_add++;
  }
  return;
}
