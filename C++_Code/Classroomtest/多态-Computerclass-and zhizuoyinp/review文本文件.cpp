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

//读文件
//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//int main()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	//打开还要判断是否成功找到文件：用 is_open()函数
//	if (!ifs.is_open())
//	{
//		cout << "找不到文件" << endl;
//	}
//
//	//读文件 四种方式 数组和字符来读
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

//二进制文件的写
//#include<iostream>
//using namespace std;
//#include<fstream>
//int main()
//{
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	//写操作需要利用write函数  首先要创建一个对象 然后把内容写入此对象中
//	string n = "abcd";
//
//	ofs.write((const char*)&n, sizeof(n));
//
//	//
//	ofs.close();
//	return 0;
//}

//二进制读文件
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);
//
//	//利用read函数读取对象
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
//public://cpu计算
//	virtual void Calculate() = 0;
//};
//class VideoCard
//{
//public:
//	//显示
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
//	//工作函数
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
//		cout << "intelCPU开始计算了" << endl;
//	}
//};
//class intelVideoCard : public VideoCard
//{
//public:
//	virtual void Display()
//	{
//		cout << "intel的显卡开始显示了" << endl;
//	}
//};
//class intelStorage : public Storage
//{
//public:
//	virtual void storage()
//	{
//		cout << "intel内存条开始存储了" << endl;
//	}
//};
//class levnonCPU : public CPU
//{
//public:
//	virtual void Calculate()
//	{
//		cout << "levnonCPU开始计算了" << endl;
//	}
//};
//class levnonVideoCard : public VideoCard
//{
//public:
//	virtual void Display()
//	{
//		cout << "levnon的显卡开始显示了" << endl;
//	}
//};
//class levnonStorage : public Storage
//{
//public:
//	virtual void storage()
//	{
//		cout << "levnon内存条开始存储了" << endl;
//	}
//};
//void test()
//{
//	//第一台电脑零件
//	CPU* intelcpu = new intelCPU;
//	VideoCard* intelvc = new intelVideoCard;
//	Storage* storage = new intelStorage;
//
//	//第一台电脑
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