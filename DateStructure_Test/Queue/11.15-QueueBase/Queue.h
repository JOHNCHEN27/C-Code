#pragma once
#include<iostream>
#include<cassert>
using namespace std;
#define Elemtype int

class QueueNode
{
public:
	Elemtype elem;
	QueueNode* next; //指针类型用队列结点类型 链接下一个结点
};

class Queue
{
public:
	QueueNode* head;
	QueueNode* tail;  //队列用链式存储实现 ，设置两个队列结点类型的指针用来指向队列结点
};

//队列的初始化
void QueueInit(Queue* q);

//销毁队列
void QueueDestroy(Queue* q);

//进队
void QueuePush(Queue* q, Elemtype x);

//出队
void QueuePop(Queue* q);

//判断队空
bool QueueEmpty(Queue* q);

//队的大小
int QueueSize(Queue* q);

//获取队头元素
Elemtype QueueFront(Queue* q);

//获取队尾元素
Elemtype QueueBack(Queue* q);
