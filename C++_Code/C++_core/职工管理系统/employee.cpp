#include"employee.h"
//���캯��
Employee::Employee(int id, string name, int did)
{
	this->m_DeptId = did;
	this->m_Id = id;
	this->m_Name = name;
}

void Employee:: showInfo()
{
	cout << "ְ�����  " << this->m_Id << endl;
	cout << "ְ������  " << this->m_Name << endl;
	cout << "ְ����λ  " << this->getDeptName() << endl;
	cout << "��λְ����ɾ������Ĺ���" << endl;
}
string Employee::getDeptName()
{
	return "Ա��";
}