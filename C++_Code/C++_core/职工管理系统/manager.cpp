#include"manager.h"
Manager::Manager(int id, string name, int did)
{
	this->m_DeptId = did;
	this->m_Id = id;
	this->m_Name = name;
}

void Manager::showInfo()
{
	cout << "职工编号  " << this->m_Id << endl;
	cout << "职工姓名  " << this->m_Name << endl;
	cout << "职工岗位  " << this->getDeptName() << endl;
	cout << "岗位职责：完成老板交代的工作" << endl;
}
string Manager::getDeptName()
{
	return "经理";
}