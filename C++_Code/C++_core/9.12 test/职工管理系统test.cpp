#include<iostream>
#include"WorkerManager.h"

using namespace std;
int main()
{
	WorkerManager w;
	while (true)
	{
		w.ShowMenu();
		cout << "���������ѡ��" << endl;
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 0: // �˳�����
			w.existSystem();
			break;
		case 1: // ����ְ������
			w.AddEmpNum();
			break;
		case 2:  //��ʾְ����Ϣ
			w.ShowEmp();
			break;
		case 3: //ɾ��ְ��
			w.DeleteEmp();
			break;
		case 4://�޸�ְ����Ϣ
			w.ModEmp();
			break;
		case 5: //����ְ�����
			w.FindEmp();
			break;
		case 6: //���ձ�Ž�������
			w.SortEmp();
			break;
		case 7: //��������ĵ�
			w.CleanFile();
			break;
		default:
			cout << "�����������������" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}