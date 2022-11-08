#include<iostream>
#include"WorkerManager.h"

using namespace std;
int main()
{
	WorkerManager w;
	while (true)
	{
		w.ShowMenu();
		cout << "请输入你的选择" << endl;
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 0: // 退出程序
			w.existSystem();
			break;
		case 1: // 增加职工人数
			w.AddEmpNum();
			break;
		case 2:  //显示职工信息
			w.ShowEmp();
			break;
		case 3: //删除职工
			w.DeleteEmp();
			break;
		case 4://修改职工信息
			w.ModEmp();
			break;
		case 5: //查找职工编号
			w.FindEmp();
			break;
		case 6: //按照编号进行排序
			w.SortEmp();
			break;
		case 7: //清空所有文档
			w.CleanFile();
			break;
		default:
			cout << "输入错误请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}