#pragma once
#include"work.h"
class Boss :public Worker
{
public:
	Boss(int id, string name, int did);
	virtual void showInfo();
	//��ȡ��λ����
	virtual string getDeptName();
};