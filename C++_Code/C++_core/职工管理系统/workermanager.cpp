#include"workermanager.h"
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//�ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;

	}

	//�ļ����ڣ�������Ϊ��
	char ch;
	ifs >> ch; //��һ������ ���Ϊ��
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	//�ļ��������м�¼
	int num = this->get_EmpNum();
	/*cout << "ְ������Ϊ�� " << num << endl;*/
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����ݴ�ŵ�������
	this->init_Emp();
	/*for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "ְ����ţ� " << this->m_EmpArray[i]->m_Id
			<< "  ְ������:   " << this->m_EmpArray[i]->m_Name
			<< "  ְ������:   " << this->m_EmpArray[i]->m_DeptId << endl;
	} */
}



//��ʼ����Ա
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

//��պ�����ʵ��
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ� " << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//��ģʽ ios :: trunc �������ɾ���ļ������´���
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
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//��ְ��id��������
void WorkerManager::Sort_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�ջ��¼������" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ�� " << endl;
		cout << "1����ְ��id������������" << endl;
		cout << "2����ְ��id���н�������" << endl;

		int select;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int max = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				//��������
				if (select == 1)
				{
					if (this->m_EmpArray[max]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						max = j;
					}
				}
				else //��������
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
		cout << "����Ϊ���" << endl;
		this->save();
		this->Show_Emp();
	}
}

//��ȡ����
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
//�����ļ�
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
	cout << "*********  ��ӭʹ��ְ������ϵͳ  ********" << endl;
	cout << "************  0.�˳��������   **********" << endl;
	cout << "************  1.����ְ����Ϣ   **********" << endl;
	cout << "************  2.��ʾְ����Ϣ   **********" << endl;
	cout << "************  3.ɾ����ְְ��   **********" << endl;
	cout << "************  4.�޸�ְ����Ϣ   **********" << endl;
	cout << "************  5.����ְ����Ϣ   **********" << endl;
	cout << "************  6.���ձ������   **********" << endl;
	cout << "************  7.��������ĵ�   **********" << endl;
	cout << "*****************************************" << endl;
	cout << endl;


}
void WorkerManager::existSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0); //exit������������ֻҪ������κ��� �����Զ��˳�
}

//����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�ջ��¼������ " << endl;
	}
	else
	{
		cout << "�������Ҫ���ҵķ�ʽ�� " << endl;
		cout << "1����ְ��id���� " << endl;
		cout << "2������������  " << endl;
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "������Ҫ���ҵ�ְ��id " << endl;
			int id;
			cin >> id;
			int ret = this->IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ��id Ϊ   " << this->m_EmpArray[ret]->m_Id
					<< endl;
			}
			else
			{
				cout << "����ʧ�ܣ���ְ��������" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "������Ҫ���ҵ�ְ�������� " << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�����ְ��������Ϊ�� " << this->m_EmpArray[i]->m_Name
						<< endl;

					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
				
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else
		{
			cout << "�������" << endl;
		}

	}
	system("pause");
	system("cls");
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�� " << endl;
	}
	else
	{
		cout << " ������Ҫ�޸ĵ�ְ���� " << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ұ�ŵ�ְ�������������ÿգ�Ȼ�����¸�ֵ
			delete this->m_EmpArray[ret];
			string name;
			int newid;
			int newselect;
			cout << "����ְ����Ϊ :  " << id << "������ " << endl;
			cin >> name;
			cout << "�������µ�id��  " << endl;
			cin >> newid;
			cout << "�����������λ�� " << endl;
			cout << "1����ְͨ�� " << endl;
			cout << "2������ " << endl;
			cout << "3���ϰ� " << endl;
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
			cout << "�޸ĳɹ� " << this->m_EmpArray[ret]->m_DeptId << endl;

			//�����ļ�
			this->save();
		}
		else
			cout << "���޴��� " << endl;
	}
	system("pause");
	system("cls");
}

//ɾ��ְ����Ϣ
void WorkerManager::Delete_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�� " << endl;
	}
	else
	{
		cout << "����Ҫɾ����Ա��:  " << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index == -1)
		{
			cout << "��ְ�������� " << endl;
		}
		else
		{
			for (int i=index;i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			//���浽�ļ���
			this->save();

			cout << "ɾ���ɹ� " << endl;
		}

	}
	system("pause");
	system("cls ");
}

//ְ���Ƿ���ں���ʵ��
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

//��ʾְ����Ϣ
void WorkerManager::Show_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
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
	cout << "��������ӵ�ְ������ " << endl;
	int addNum ;
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//������ӿռ��С:ԭ������������ ����������
		int NewSize = this->m_EmpNum + addNum;
		//�����¿ռ�
		Worker** newSpace = new Worker * [NewSize];

		//��ԭ���Ŀռ��µ����ݿ������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�����������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect; //����ѡ��
			cout << "������� " << i + 1 << " ����ְ�����" << endl;
			cin >> id;
			cout << "������� " << i + 1 << " ����ְ������" << endl;
			cin >> name;
			cout << "��ѡ���ְ����λ: " << endl;
			cout << " 1����ְͨ��" << endl;
			cout << " 2�� ����" << endl;
			cout << " 3�� �ϰ�" << endl;
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

			//������ְ��ְ�𣬱��浽������
			newSpace[this->m_EmpNum + i] = work;
		}
			//�ͷ�ԭ�еĿռ�
			delete[] this->m_EmpArray;

			this->m_FileEmpty = false;
			//����ԭ�ռ�ָ��
			this->m_EmpArray = newSpace;
			//��������
			this->m_EmpNum = NewSize;
			

			cout << "�ɹ������  "<< addNum << "  ����ְ��" << endl;

			//�������ݵ��ļ���
			this->save();
		
	}
	else
	{
		cout << "�������� " << endl;
	}

	system("pause");
	system("cls");
}