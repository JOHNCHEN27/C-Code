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
//    Person p1("张三", 18);
//    p1.show();
//}
//int main()
//{
//    test();
//    return 0;
//}


//类模板和函数模板的区别
//类模板不用用自动类型推导调用函数
//类模板的模板参数列表中可以有默认参数
//#include<iostream>
//#include<string >
//using namespace std;
//template <typename Nametype, class Agetype = int> //模板参数列表可以指定默认值
//class Person                    // 将通用数据类型Agetype 指定默认值为int 类型
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
//	//类模板不能用自动类型推导
//	Person<string ,int> p("zhangsan", 20);
//	p.showPerson();
//
//	Person<string> p1("猪八戒", 999);
//	p1.showPerson();
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
////普通类成员函数直接创建
////类模板中的成员函数在调用时才创建
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
//		abs.Person22();  //编译器能通过，因为类模板的成员函数还没创建
//		// 只有在调用的时候才会创建
//	}
//};
//void test()
//{
//	Myclass<Person1> m;
//	m.fun();  
//	m.fun1();  //不能调用 因为指定了m对象中的属性abs为Person1类型，
//	//而pERSON1类型只有fun函数;
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
//	Person <string, int>p("猪八戒", 888);
//	Ptest(p);
//}
////参数模板化
//template<class T1, class T2>
//void ptest01(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//}
//void test01()
//{
//	Person<string, int> p1("孙悟空", 999);
//	ptest01(p1);
//}
////整个类模板化
//template<class T>
//void Ptest03(T &p2)
//{
//	p2.showPerson();
//	cout << typeid(T).name() << endl;
//
//}
//void test02()
//{
//	Person<string,int>p2("唐僧", 1000);
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
////class Son : public Base  //如果不指定父类的通用数据类型T，编译器无法给子类分配内存
////{
////
////};
////灵活指定通用类型，需要将子类也模板化
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
////类模板成语函数类外实现
//template<class T1, class T2> //需要声明 是类模板函数
//void Person<T1,T2>::showPerson()
//{
//	cout << m_Name << "  " << m_Age << endl;
//}
////类模板构造函数类外实现
//template <class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 Age)
//{
//	；
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
//	Person<string, int> p("猪八戒", 20);
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
	//全局函数友元 类内实现
	friend void printffun(Person<T1, T2>p)
	{
		cout << p.m_Name << " " <<p.m_Age << endl;
	}
	//全局函数类外实现
	friend void fun<>(Person<T1, T2>p); //加空模板参数列表
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
	Person <string, int> p("孙悟空", 20);
	printffun(p);
	fun(p);
}
int main()
{
	test();
	return 0;
}
