#include"Boss.h"
Boss::Boss(int d, string n, int did)
{
	this->m_Id = d;
	this->m_Name = n;
	this->m_Did = did;
}

void Boss::showInfo()
{
	cout << "ְ��ID��  " << this->m_Id << "    " << "ְ������Ϊ:  " << this->m_Name
		<< "   " << "ְ����λΪ�� " << this->getEmpDeptName() << endl;
	cout << "�ø�λ��ְ���ǣ� �������ϼ������Ĺ���" << endl;
}
//��ȡ��������
string Boss::getEmpDeptName()
{
	return "����";
}