#pragma once  // ��ֹͷ�ļ��ظ�����
#include<iostream>
#include<cassert>//�������������ж�ִ������
using namespace std;
#define Elemtype int  //�궨��һ��Elemtype Ϊ int����

//����һ��Stack��ջ�� ��
class Stack
{
public:
	Elemtype* elem;
	int top;
	int capacity;
};

//��ʼ��ջ
void StackInit(Stack* s);

//����ջ
void StackDestroy(Stack* s);

//��ջ
void StackPush(Stack* s, Elemtype x);

//��ջ
void StackPop(Stack* s);

//��ȡջ��Ԫ��
Elemtype StackTop(Stack *s);

//ջ��
bool StackEmpty(Stack* s);

//ջ�Ĵ�С
int StackSize(Stack* s);
