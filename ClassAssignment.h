#ifndef CLASSASSIGNMENT_H_INCLUDED
#define CLASSASSIGNMENT_H_INCLUDED

#include "Graph.h"
#include <cstdio>

class ClassAssignment
{
private:
	Graph graph; //存储与排序未指定开课学期的课程
	ClassTable class_table; //存储已指定开课学期的课程

public:
	void run(); 
};

#endif