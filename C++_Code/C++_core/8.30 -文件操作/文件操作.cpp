//���ݿ���ͨ���ļ��ķ�ʽ����������ʹ���ݳ־û�
//C++�ж��ļ��Ĳ�����Ҫ����ͷ�ļ�<fstream>  f -file
//�ļ����ͣ��ı��ļ� �Ͷ������ļ� 
//�ı��ļ����ļ����ı���ASCII��ֵ�洢�ڼ������
//�������ļ����ļ��� �ı����ı��Ķ����ƴ洢�ڼ�����У�һ�������

////#include<ostream>
//#include <fstream>
//using namespace std;
//void test()
//{
//	//����ͷ�ļ�<fstream> �ļ���
//	//����������
//	ofstream ofs;
//
//	//���ļ�
//	ofs.open("text.txt", ios :: binary | ios::out);
//
//	//д�ļ�
//	ofs << "hello world" << endl;
//
//	//�ر��ļ�
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
//	//����������
//	ifstream ifs;
//
//	//���ļ����ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "���ļ�ʧ��" << endl;
//		return;
//	}
//
//	//��ȡ�ļ� �����ַ�ʽ
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
//	//�ر��ļ�
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
//	//����������
//	ofstream ofs("Person.txt", ios::out | ios::binary);
//
//	//���ļ��������ڵڶ����ϲ�
//	//ofs.open("Person.txt", ios::out | ios::binary);
//
//	//������д�ļ� �� �����ȴ���һ������Ȼ������write����д��
//	Person p = { "����" ,20 };
//	ofs.write((const char*)&p, sizeof(p));
//
//	//�ر��ļ�
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
//	//������
//	Person p;
//	ifs.read((char*)&p, sizeof(p));
//
//	cout << "���� = " << p.m_name << " age = " << p.len << endl;
//	//�ر��ļ�
//	ifs.close();
//
//}
//int main()
//{
//	test();
//	return 0;
//}