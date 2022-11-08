#pragma once
#include<iostream>
#include<string>
using namespace std;
class Worker
{
public:
	//展示个人信息
	virtual void showInfo() = 0;
	//获取部门名称
	virtual string getEmpDeptName() = 0;

	
	int m_Id;
	string m_Name;
	int m_Did; // 部门编号

};