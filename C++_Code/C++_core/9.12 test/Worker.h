#pragma once
#include<iostream>
#include<string>
using namespace std;
class Worker
{
public:
	//չʾ������Ϣ
	virtual void showInfo() = 0;
	//��ȡ��������
	virtual string getEmpDeptName() = 0;

	
	int m_Id;
	string m_Name;
	int m_Did; // ���ű��

};