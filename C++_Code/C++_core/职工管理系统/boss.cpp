#include"boss.h"
Boss::Boss(int id, string name, int did)
{
	this->m_DeptId = did;
	this->m_Id = id;
	this->m_Name = name;
}

void Boss::showInfo()
{
	cout << "ְ�����  " << this->m_Id << endl;
	cout << "ְ������  " << this->m_Name << endl;
	cout << "ְ����λ  " << this->getDeptName() << endl;
	cout << "��λְ�𣺹���˾" << endl;
}
string Boss::getDeptName()
{
	return "�ϰ�";
}