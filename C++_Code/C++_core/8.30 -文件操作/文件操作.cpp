//数据可以通过文件的方式保存下来，使数据持久化
//C++中对文件的操作需要包含头文件<fstream>  f -file
//文件类型：文本文件 和二进制文件 
//文本文件是文件以文本的ASCII码值存储在计算机中
//二进制文件是文件以 文本的文本的二进制存储在计算机中，一般读不懂

////#include<ostream>
//#include <fstream>
//using namespace std;
//void test()
//{
//	//包含头文件<fstream> 文件流
//	//创建流对象
//	ofstream ofs;
//
//	//打开文件
//	ofs.open("text.txt", ios :: binary | ios::out);
//
//	//写文件
//	ofs << "hello world" << endl;
//
//	//关闭文件
//	ofs.close();
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//void test()
//{
//	//创建流对象
//	ifstream ifs;
//
//	//打开文件并判断文件是否打开成功
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "打开文件失败" << endl;
//		return;
//	}
//
//	//读取文件 ：四种方式
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf  << endl;
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
//	}
//
//	//关闭文件
//	ifs.close();
//	
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<fstream>
//class Person
//{
//	public:
//		char m_Name[64];
//		int len;
//};
//void test()
//{
//	//创建流对象
//	ofstream ofs("Person.txt", ios::out | ios::binary);
//
//	//打开文件：可以在第二部合并
//	//ofs.open("Person.txt", ios::out | ios::binary);
//
//	//二进制写文件 ： 首先先创建一个对象；然后利用write函数写入
//	Person p = { "张三" ,20 };
//	ofs.write((const char*)&p, sizeof(p));
//
//	//关闭文件
//	ofs.close();
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<fstream>
//class Person
//{
//public:
//	char m_name[64];
//	int len;
//};
//void test()
//{
//	ifstream ifs;
//	ifs.open("Person.txt", ios::out | ios::binary);
//
//	//读数据
//	Person p;
//	ifs.read((char*)&p, sizeof(p));
//
//	cout << "姓名 = " << p.m_name << " age = " << p.len << endl;
//	//关闭文件
//	ifs.close();
//
//}
//int main()
//{
//	test();
//	return 0;
//}