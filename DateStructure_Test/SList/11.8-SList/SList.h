#pragma once
#include<iostream>
using namespace std;
#include<cassert> // �����ж����� Ȼ���Ƿ�ִ��֮������
#define Max 200
#define Elemtype int 


class SList
{
public:
	//Elemtype elem[Max] // ��̬˳������ǻ��ǲ��ö�̬˳�����ʵ��
	Elemtype* elem; //ָ���������
	int size;
	int capacity;

};

//��ʼ��
void SListInit(SList* p);

//����
void SListDestroy(SList* p);

//��ӡ˳���
void Printf(SList* p);

//ͷ��
void SListPushFront(SList* p, Elemtype x);

//ͷɾ
void SListPopFront(SList* p);

//β��
void SListPushBack(SList* p, Elemtype x);

//βɾ
void SListPopBack(SList* p);

//����ָ��Ԫ�ز������±�
int SListFind(SList* p, Elemtype x);

//ɾ��ָ��Ԫ��
void SListErase(SList* p, Elemtype pos);

//��ָ��Ԫ��λ�ò���Ԫ��
void SListInsert(SList* p, Elemtype pos, Elemtype x);

//�ж�����
void CheckCapacity(SList *p);