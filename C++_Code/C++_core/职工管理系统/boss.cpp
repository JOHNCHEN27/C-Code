#include"boss.h"
Boss::Boss(int id, string name, int did)
{
	this->m_DeptId = did;
	this->m_Id = id;
	this->m_Name = name;
}

void Boss::showInfo()
{
	cout << "职工编号  " << this->m_Id << endl;
	cout << "职工姓名  " << this->m_Name << endl;
	cout << "职工岗位  " << this->getDeptName() << endl;
	cout << "岗位职责：管理公司" << endl;
}
string Boss::getDeptName()
{
	return "老板";
}