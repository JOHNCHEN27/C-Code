#pragma once
#include<iostream>
using namespace std;
#include"work.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "explicit.txt"
class WorkerManager
{
public:
	WorkerManager() ; // ���캯��������
	void ShowMenu(); //չʾ�˵�
	void existSystem(); //ʵ���˳�����
	//��¼ְ������
	int m_EmpNum;
	//ְ������ָ��
	Worker** m_EmpArray;

	//�����ļ�
	void save();
	//���ְ��
	void Add_Emp();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileEmpty;

	//��ȡ����
	int get_EmpNum();

	//��ʼ����Ա
	void init_Emp();

	//��ʾְ����Ϣ
	void Show_Emp();

	//ɾ��ְ����Ϣ
	void Delete_Emp();

	//�ж�ְ���Ƿ����
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//ְ���������ʵ��
	void Sort_Emp();

	//��պ���ʵ��
	void Clean_File();
	~WorkerManager() ; //��������������
};