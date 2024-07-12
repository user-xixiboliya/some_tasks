#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <cstring>
#include <iostream>
#include <queue>
#include<vector>
using namespace std;

typedef char class_name[20];
typedef char class_num[4];
void comment_process(FILE* in_fp);


struct node_this //这种结点仅在本文件内使用
{
	string data; //课程名称
	node_this* next ; //下一节点的指针
	node_this(string data_,node_this* next_){data = data_;next = next_;}
	node_this(){data = '\0';next = nullptr;}
};

class ClassTable
{
public:
	node_this head[12]; //表头，head[i] 上挂的是第 i+1 学期的课
  ClassTable() {
    for (auto &i : head) {
        i = node_this();   //进行初始化,并使用了虚拟头节点。
    }
  }
  void push_back(int term, string name) //尾插法
  {
    node_this* tmp_ptr = &head[term];
    while (tmp_ptr->next)
    tmp_ptr = tmp_ptr->next; //寻找尾节点
    tmp_ptr->next = new node_this; //开辟新空间
    tmp_ptr->next->data=name;
  }
void pop_back(int term, string name) //尾部弹出一个结点
  {
    node_this* tmp_ptr = &head[term];
    node_this* tmp_ptr_previous = tmp_ptr;
    while (tmp_ptr->next)
    {
      tmp_ptr_previous = tmp_ptr;
      tmp_ptr = tmp_ptr->next; //找尾节点
    }
    if (tmp_ptr != &head[term])
    {
    name=tmp_ptr->data; //取出课程名
    if (tmp_ptr != &head[term])
     {
        delete tmp_ptr; //释放空间
        tmp_ptr_previous->next = nullptr; //防止野指针
    }
    }
   }
   bool empty(int term)
  {
    return (bool)(!(head[term].next));
    }
	void display_table(int terms)
  {
	  for(int i = 0;i <= terms ; i++)
    {
     cout<<"第"<<i+1<<"学期课程如下: "<<endl;
     node_this* ptr= head[i].next;
     while(ptr!=nullptr)
     {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
      } 
    }
   }
};

//-------------------------------------------------------------------------------------------------
struct node_in
{
  int idx_to_corresponsive_course = 0;
  node_in* next = nullptr; //指针域存指向后继结点的的指针
};

struct course
{
	string id;
  string name; //数据域存课程名
  int idx; //存该结点在数组中的下标，结点出队后用这个下标访问该节点在数组中的位置
  int enter; //数据域存储该结点的入度
  int out ; //存储出度
  int credits;
  node_in* next ; //指针域存指向后继结点的的指针
  vector<string> prerequisites;
  course(string id_in,string name_in,int credit,vector<string> preres){id=id_in,idx=0, enter=0, out=0,name=name_in,credits=credit,next=nullptr; prerequisites=preres;}
	course(){id='\0',idx=0, enter=0, out=0,name='\0',credits=0,next=nullptr; }
};

class Graph
{
public:
	int how_many_course,up_ceilling_every_term;
	vector<course> head; //邻接表头节点，head[i] 是第 i 节课
	queue<course> zero_in_deg; //存储入度为0的结点
	bool is_sort = false; //是否执行过拓扑排序
  int new_add = -1;
  Graph()
	{
		cout<<"请输入一共要学多少门课程 , 以及每学期的学分上限："<<endl;
		cin>>how_many_course>>up_ceilling_every_term;
		cout<<"---------------------------------成功-------------------------------------"<<endl;
		cout<<"---------------------------C:\\Users\\xixiboliya\\Desktop\\course.txt----------------------"<<endl;
	};
	void topological_sort_choose1(int xuefen,int term,ClassTable& class_table); //拓扑排序,均匀
	void topological_sort_choose2(int xuefen,int term,ClassTable& class_table); //拓扑排序，集中
	void add_edge(string num, vector<string> prerequisite); //添加一条有向边到图中，num 是该节点的课序号，prerequsite 是先置课程的序号
	void readCourses(FILE* in_fp);
  bool check_if_valid(void);
};




#endif