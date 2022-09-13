#pragma once
#include"work.h"
#include<iostream>
using namespace std;
class Manager : public Worker
{
public:
	Manager(int id, string name, int did);
	virtual void showInfo();
	//获取岗位名称
	virtual string getDeptName();
};
