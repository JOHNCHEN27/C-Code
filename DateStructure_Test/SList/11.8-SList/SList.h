#pragma once
#include<iostream>
using namespace std;
#include<cassert> // 断言判断条件 然后是否执行之后的语句
#define Max 200
#define Elemtype int 


class SList
{
public:
	//Elemtype elem[Max] // 静态顺序表，我们还是采用动态顺序表来实现
	Elemtype* elem; //指针接收数组
	int size;
	int capacity;

};

//初始化
void SListInit(SList* p);

//销毁
void SListDestroy(SList* p);

//打印顺序表
void Printf(SList* p);

//头插
void SListPushFront(SList* p, Elemtype x);

//头删
void SListPopFront(SList* p);

//尾插
void SListPushBack(SList* p, Elemtype x);

//尾删
void SListPopBack(SList* p);

//查找指定元素并返回下标
int SListFind(SList* p, Elemtype x);

//删除指定元素
void SListErase(SList* p, Elemtype pos);

//在指定元素位置插入元素
void SListInsert(SList* p, Elemtype pos, Elemtype x);

//判断容量
void CheckCapacity(SList *p);