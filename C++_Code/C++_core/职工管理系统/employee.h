#pragma once
#include<iostream>
using namespace std;
#include"work.h"
class Employee : public  Worker
{
public:
	Employee(int id, string name, int did);
	virtual void showInfo() ;
	//获取岗位名称
	virtual string getDeptName() ;

};