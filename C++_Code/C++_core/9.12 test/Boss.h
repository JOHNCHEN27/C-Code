#pragma once
#include"Worker.h"
#include<iostream>
using namespace std;
class Boss : public Worker
{
public:
	Boss(int d, string n, int did);

	virtual void showInfo();
	//��ȡ��������
	virtual string getEmpDeptName();
};