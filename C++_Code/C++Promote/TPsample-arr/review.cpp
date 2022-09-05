//#include<iostream>
//using namespace std;
//template<class T1, class T2  = int>//给定通用数据类型T2一个默认参数 int
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
//	Person <string, int>p("猪八戒", 20);
//	p.showPerson();   //类模板与函数模板的区别是：类模板调用只能用显示指定类型
//	//类模板的参数列表可以有默认参数
//	Person <string>p1("孙悟空", 18);
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
////普通成员函数一开始就创建
////类模板成员函数需要在调用时才创建
//class Person1
//{
//public:
//	void Person11()
//	{
//		cout << "Person1的调用" << endl;
//	}
//};
//class Person2
//{
//public:
//	void Person22()
//	{
//		cout << "Person2的调用" << endl;
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

//类模板对象做函数参数
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
//void showP(Person<string, int> p)  //指定传入类型，直接显示对象的数据类型
//{
//	p.showPerson();
//}
//
////将参数模板化
//template<class T1, class T2>
//void showP1(Person<T1, T2>p)
//{
//	p.showPerson();
//}
//
////将整个类模板化
//template <class T>
//void showpp(T p)
//{
//	p.showPerson();
//}
//void test()
//{
//	Person<string, int> p1("猪八戒", 20);
//	showP(p1);
//	Person<string, int> p2("孙悟空", 18);
//	showP1(p2);
//
//	Person<string, int> p3("唐僧", 99);
//	showpp(p3);
//}
//int main()
//{
//	test();
//	return 0;
//}

//类模板与继承
//#include<iostream>
//using namespace std;
//template <class T>
//class Person
//{
//public:
//	T m;
//};
////如果想灵活指定父类T的数据类型，子类也需要模板化
//template<class T1,class T2>
//class son : public Person<T2>  //当类模板发生继承时 子类需要指定父类中的通用数据类型
//	//T，否则编译器无法分配内存
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

//类模板中成员函数构造函数类外实现
//类外实现需要加上作用域以及空模板参数列表
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
//类模板中构造函数类外实现
//#include"Person.hpp"
//template<class T1, class T2>  //说明是类模板中的成员函数
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

// 类模板与友元
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
//	//全局函数做友元，类外实现
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

