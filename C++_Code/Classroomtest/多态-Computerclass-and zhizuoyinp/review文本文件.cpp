//#include<iostream>
//using namespace std;
//#include<fstream>
//int main()
//{
//	ofstream ofs;
//	ofs.open("text.txt", ios::out);
//	ofs << "hello world" << endl;
//	ofs.close();
//	return 0;
//}

//���ļ�
//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//int main()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	//�򿪻�Ҫ�ж��Ƿ�ɹ��ҵ��ļ����� is_open()����
//	if (!ifs.is_open())
//	{
//		cout << "�Ҳ����ļ�" << endl;
//	}
//
//	//���ļ� ���ַ�ʽ ������ַ�����
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c << endl;
//}
//
//
//	ifs.close();
//	return 0;
//}

//�������ļ���д
//#include<iostream>
//using namespace std;
//#include<fstream>
//int main()
//{
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	//д������Ҫ����write����  ����Ҫ����һ������ Ȼ�������д��˶�����
//	string n = "abcd";
//
//	ofs.write((const char*)&n, sizeof(n));
//
//	//
//	ofs.close();
//	return 0;
//}

//�����ƶ��ļ�
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);
//
//	//����read������ȡ����
//	string n;
//	ifs.read((char*)&n, sizeof(n));
//	cout << n << endl;
//
//	ifs.close();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class CPU
//{
//public://cpu����
//	virtual void Calculate() = 0;
//};
//class VideoCard
//{
//public:
//	//��ʾ
//	virtual void Display() = 0;
//};
//class Storage
//{
//public:
//	virtual void storage() = 0;
//};
//class Computer
//{
//public:
//	Computer(CPU *cpu,VideoCard * vc,Storage * st)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_st = st;
//	}
//
//	//��������
//	void work()
//	{
//		m_cpu->Calculate();
//		m_vc->Display();
//		m_st->storage();
//	}
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_st != NULL)
//		{
//			delete m_st;
//			m_st = NULL;
//		}
//
//	}
//
//		CPU* m_cpu;
//		VideoCard* m_vc;
//		Storage* m_st;
//
//};
//class intelCPU : public CPU
//{
//public:
//	virtual void Calculate()
//	{
//		cout << "intelCPU��ʼ������" << endl;
//	}
//};
//class intelVideoCard : public VideoCard
//{
//public:
//	virtual void Display()
//	{
//		cout << "intel���Կ���ʼ��ʾ��" << endl;
//	}
//};
//class intelStorage : public Storage
//{
//public:
//	virtual void storage()
//	{
//		cout << "intel�ڴ�����ʼ�洢��" << endl;
//	}
//};
//class levnonCPU : public CPU
//{
//public:
//	virtual void Calculate()
//	{
//		cout << "levnonCPU��ʼ������" << endl;
//	}
//};
//class levnonVideoCard : public VideoCard
//{
//public:
//	virtual void Display()
//	{
//		cout << "levnon���Կ���ʼ��ʾ��" << endl;
//	}
//};
//class levnonStorage : public Storage
//{
//public:
//	virtual void storage()
//	{
//		cout << "levnon�ڴ�����ʼ�洢��" << endl;
//	}
//};
//void test()
//{
//	//��һ̨�������
//	CPU* intelcpu = new intelCPU;
//	VideoCard* intelvc = new intelVideoCard;
//	Storage* storage = new intelStorage;
//
//	//��һ̨����
//	Computer* computer1 = new Computer(intelcpu, intelvc, storage);
//	computer1->work();
//	delete computer1;
//	cout << "-------------------------" << endl;
//
//	Computer* computer2 = new Computer(new levnonCPU, new levnonVideoCard, new levnonStorage);
//	computer2->work();
//	delete computer2;
//
//	cout << "-------------------------" << endl;
//	Computer computer3(new levnonCPU, new intelVideoCard, new levnonStorage);
//	computer3.work();
//	
//}
//int main()
//{
//	test();
//	return 0;
//}