#pragma once
#include<iostream>
#include"Worker.h"
#include "Boss.h"
#include "employee.h"
#include"manager.h"
#define FILENAME "test.txt"
#include<fstream>
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	
	~WorkerManager();
	//ְ������
	int m_EmpNum;
	//ְ��ָ��
	Worker** m_EmpArray;
	//չʾ�˵�
	void ShowMenu();
	//�˳�ְ��ϵͳ
	void existSystem();
	//����ְ��
	void AddEmpNum();
	//�����ļ�
	void save();

	//�ļ�Ϊ�յı�־
	bool m_FileEmpty;

	//��ʾְ����Ϣ
	void ShowEmp();
	//��ȡ�ļ��е�����
	int get_EmpNum();
	//��ʼ����Ա
	void initEmp();

	//ɾ��ְ��
	void DeleteEmp();
	//�ж�ְ���Ƿ����
	int IsExist(int a);

	//�޸�ְ����Ϣ
	void ModEmp();

	//����ְ�����
	void FindEmp();

	//��ְ����Ž�������
	void SortEmp();

	//��������ĵ�
	void CleanFile();


	



};