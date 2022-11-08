#include"WorkerManager.h"

 WorkerManager ::WorkerManager()
{
	 //文件不存在
	 ifstream ifs;
	 ifs.open(FILENAME, ios::in);
	 if (!ifs.is_open())
	 {
		 cout << "文件不存在" << endl;
		 this->m_EmpArray = NULL;
		 this->m_EmpNum = 0;
		 this->m_FileEmpty = true;

		 ifs.close();
		 return;
	 }
	 //文件存在但内容为空
	 char c;
	 ifs >> c;
	 if (ifs.eof())
	 {
		 cout << "文件为空" << endl;
		 this->m_EmpArray = NULL;
		 this->m_EmpNum = 0;
		 this->m_FileEmpty = true;
		 ifs.close();
		 return;
	 }
	 //文件存在且有记录
	 int num = get_EmpNum();
	 this->m_EmpNum = num;
	 this->m_EmpArray = new Worker * [this->m_EmpNum];
	 this->initEmp();
	 
}

WorkerManager:: ~WorkerManager()
 {
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			delete m_EmpArray[i];
			m_EmpArray[i] = NULL;
		}
		delete[] m_EmpArray;
		m_EmpArray = NULL;
		m_EmpNum = 0;

	}
 }

//展示菜单
void WorkerManager::ShowMenu()
{
	cout << "************************************" << endl;
	cout << "********欢迎使用职工管理系统********" << endl;
	cout << "******** 0、退出职工管理系统  ******" << endl;
	cout << "******** 1、增加职工信息  ******" << endl;
	cout << "******** 2、显示职工信息  ******" << endl;
	cout << "******** 3、删除离职职工  ******" << endl;
	cout << "******** 4、修改职工信息  ******" << endl;
	cout << "******** 5、查找职工编号  ******" << endl;
	cout << "******** 6、按照编号排序  ******" << endl;
	cout << "******** 7、清空所有文档  ******" << endl;
}

//退出职工系统： 利用exit（0）函数，调用这段函数程序自动退出
void WorkerManager::existSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); // exit（0）函数调用这段函数，程序自动退出
}

//增加职工
void WorkerManager::AddEmpNum()
{
	cout << "请输入需要增加的职工数量" << endl;
	int addNum;
	cin >> addNum;
	
	if (addNum > 0)
	{
		//添加，需要开辟新的数组空间和大小，添加完成之后赋值给自身的数组和大小
		int NewSize = addNum + this->m_EmpNum;
		Worker** NewSpace = new Worker * [NewSize]; //重新开辟数组大小，
		//并重新赋值
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			NewSpace[i] = this->m_EmpArray[i];
		}

		//添加成员
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			
			cout << "请输入第： "<< i+1 <<"  个职工的ID " << endl;
			cin >> id;
			cout << "请输入第： " << i + 1 << "  个职工的姓名" << endl;
			cin >> name;
			cout << "请选择该职工的岗位" << endl;
			cout << "1、员工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			int select;
			cin >> select;
			Worker* work = NULL;
			switch (select)
			{
			case 1:
				work = new Employee(id,name,select);
				break;
			case 2:
				work = new Manager(id, name, select);
				break;
			case 3:
				work = new Boss(id, name, select);
				break;
			default:
				cout << "输入错误" << endl;
			}
			NewSpace[this->m_EmpNum + i] = work; 

			
		}
		delete[] this->m_EmpArray;
		this->m_EmpNum = NewSize;
		this->m_EmpArray = NewSpace;
		this->m_FileEmpty = false;

		cout << "成功的添加了  " << addNum << "  名职工" << endl;
		//保存到文件
		this->save();
	}
	else
	{
		cout << "输入错误" << endl;
	}
	system("pause");
	system("cls");
}

//显示职工信息
void WorkerManager::ShowEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		this->m_EmpArray[i]->showInfo();
	}
	system("pause");
	system("cls");
}

//保存文件
void WorkerManager::save()
{
	ofstream ofs(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  " << this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_Did << endl;
	}
	ofs.close();

}

//获取文件中的人数
int WorkerManager::get_EmpNum()
{
	//读取文件中的人数
	ifstream ifs(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id&& ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}

//初始化成员
void WorkerManager::initEmp()
{
	ifstream ifs(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* work = NULL;
		if (did == 1)
		{
			work = new Employee(id, name, did);
		}
		else if (did == 2)
		{
			work = new Manager(id, name, did);
		}
		else
			work = new Boss(id, name, did);

		this->m_EmpArray[index] = work;
		index++;
	}
}

//删除职工
void WorkerManager::DeleteEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空或记录为空" << endl;
	}

	cout << "请选择要删除职工的id： " << endl;
	int id;
	cin >> id;
	//判断职工是否存在
	int ret = IsExist(id);
	if (ret != -1)
	{
		for (int i = ret; i < this->m_EmpNum - 1; i++)
		{
			this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		}
		this->m_EmpNum--;
		//保存到文件中
		this->save();
		cout << "删除成功" << endl;

	}
	else
	{
		cout << "该职工不存在" << endl;
	}
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

//修改职工信息
void WorkerManager::ModEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空或记录不存在" << endl;
	}
	cout << "请输入要修改的职工id " << endl;
	int id;
	cin >> id;
	int ret = IsExist(id);
	if (ret != -1)
	{
		//首先将属性置空
		delete this->m_EmpArray[ret];
		int i_d;
		string name;
		int select;
		cout << "输入新的职工id为：   "  << endl;
		cin >> i_d;
		cout << "输入新的职工姓名： " << endl;
		cin >> name;
		cout << "输入新的职工岗位： " << endl;
		cout << "1、员工" << endl;
		cout << "2、经理" << endl;
		cout << "3、老板" << endl;
		cin >> select;
		Worker* work = NULL;
		switch (select)
		{
			
		case 1:
			work = new Employee(id, name, select);
			break;
		case 2:
			work = new Manager(id, name, select);
			break;
		case 3:
			work = new Boss(id, name, select);
			break;
		default:
			cout << "输入错误" << endl;
			break;
		}
		this->m_EmpArray[ret] = work;
		this->save();
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "该职工不存在" << endl;
	}
	system("pause");
	system("cls");

}

//查找职工编号
void WorkerManager::FindEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空或记录不存在" << endl;
	}
	else
	{
		cout << "请输入要查找的方式： " << endl;
		cout << "1、按职工id查找" << endl;
		cout << "2、按职工姓名查找" << endl;
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "请输入该职工的ID" << endl;
			int id;
			cin >> id;
			//判断该职工是否存在
			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功，该职工的信息为： " << endl;
				this->m_EmpArray[ret]->showInfo();
					
			}
			else
			{
				cout << "该职工不存在" << endl;
			}

		}
		else if (select == 2)
		{
			cout << "请输入要查找的姓名： " << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，该职工信息为： " << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}

			}
			if (flag == false)
			{
				cout << "查找失败，该职工不存在" << endl;
			}

		}
		else
		{
			cout << "输入错误" << endl;
		}
		system("pause");
		system("cls");
	}
}

//按职工编号进行排序
void WorkerManager::SortEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择升序排列 或 降序排雷" << endl;
		cout << "1、升序排列 " << endl;
		cout << "2、降序排列" << endl;
		int select;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minORmax = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[minORmax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minORmax = j; // 如果大于重新赋值下标
					}
				}
				else if (select == 2)
				{
					if (this->m_EmpArray[minORmax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minORmax = j;
					}
				}
				else
				{
					cout << "输入错误" << endl;
				}
			}
			if (minORmax != i)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minORmax];
				this->m_EmpArray[minORmax] = temp;
			}

		}
		cout << "排序完成" << endl;
		system("pause");
		system("cls");
	}
	

}

// 清空所有文档
void WorkerManager::CleanFile()
{
	cout << "确认清空吗 ? " << endl;
	cout << "1、 确认 " << endl;
	cout << "2、 返回" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		//打开ios :: trunc 模式， 如果文件存在删除并重新创建
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL)
		{ // 查看数组是否被释放掉，如果将其进行释放
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
			}
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileEmpty = true;
		}
		cout << "清空成功" << endl;
		

	}
	system("pause");
	system("cls");

}