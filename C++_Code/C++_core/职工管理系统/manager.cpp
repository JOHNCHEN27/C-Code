#include"manager.h"
Manager::Manager(int id, string name, int did)
{
	this->m_DeptId = did;
	this->m_Id = id;
	this->m_Name = name;
}

void Manager::showInfo()
{
	cout << "ְ�����  " << this->m_Id << endl;
	cout << "ְ������  " << this->m_Name << endl;
	cout << "ְ����λ  " << this->getDeptName() << endl;
	cout << "��λְ������ϰ彻���Ĺ���" << endl;
}
string Manager::getDeptName()
{
	return "����";
}