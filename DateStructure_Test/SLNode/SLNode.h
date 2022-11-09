#pragma once
#include<iostream>
using namespace std;
#define Elemtype int
#include<cassert>
; class SLNode
{
public:
	Elemtype elem;
	SLNode *next;
};

SLNode* SLNodeInit();

//头插
void SLNodePushFront(SLNode*& p, Elemtype x);

//头删
void SLNodePopFront(SLNode*& p);

//尾插
void SLNodePushBack(SLNode*& p, Elemtype x);

//尾删
void SLNodePopBack(SLNode*& p);

//销毁单链表
void SLNodeDestroy(SLNode*& p);

//查找结点 并返回
SLNode* SLNodeFind(SLNode*& p, Elemtype x);

//在某个结点前插入元素
void SLNodeInsert(SLNode* &p, SLNode* pos, Elemtype x);

//删除某个结点
void SLNodeErase(SLNode*& p, SLNode* pos);

//创建结点
SLNode* SLNodeCreate(Elemtype x);

//打印
void SLNodePrintf(SLNode* p);