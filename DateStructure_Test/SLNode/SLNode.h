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

//ͷ��
void SLNodePushFront(SLNode*& p, Elemtype x);

//ͷɾ
void SLNodePopFront(SLNode*& p);

//β��
void SLNodePushBack(SLNode*& p, Elemtype x);

//βɾ
void SLNodePopBack(SLNode*& p);

//���ٵ�����
void SLNodeDestroy(SLNode*& p);

//���ҽ�� ������
SLNode* SLNodeFind(SLNode*& p, Elemtype x);

//��ĳ�����ǰ����Ԫ��
void SLNodeInsert(SLNode* &p, SLNode* pos, Elemtype x);

//ɾ��ĳ�����
void SLNodeErase(SLNode*& p, SLNode* pos);

//�������
SLNode* SLNodeCreate(Elemtype x);

//��ӡ
void SLNodePrintf(SLNode* p);