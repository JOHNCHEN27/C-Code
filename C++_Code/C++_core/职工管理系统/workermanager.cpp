#include"workermanager.h"
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//文件不存在的情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;

	}

	//文件存在，但数据为空
	char ch;
	ifs >> ch; //读一个数据 如果为空
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	//文件存在且有记录
	int num = this->get_EmpNum();
	/*cout << "职工人数为： " << num << endl;*/
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件中的数据存放到数组中
	this->init_Emp();
	/*for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "职工编号： " << this->m_EmpArray[i]->m_Id
			<< "  职工姓名:   " << this->m_EmpArray[i]->m_Name
			<< "  职工部门:   " << this->m_EmpArray[i]->m_DeptId << endl;
	} */
}



//初始化成员
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
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
			{
				work = new Boss(id, name, did);
			}
			this->m_EmpArray[index] = work;
			index++;
	}

}

//清空函数的实现
void WorkerManager::Clean_File()
{
	cout << "确认清空？ " << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//打开模式 ios :: trunc 如果存在删除文件并重新创建
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete [] m_EmpArray;
			m_EmpArray = NULL;
			this->m_FileEmpty = true;

		}
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}

//按职工id进行排序
void WorkerManager::Sort_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空或记录不存在" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式： " << endl;
		cout << "1、按职工id进行升序排序" << endl;
		cout << "2、按职工id进行降序排序" << endl;

		int select;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int max = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				//升序排列
				if (select == 1)
				{
					if (this->m_EmpArray[max]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						max = j;
					}
				}
				else //降序排列
				{
					if (this->m_EmpArray[max]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						max = j;
					}
				}
			}
			if (i != max)
			{
				Worker* temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[max];
				m_EmpArray[max] = temp;
			}

		}
		cout << "排序为完成" << endl;
		this->save();
		this->Show_Emp();
	}
}

//读取人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	ifs.close();
	return num;
}
WorkerManager::~WorkerManager()
{

}
//保存文件
void WorkerManager::save()
{
	ofstream ofs(FILENAME, ios::out);
	for (int i = 0; i < m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}
void WorkerManager::ShowMenu()
{
	cout << "*****************************************" << endl;
	cout << "*********  欢迎使用职工管理系统  ********" << endl;
	cout << "************  0.退出管理程序   **********" << endl;
	cout << "************  1.增加职工信息   **********" << endl;
	cout << "************  2.显示职工信息   **********" << endl;
	cout << "************  3.删除离职职工   **********" << endl;
	cout << "************  4.修改职工信息   **********" << endl;
	cout << "************  5.查找职工信息   **********" << endl;
	cout << "************  6.按照编号排序   **********" << endl;
	cout << "************  7.清空所有文档   **********" << endl;
	cout << "*****************************************" << endl;
	cout << endl;


}
void WorkerManager::existSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //exit函数的作用是只要调用这段函数 程序自动退出
}

//查找职工
void WorkerManager::Find_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空或记录不存在 " << endl;
	}
	else
	{
		cout << "请输出你要查找的方式： " << endl;
		cout << "1、按职工id查找 " << endl;
		cout << "2、按姓名查找  " << endl;
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "请输入要查找的职工id " << endl;
			int id;
			cin >> id;
			int ret = this->IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功，该职工id 为   " << this->m_EmpArray[ret]->m_Id
					<< endl;
			}
			else
			{
				cout << "查找失败，该职工不存在" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "请输入要查找的职工姓名： " << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，该职工的姓名为： " << this->m_EmpArray[i]->m_Name
						<< endl;

					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
				
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else
		{
			cout << "输入错误" << endl;
		}

	}
	system("pause");
	system("cls");
}

//修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空 " << endl;
	}
	else
	{
		cout << " 请输入要修改的职工： " << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//查找编号的职工，将其属性置空，然后重新赋值
			delete this->m_EmpArray[ret];
			string name;
			int newid;
			int newselect;
			cout << "更改职工号为 :  " << id << "的姓名 " << endl;
			cin >> name;
			cout << "请输入新的id：  " << endl;
			cin >> newid;
			cout << "请重新输入岗位： " << endl;
			cout << "1、普通职工 " << endl;
			cout << "2、经理 " << endl;
			cout << "3、老板 " << endl;
			cin >> newselect;
			Worker* work = NULL;
			switch (newselect)
			{
			case 1:
				work = new Employee(newid, name, newselect);
				break;
			case 2:
				work = new Manager(newid, name, newselect);
				break;
			case 3:
				work = new Boss(newid, name, newselect);
				break;
			default:
				break;

			}
			this->m_EmpArray[ret] = work;
			cout << "修改成功 " << this->m_EmpArray[ret]->m_DeptId << endl;

			//保存文件
			this->save();
		}
		else
			cout << "查无此人 " << endl;
	}
	system("pause");
	system("cls");
}

//删除职工信息
void WorkerManager::Delete_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空 " << endl;
	}
	else
	{
		cout << "输入要删除的员工:  " << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index == -1)
		{
			cout << "该职工不存在 " << endl;
		}
		else
		{
			for (int i=index;i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			//保存到文件中
			this->save();

			cout << "删除成功 " << endl;
		}

	}
	system("pause");
	system("cls ");
}

//职工是否存在函数实现
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

//显示职工信息
void WorkerManager::Show_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件为空或不存在" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
void WorkerManager::Add_Emp()
{
	cout << "请输入添加的职工数量 " << endl;
	int addNum ;
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算添加空间大小:原来的人数加上 新增的人数
		int NewSize = this->m_EmpNum + addNum;
		//开辟新空间
		Worker** newSpace = new Worker * [NewSize];

		//将原来的空间下的数据拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//批量添加数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect; //部门选择
			cout << "请输入第 " << i + 1 << " 个新职工编号" << endl;
			cin >> id;
			cout << "请输入第 " << i + 1 << " 个新职工姓名" << endl;
			cin >> name;
			cout << "请选择该职工岗位: " << endl;
			cout << " 1、普通职工" << endl;
			cout << " 2、 经理" << endl;
			cout << " 3、 老板" << endl;
			cin >> dSelect;
			Worker* work = NULL;
			switch (dSelect)
			{
			case 1:
				work = new Employee(id, name, 1);
				break;
			case 2:
				work = new Manager(id, name, 2);
				break;
			case 3:
				work = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			//将创建职工职责，保存到数组中
			newSpace[this->m_EmpNum + i] = work;
		}
			//释放原有的空间
			delete[] this->m_EmpArray;

			this->m_FileEmpty = false;
			//更新原空间指向
			this->m_EmpArray = newSpace;
			//更新人数
			this->m_EmpNum = NewSize;
			

			cout << "成功添加了  "<< addNum << "  名新职工" << endl;

			//保存数据到文件中
			this->save();
		
	}
	else
	{
		cout << "输入有误 " << endl;
	}

	system("pause");
	system("cls");
}