#include"Boss.h"
Boss::Boss(int d, string n, int did)
{
	this->m_Id = d;
	this->m_Name = n;
	this->m_Did = did;
}

void Boss::showInfo()
{
	cout << "职工ID：  " << this->m_Id << "    " << "职工姓名为:  " << this->m_Name
		<< "   " << "职工岗位为： " << this->getEmpDeptName() << endl;
	cout << "该岗位的职责是： 负责经理及上级交代的工作" << endl;
}
//获取部门名称
string Boss::getEmpDeptName()
{
	return "经理";
}