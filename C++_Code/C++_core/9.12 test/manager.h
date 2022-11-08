#pragma once
#include"Worker.h"
#include<iostream>
using namespace std;
class Manager : public Worker
{
public:
	Manager(int d, string n, int did);
	
	virtual void showInfo();
	//获取部门名称
	virtual string getEmpDeptName();
};