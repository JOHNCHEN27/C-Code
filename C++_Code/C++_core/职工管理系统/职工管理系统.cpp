#include<iostream>
#include"workermanager.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;
int main()
{
	//测试
	/*Worker* w = NULL;
	w = new Employee(1, "张三", 1);
	w->showInfo();
	delete w;
	w = new Boss(0, "liu", 0);
	w->showInfo();
	delete w;
	w = new Manager(2, "lisi", 2);
	w->showInfo();
	delete w;*/
	//实例化对象
	//调用成员函数展示菜单
	WorkerManager wm;
	while (1)
	{
		wm.ShowMenu();
		cout << "请输入你的选择： " << endl;
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
		case 2://显示职工
			wm.Show_Emp();
			break;
		case 3://删除职工
			wm.Delete_Emp();
			break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6: // 排序
			wm.Sort_Emp();
			break;
		case 7: //清空文件内容
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;

		}
	}
	return 0;
}