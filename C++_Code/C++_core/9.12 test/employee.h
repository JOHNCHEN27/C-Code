#pragma once
#include"Worker.h"
#include<iostream>
using namespace std;
class Employee : public Worker
{
public:
	//���캯��
	Employee(int d, string n, int did) ;
	virtual void showInfo();
	//��ȡ��������
	virtual string getEmpDeptName();
};