#pragma once
#include<iostream>
#include<cassert>
using namespace std;
#define Elemtype int

class QueueNode
{
public:
	Elemtype elem;
	QueueNode* next; //ָ�������ö��н������ ������һ�����
};

class Queue
{
public:
	QueueNode* head;
	QueueNode* tail;  //��������ʽ�洢ʵ�� �������������н�����͵�ָ������ָ����н��
};

//���еĳ�ʼ��
void QueueInit(Queue* q);

//���ٶ���
void QueueDestroy(Queue* q);

//����
void QueuePush(Queue* q, Elemtype x);

//����
void QueuePop(Queue* q);

//�ж϶ӿ�
bool QueueEmpty(Queue* q);

//�ӵĴ�С
int QueueSize(Queue* q);

//��ȡ��ͷԪ��
Elemtype QueueFront(Queue* q);

//��ȡ��βԪ��
Elemtype QueueBack(Queue* q);
