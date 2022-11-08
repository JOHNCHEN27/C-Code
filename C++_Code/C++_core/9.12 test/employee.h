#pragma once
#include"Worker.h"
#include<iostream>
using namespace std;
class Employee : public Worker
{
public:
	//构造函数
	Employee(int d, string n, int did) ;
	virtual void showInfo();
	//获取部门名称
	virtual string getEmpDeptName();
};