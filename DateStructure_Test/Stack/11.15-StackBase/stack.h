#pragma once  // 防止头文件重复包含
#include<iostream>
#include<cassert>//利用来断言来判断执行条件
using namespace std;
#define Elemtype int  //宏定义一个Elemtype 为 int类型

//创建一个Stack（栈） 类
class Stack
{
public:
	Elemtype* elem;
	int top;
	int capacity;
};

//初始化栈
void StackInit(Stack* s);

//销毁栈
void StackDestroy(Stack* s);

//进栈
void StackPush(Stack* s, Elemtype x);

//出栈
void StackPop(Stack* s);

//获取栈顶元素
Elemtype StackTop(Stack *s);

//栈空
bool StackEmpty(Stack* s);

//栈的大小
int StackSize(Stack* s);
