#include<iostream>
#include"workermanager.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;
int main()
{
	//����
	/*Worker* w = NULL;
	w = new Employee(1, "����", 1);
	w->showInfo();
	delete w;
	w = new Boss(0, "liu", 0);
	w->showInfo();
	delete w;
	w = new Manager(2, "lisi", 2);
	w->showInfo();
	delete w;*/
	//ʵ��������
	//���ó�Ա����չʾ�˵�
	WorkerManager wm;
	while (1)
	{
		wm.ShowMenu();
		cout << "���������ѡ�� " << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			wm.existSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.Show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Delete_Emp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			break;
		case 6: // ����
			wm.Sort_Emp();
			break;
		case 7: //����ļ�����
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;

		}
	}
	return 0;
}