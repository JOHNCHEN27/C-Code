//#include<iostream>
//using namespace std;
//void swapint(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swapdouble(double& c, double& d)
//{
//	double temp = c;
//	c = d;
//	c = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swapint(a, b);
//	cout << a << "   " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	swapdouble(c, d);
//
//	cout << c << "   " << d << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//template<typename T>  //����һ��ģ�壬���߱�������������T��һ��ͨ�õ���������                
//void myswap(T & a, T & b)  //typename ������class�����ԭ����һ����
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<class T>
//void fun()
//{
//	cout << "fun�ĵ���" << endl;
//}
//
//void test()
//{
//	fun();  //����ֱ�ӵ���ģ�壬 ����ȷ��T���������Ͳſ���ʹ�ã�
//	//���ܺ���ģ��funû�в����������ú���ģ��ʱ����ȷ��һ����������T�ſ���ʹ��
//	fun<int>(); //���Ե��� ��������ʾָ�����͸�����һ����������
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��ʾָ������
//	myswap<int>(a, b);
//	cout << a << " " << b << endl;
//	//�Զ������Ƶ�
//	myswap(a, b);
//	cout << a << " " << b << endl;
//
//	char c = 'c';
//	//myswap(a, c); //�����Զ������Ƶ������Ƶ���һ�µ��������ͣ���Ȼ������ʹ��
//
//	return 0;
//}

//��������
//#include<iostream>
//using namespace std;
////���ú���ģ���������������
//template <typename T>
//void myswap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//
//}
////�ú���ģ��ʵ�������ѡ������
//template <typename T>
//void mysort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; // ���������ĵ�һ�����������ֵ
//		for (int j = i + 1; j < len; j++) //��max��ʣ�µ������бȽϣ��ҳ�������������
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j; //�������max��ֵС�������������������±���н���
//				//һֱ���ҵ�ʣ�µ������
//			}
//		}
//		//һ���ҳ�ʣ������������֮�󣬽������һ�������н���
//		if (arr[max] != arr[i])
//		{
//			myswap(arr[max], arr[i]);
//		}
//	}
//}
//template<typename T>
//void printfsort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//void test()
//{
//	//char������������ӡ
//	char chararr[] = "cdbsae";
//	int len = sizeof(chararr) / sizeof(char);
//	mysort(chararr, len);
//	//��ӡ����������
//	printfsort(chararr, len);
//
//}
//void test01()
//{
//	//int�����������
//	int intarr[] = { 4,2,6,8,3,5,7,41 };
//	int len = sizeof(intarr) / sizeof(len);
//	mysort(intarr, len);
//	printfsort(intarr, len);
//}
//
//int main()
//{
//	test();
//	cout << endl;
//	test01();
//	return 0;
//}

//��ͨ�����ͺ���ģ�������
//��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת��
//����ģ�����ʱ�����ʹ���Զ������Ƶ����򲻿��Է�����ʽ����ת��
//�������ʾָ�����ͣ�����Է�����ʽ����ת��
//#include<iostream>
//using namespace std;
////��ͨ��������
//int myAdd01(int a, int c)
//{
//	return a + c;
//}
////����ģ�����
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd01(a, c) << endl;//���Է����Զ�����ת������ʽ����ת����
//	//�ַ�c ��ASCII����е����� ��99
//
//	//cout << myAdd02(a, c) << endl;// ����ģ�����ʱ���Զ������Ƶ������Է�����ʽ
//	//����ת��
//	cout << myAdd02<int>(a, c) << endl;
//	//����ʾָ������ ���Է�����ʽ����ת����ָ��ͨ������TΪ int����
//
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
////��ͨ����
//void myPrintf(int a, int b)
//{
//	cout << "��ͨ�����ĵ���" << endl;
//}
////����ģ��
//template <typename T>
//void myPrintf( T a ,T b)
//{
//	cout << "����ģ��ĵ���" << endl;
//}
////���غ���ģ��
//template <typename T>
//void myPrintf(T a, T b, T c)
//{
//	cout << "���غ���ģ��ĵ���" << endl;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	myPrintf(a, b); //����ͨ�����ͺ���ģ���ܶ�ʵ��ʱ�����ȵ�����ͨ����
//
//	myPrintf<>(a, b); //���ÿ�ģ������б����ǿ�Ƶ��ú���ģ�壬<>��������һ������ģ��
//
//	//�������ؿ��Է�������
//	myPrintf(a, b, 100);
//
//	//������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'c';
//	myPrintf(c1, c2); //���ȵ��ú���ģ�壬��Ϊchar���ͣ� �������ͨ�����Ļ�
//	//��Ҫ������ʽ����ת���� ������ģ�����ʡ����һ��������ƥ��
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(string name, int a)
//	{
//		m_Name = name;
//		age = a;
//	}
//	string m_Name;
//	int age;
//};
//template<typename T>
//bool mycompare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//template<> bool mycompare(Person & a, Person& b)
//{
//	if (a.m_Name == b.m_Name && a.age == b.age)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = mycompare(a, b);
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//		cout << "a != b" << endl;
//
//}
//void test01()
//{
//	Person p1("zhangsan", 18);
//	Person p2("wangwu", 20);
//	bool ret = mycompare(p1, p2);
//	if (ret)
//	{
//		cout << " p1 == p2" << endl;
//	}
//	else
//		cout << "p1 != p2" << endl;
//
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//    Person(string name, int a)
//    {
//        m_Name = name;
//        age = a;
//    }
//    string m_Name;
//    int age;
//};
//template<typename T>
//bool mycompare(T& a, T& b);
//template<>bool mycompare(Person& p1, Person& p2)
//{
//    if (p1.m_Name == p2.m_Name && p1.age == p2.age)
//    {
//        return true;
//    }
//    else
//        return false;
//}
//void test()
//{
//    Person p1("zhangsan", 20);
//    Person p2("zhangsan", 19);
//    bool ret = mycompare(p1, p2);
//    if (ret)
//    {
//        cout << "p1 == p2" << endl;
//    }
//    else
//        cout << "p1 != p2" << endl;
//
//}
//int main()
//{
//    test();
//    return 0;
//}