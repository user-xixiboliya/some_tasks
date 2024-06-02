#include "Graph.h"
#include "ClassAssignment.h"
#include <cstdio>

void ClassAssignment::run()
{
	printf("请输入课程信息文件的路径：");
	char path[256] = { '\0' };
	scanf("%s", path);

	FILE* in_fp = fopen(path, "r"); //打开文件
  graph.readCourses(in_fp);
	int i = 0;
  
	for (auto &i : graph.head)
	{
		graph.add_edge(i.id, i.prerequisites);
	}

  cout<<"------------------------------------------肘你 , man !----------------------------------------------"<<endl;
	cout<<"请选择你需要的方式，一是使学生在各学期中的学习负担尽量均匀(输入1)；二是使课程尽可能地集中在前几个学期中(输入2): ";
  int choose,timm;//timm 存放最后究竟排了几学期
	cin>>choose;
for(int i = 0; i < 12; i++)
{
	int xuefen = 0;
	if(graph.check_if_valid()&&graph.new_add == 0) //终止条件，注意后面那个new_add==0
	{
		cout<<"这个图是正确的,可以进行拓扑排序! clever!"<<endl;
		timm = i - 1;
		break;
	}
	if(graph.new_add == 0) //1 9 ;4 2 10 11;3 12 6; 5 8;7
	{
    printf("图中存在回路!\n");
    exit(1); 
	}
	if(choose==1)graph.topological_sort_choose1(xuefen,i,class_table);
	if(choose==2)graph.topological_sort_choose2(xuefen,i,class_table);
	if(choose!=1&&choose!=2){cout<<"error,man!"<<endl;exit(1);}
  } //12学期
  
class_table.display_table(timm);

	}
