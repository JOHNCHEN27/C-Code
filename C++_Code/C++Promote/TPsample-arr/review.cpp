//#include<iostream>
//using namespace std;
//template<class T1, class T2  = int>//����ͨ����������T2һ��Ĭ�ϲ��� int
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << m_Name << " " << m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//void test()
//{
//	Person <string, int>p("��˽�", 20);
//	p.showPerson();   //��ģ���뺯��ģ��������ǣ���ģ�����ֻ������ʾָ������
//	//��ģ��Ĳ����б������Ĭ�ϲ���
//	Person <string>p1("�����", 18);
//	p1.showPerson();
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
////��ͨ��Ա����һ��ʼ�ʹ���
////��ģ���Ա������Ҫ�ڵ���ʱ�Ŵ���
//class Person1
//{
//public:
//	void Person11()
//	{
//		cout << "Person1�ĵ���" << endl;
//	}
//};
//class Person2
//{
//public:
//	void Person22()
//	{
//		cout << "Person2�ĵ���" << endl;
//	}
//};
//template<class T>
//class myclass
//{
//public:
//	T abs;
//	void fun()
//	{
//		abs.Person11();
//	}
//	void fun1()
//	{
//		abs.Person22();	
//	}
//};
//void test()
//{
//	/*myclass<Person1>m;
//	m.fun();*/
//}
//int main()
//{
//	test();
//	return 0;
//}

//��ģ���������������
//#include<iostream>
//using namespace std;
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << m_Name << "   " << m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//void showP(Person<string, int> p)  //ָ���������ͣ�ֱ����ʾ�������������
//{
//	p.showPerson();
//}
//
////������ģ�廯
//template<class T1, class T2>
//void showP1(Person<T1, T2>p)
//{
//	p.showPerson();
//}
//
////��������ģ�廯
//template <class T>
//void showpp(T p)
//{
//	p.showPerson();
//}
//void test()
//{
//	Person<string, int> p1("��˽�", 20);
//	showP(p1);
//	Person<string, int> p2("�����", 18);
//	showP1(p2);
//
//	Person<string, int> p3("��ɮ", 99);
//	showpp(p3);
//}
//int main()
//{
//	test();
//	return 0;
//}

//��ģ����̳�
//#include<iostream>
//using namespace std;
//template <class T>
//class Person
//{
//public:
//	T m;
//};
////��������ָ������T���������ͣ�����Ҳ��Ҫģ�廯
//template<class T1,class T2>
//class son : public Person<T2>  //����ģ�巢���̳�ʱ ������Ҫָ�������е�ͨ����������
//	//T������������޷������ڴ�
//{
//public:
//	void test()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//};
//void test()
//{
//	son<string, int> s;
//	s.test();
//}
//int main()
//{
//	test();
//	return 0;
//}

//��ģ���г�Ա�������캯������ʵ��
//����ʵ����Ҫ�����������Լ���ģ������б�
//#include<iostream>
//using namespace std;
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//��ģ���й��캯������ʵ��
//#include"Person.hpp"
//template<class T1, class T2>  //˵������ģ���еĳ�Ա����
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
////
//template <class T1,class T2>
//void Person<T1, T2> ::showPerson()
//{
//	cout << m_Name << "   " << m_Age << endl;
//}
//void test()
//{
//	Person <string, int> p("sunwuk", 18);
//	p.showPerson();
//}
//int main()
//{
//	test();
//	return 0;
//}

// ��ģ������Ԫ
//#include<iostream>
//using namespace std;
//template <class T1,class T2>
//class Person;
//template <class T1,class T2>
//void fun1(Person<T1, T2>p)
//{
//	cout << "  " << p.m_Name << endl;
//}
//template<class T1, class T2>
//class Person
//{
//	friend void fun(Person<T1, T2>p)
//	{
//		cout << p.m_Name << "  " << p.m_Age << endl;
//	}
//
//	//ȫ�ֺ�������Ԫ������ʵ��
//	friend void fun1<>(Person<T1, T2>p);
//public:
//	Person(T1 name, T2 age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//void test()
//{
//	Person<string, int> p("zhangsan", 20);
//	fun(p);
//	fun1(p);
//}
//int main()
//{
//	test();
//	return 0;
//}

