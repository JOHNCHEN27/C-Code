#include"WorkerManager.h"

 WorkerManager ::WorkerManager()
{
	 //�ļ�������
	 ifstream ifs;
	 ifs.open(FILENAME, ios::in);
	 if (!ifs.is_open())
	 {
		 cout << "�ļ�������" << endl;
		 this->m_EmpArray = NULL;
		 this->m_EmpNum = 0;
		 this->m_FileEmpty = true;

		 ifs.close();
		 return;
	 }
	 //�ļ����ڵ�����Ϊ��
	 char c;
	 ifs >> c;
	 if (ifs.eof())
	 {
		 cout << "�ļ�Ϊ��" << endl;
		 this->m_EmpArray = NULL;
		 this->m_EmpNum = 0;
		 this->m_FileEmpty = true;
		 ifs.close();
		 return;
	 }
	 //�ļ��������м�¼
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

//չʾ�˵�
void WorkerManager::ShowMenu()
{
	cout << "************************************" << endl;
	cout << "********��ӭʹ��ְ������ϵͳ********" << endl;
	cout << "******** 0���˳�ְ������ϵͳ  ******" << endl;
	cout << "******** 1������ְ����Ϣ  ******" << endl;
	cout << "******** 2����ʾְ����Ϣ  ******" << endl;
	cout << "******** 3��ɾ����ְְ��  ******" << endl;
	cout << "******** 4���޸�ְ����Ϣ  ******" << endl;
	cout << "******** 5������ְ�����  ******" << endl;
	cout << "******** 6�����ձ������  ******" << endl;
	cout << "******** 7����������ĵ�  ******" << endl;
}

//�˳�ְ��ϵͳ�� ����exit��0��������������κ��������Զ��˳�
void WorkerManager::existSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0); // exit��0������������κ����������Զ��˳�
}

//����ְ��
void WorkerManager::AddEmpNum()
{
	cout << "��������Ҫ���ӵ�ְ������" << endl;
	int addNum;
	cin >> addNum;
	
	if (addNum > 0)
	{
		//��ӣ���Ҫ�����µ�����ռ�ʹ�С��������֮��ֵ�����������ʹ�С
		int NewSize = addNum + this->m_EmpNum;
		Worker** NewSpace = new Worker * [NewSize]; //���¿��������С��
		//�����¸�ֵ
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			NewSpace[i] = this->m_EmpArray[i];
		}

		//��ӳ�Ա
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			
			cout << "������ڣ� "<< i+1 <<"  ��ְ����ID " << endl;
			cin >> id;
			cout << "������ڣ� " << i + 1 << "  ��ְ��������" << endl;
			cin >> name;
			cout << "��ѡ���ְ���ĸ�λ" << endl;
			cout << "1��Ա��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
				cout << "�������" << endl;
			}
			NewSpace[this->m_EmpNum + i] = work; 

			
		}
		delete[] this->m_EmpArray;
		this->m_EmpNum = NewSize;
		this->m_EmpArray = NewSpace;
		this->m_FileEmpty = false;

		cout << "�ɹ��������  " << addNum << "  ��ְ��" << endl;
		//���浽�ļ�
		this->save();
	}
	else
	{
		cout << "�������" << endl;
	}
	system("pause");
	system("cls");
}

//��ʾְ����Ϣ
void WorkerManager::ShowEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		this->m_EmpArray[i]->showInfo();
	}
	system("pause");
	system("cls");
}

//�����ļ�
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

//��ȡ�ļ��е�����
int WorkerManager::get_EmpNum()
{
	//��ȡ�ļ��е�����
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

//��ʼ����Ա
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

//ɾ��ְ��
void WorkerManager::DeleteEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�ջ��¼Ϊ��" << endl;
	}

	cout << "��ѡ��Ҫɾ��ְ����id�� " << endl;
	int id;
	cin >> id;
	//�ж�ְ���Ƿ����
	int ret = IsExist(id);
	if (ret != -1)
	{
		for (int i = ret; i < this->m_EmpNum - 1; i++)
		{
			this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		}
		this->m_EmpNum--;
		//���浽�ļ���
		this->save();
		cout << "ɾ���ɹ�" << endl;

	}
	else
	{
		cout << "��ְ��������" << endl;
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

//�޸�ְ����Ϣ
void WorkerManager::ModEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�ջ��¼������" << endl;
	}
	cout << "������Ҫ�޸ĵ�ְ��id " << endl;
	int id;
	cin >> id;
	int ret = IsExist(id);
	if (ret != -1)
	{
		//���Ƚ������ÿ�
		delete this->m_EmpArray[ret];
		int i_d;
		string name;
		int select;
		cout << "�����µ�ְ��idΪ��   "  << endl;
		cin >> i_d;
		cout << "�����µ�ְ�������� " << endl;
		cin >> name;
		cout << "�����µ�ְ����λ�� " << endl;
		cout << "1��Ա��" << endl;
		cout << "2������" << endl;
		cout << "3���ϰ�" << endl;
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
			cout << "�������" << endl;
			break;
		}
		this->m_EmpArray[ret] = work;
		this->save();
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "��ְ��������" << endl;
	}
	system("pause");
	system("cls");

}

//����ְ�����
void WorkerManager::FindEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�ջ��¼������" << endl;
	}
	else
	{
		cout << "������Ҫ���ҵķ�ʽ�� " << endl;
		cout << "1����ְ��id����" << endl;
		cout << "2����ְ����������" << endl;
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "�������ְ����ID" << endl;
			int id;
			cin >> id;
			//�жϸ�ְ���Ƿ����
			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ������ϢΪ�� " << endl;
				this->m_EmpArray[ret]->showInfo();
					
			}
			else
			{
				cout << "��ְ��������" << endl;
			}

		}
		else if (select == 2)
		{
			cout << "������Ҫ���ҵ������� " << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�����ְ����ϢΪ�� " << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}

			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ���ְ��������" << endl;
			}

		}
		else
		{
			cout << "�������" << endl;
		}
		system("pause");
		system("cls");
	}
}

//��ְ����Ž�������
void WorkerManager::SortEmp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�ջ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ���������� �� ��������" << endl;
		cout << "1���������� " << endl;
		cout << "2����������" << endl;
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
						minORmax = j; // ����������¸�ֵ�±�
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
					cout << "�������" << endl;
				}
			}
			if (minORmax != i)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minORmax];
				this->m_EmpArray[minORmax] = temp;
			}

		}
		cout << "�������" << endl;
		system("pause");
		system("cls");
	}
	

}

// ��������ĵ�
void WorkerManager::CleanFile()
{
	cout << "ȷ������� ? " << endl;
	cout << "1�� ȷ�� " << endl;
	cout << "2�� ����" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		//��ios :: trunc ģʽ�� ����ļ�����ɾ�������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL)
		{ // �鿴�����Ƿ��ͷŵ��������������ͷ�
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
			}
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileEmpty = true;
		}
		cout << "��ճɹ�" << endl;
		

	}
	system("pause");
	system("cls");

}