//#include<iostream>
//using namespace std;
//template <typename Nametype, typename Agetype>
//class Person
//{
//public:
//    Person(string name, int age)
//    {
//        m_Name = name;
//        m_Age = age;
//
//    }
//    void show()
//    {
//        cout << m_Name << " " << m_Age << endl;
//    }
//    Nametype m_Name;
//    Agetype m_Age;
//};
//void test()
//{
//    Person p1("����", 18);
//    p1.show();
//}
//int main()
//{
//    test();
//    return 0;
//}


//��ģ��ͺ���ģ�������
//��ģ�岻�����Զ������Ƶ����ú���
//��ģ���ģ������б��п�����Ĭ�ϲ���
//#include<iostream>
//#include<string >
//using namespace std;
//template <typename Nametype, class Agetype = int> //ģ������б����ָ��Ĭ��ֵ
//class Person                    // ��ͨ����������Agetype ָ��Ĭ��ֵΪint ����
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << this->m_Name << " " << this->m_Age << endl;
//	}
//	Nametype m_Name;
//	Agetype m_Age;
//};
//void test()
//{
//	//��ģ�岻�����Զ������Ƶ�
//	Person<string ,int> p("zhangsan", 20);
//	p.showPerson();
//
//	Person<string> p1("��˽�", 999);
//	p1.showPerson();
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
////��ͨ���Ա����ֱ�Ӵ���
////��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
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
//template<typename T>
//class Myclass
//{
//public:
//	T abs; 
//	void fun()
//	{
//		abs.Person11();
//	}
//	void fun1()
//	{
//		abs.Person22();  //��������ͨ������Ϊ��ģ��ĳ�Ա������û����
//		// ֻ���ڵ��õ�ʱ��Żᴴ��
//	}
//};
//void test()
//{
//	Myclass<Person1> m;
//	m.fun();  
//	m.fun1();  //���ܵ��� ��Ϊָ����m�����е�����absΪPerson1���ͣ�
//	//��pERSON1����ֻ��fun����;
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(string name, int age)
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
//	
//};
//void Ptest(Person<string, int> &p)
//{
//	p.showPerson ();
//}
//void test()
//{
//	Person <string, int>p("��˽�", 888);
//	Ptest(p);
//}
////����ģ�廯
//template<class T1, class T2>
//void ptest01(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//}
//void test01()
//{
//	Person<string, int> p1("�����", 999);
//	ptest01(p1);
//}
////������ģ�廯
//template<class T>
//void Ptest03(T &p2)
//{
//	p2.showPerson();
//	cout << typeid(T).name() << endl;
//
//}
//void test02()
//{
//	Person<string,int>p2("��ɮ", 1000);
//	Ptest03(p2);
//}
//int main()
//{
//	test();
//	test01();
//	test02();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//template<class T>
//class Base
//{
//public:
//	T m;
//};
////class Son : public Base  //�����ָ�������ͨ����������T���������޷�����������ڴ�
////{
////
////};
////���ָ��ͨ�����ͣ���Ҫ������Ҳģ�廯
//template<class T1, class T2>
//class Son :public Base<T2>
//{
//public:
//	void fun()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//};
//void test()
//{
//	Son<int, char> s;
//	s.fun();
//}
//template <class T3>
//class Son1 :public Base<T3>
//{
//public:
//	T3 ma;
//};
//void test01()
//{
//	Son1<int> s2;
//	s2.m = 10;
//	s2.ma = 20;
//	cout << s2.m << "  " << s2.ma << endl;
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 Age);
//
//		void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
////��ģ����ﺯ������ʵ��
//template<class T1, class T2> //��Ҫ���� ����ģ�庯��
//void Person<T1,T2>::showPerson()
//{
//	cout << m_Name << "  " << m_Age << endl;
//}
////��ģ�幹�캯������ʵ��
//template <class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 Age)
//{
//	��
//}
//int main()
//{
//	return 0;
//}

//#include<iostream>
//using namespace std;
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	/*{
//		cout << m_Name << " " << m_Age << endl;
//	}*/
//	T1 m_Name;
//	T2 m_Age;
//};
//template<class T1, class T2>
//Person<T1, T2> ::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//template<class T1, class T2>
//void Person <T1, T2>::showPerson()
//{
//	cout << m_Name << " " << m_Age << endl;
//}
//#include"Person.hpp"
//
//void test()
//{
//	Person<string, int> p("��˽�", 20);
//	p.showPerson();
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<iostream>
using namespace std; 
template<class T1, class T2>
class Person;
template<class T1,class T2>
void fun(Person<T1, T2>p)
{
	cout << p.m_Name << " " << endl;
}
template<class T1, class T2>
class Person
{
	//ȫ�ֺ�����Ԫ ����ʵ��
	friend void printffun(Person<T1, T2>p)
	{
		cout << p.m_Name << " " <<p.m_Age << endl;
	}
	//ȫ�ֺ�������ʵ��
	friend void fun<>(Person<T1, T2>p); //�ӿ�ģ������б�
public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};
void test()
{
	Person <string, int> p("�����", 20);
	printffun(p);
	fun(p);
}
int main()
{
	test();
	return 0;
}
