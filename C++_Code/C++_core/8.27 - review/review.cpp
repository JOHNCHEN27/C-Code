//#include<iostream>
//using namespace std;
//#define PI 3.14
//class Person
//{
//public:
//	int m_R;
//
//	double calculateR()
//	{
//		return 2 * PI * m_R;
//	}
//};
//void test()
//{
//	Person p1;
//	p1.m_R = 10;
//	cout << p1.calculateR() << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	int m_sno;
//	string m_name;
//
//	void printfS()
//	{
//		cout << m_sno << " " << m_name << endl;
//	}
//};
//void test()
//{
//	Student s;
//	s.m_name = "zhangsan";
//	s.m_sno = 001;
//	s.printfS();
//
//	Student s1;
//	s1.m_name = " wangwu ";
//	s1.m_sno = 002;
//	s1.printfS();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class Cube
//{
//public:
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	int getL()
//	{
//		return m_L;
//	}
//	void setW(int w)
//	{
//		m_W = w;
//			}
//	int getW()
//	{
//		return m_W;
//	}
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	int getH()
//	{
//		return m_H;
//	}
//
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	int calculateR()
//	{
//		return m_L * m_W * m_L;
//	}
//	bool issame( Cube c2)
//	{
//		if (getL() == c2.getL() && getW() == c2.getW() && getH() == c2. getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//bool issame(Cube c1, Cube c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//void test()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << c1.calculateS() << endl;
//	cout << c1.calculateR() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	cout << c2.calculateR() << endl;
//	cout << c2.calculateS() << endl;
//	bool ret = c1.issame(c2);
//	if (ret)
//	{
//		cout << "c1 = c2" << endl;
//	}
//	else
//		cout << "c2 != c2" << endl;
//	bool ret1 = issame(c1, c2);
//	if (ret1)
//	{
//		cout << "c1 = c2" << endl;
//
//	}
//	else
//		cout << "c1 != c2" << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//}#include<iostream>
//using namespace std;
//class Person
//{
//public :
//	Person()
//	{
//		cout << "默认构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		m_A = a;
//		cout << "有参构造函数的调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		//析构函数可以释放堆区开辟的空间
//		cout << "析构函数的调用" << endl;
//	}
//	int m_A;
//};
//void test()
//{
//	//调用方法 ： 括号法
//	Person p1;  //需要注意括号法 调用默认构造函数时 不要加（） 不然编译器会认为
//	//这是一个函数的声明
//	Person p2(10);
//	Person p3(p2);
//
//	//显示法
//	Person p4 = Person(10);
//	Person p5 = Person(p4);
//	//数据类型 加 （） 表示匿名对象 如 Person(10) 特点是在匿名对象本行结束后系统会直接回收
//	//可以理解为没有名字的临时对象
//	//不能用拷贝构造函数来初始化匿名对象 如： Person(p1) 编译器会认为是
//	//对象的声明  Person p1;
//
//	//隐式转换法
//	Person p6 = 10;
//	Person p7 = p6;  //实际上是：  Person p7 = Person(p6);
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
// }

//深拷贝与浅拷贝

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int a)
//	{
//		m_A = new int (a);
//	}
//	Person(const Person& p)
//	{
//		m_A = new int(*p.m_A);
//	}
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//		if (m_A != NULL)
//		{
//			delete m_A;  //清除对象属性资源+释放对象属性的空间（指向堆区的空间释放掉
//			
//			m_A = NULL; 
//		}
//
//	}
//	Person& operator = (Person& p)
//	{
//		if (m_A != NULL)
//		{
//			delete m_A;
//			m_A = NULL;
//		}
//		m_A = new int(*p.m_A);
//		return *this;  // 返回自身对象，可以链式叠加赋值
//	}
//	int* m_A;
//};
//void test()
//{
//	Person p1(10);
//	Person p2(p1);
//
//	Person p3(10);
//	Person p4(20);
//	p4 = p3;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Phone
//{
//public:
//	Phone(string phone)
//	{
//		//p_name = phone;
//	}
//	string p_name;
//};
//
//class Person
//{
//	friend void test();
//	friend ostream& operator << (ostream& cout, Person p);
//	Person(string name, string p_name) : m_name(name), m_phone(p_name) {}
//private:
//	string m_name;
//	Phone m_phone;//对象成员
//};
//
//ostream& operator << (ostream& cout, Person p)
//{
//	
//	cout << "name = " << p.m_name  ;
//	//cout << p.m_phone << endl;
//	return cout;
//}
//void test()
//{
//	Person p1("张三", "appleeleven");
//	Person p2("王五", "huaweimate30");
//	cout << p1 << endl;
//	cout << p2 << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Person
//{
//	friend void test();
//public:
//	static void fun()
//	{
//		m_A = 100;  //静态成员函数只能调用静态成员变量
//		
//	}
//private:
//	 static int m_A;
//	 static int m_B;
//
//};
//int Person::m_B = 200;
//void test()
//{
//	Person p1;
//	cout << p1.m_B << endl;
//	Person p2;
//	p2.m_B = 100;
//	cout << p1.m_B << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;   //this指针指向调用非静态成员函数的对象
//		//简易理解就是 谁调用了非静态成员函数，this指针就指向谁
//	}
//	Person& Personadd(Person& p)
//	{
//		this->age += age;
//		return *this; // *this 是代表对象本身，this是对象的地址 *this 解引用就是对象本身
//	}
//
//	int age;
//	
//};
//void test()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.Personadd(p1).Personadd(p1).Personadd(p1); //链式叠加思想
//	
//	
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
////空指针也可以调用成员函数，但是要注意有没有用到this指针 需要加以判断加强代码的健壮性
//class Person
//{
//public:
//	void showPerson()
//	{
//		cout << "hello C++" << endl;
//	}
//	void showP()
//	{
//		cout << m_A << endl; //程序会出错 因为 this-> m_A this指针为空 
//	}
//	int m_A;
//};
//void test()
//{
//	Person* p = NULL;
//	p->showPerson();
//	//p->showP();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	 void showtest() const
//	{
//		m_A = 100; // 常函数不能修改成员变量
//	}
//	mutable int m_A; //成员变量加上mutable声明之后 ，常函数可以修改此成员变量
//	int m_B;
//	void  showt()
//	{
//		cout << "11" << endl;
//	}
//};
//void test()
//{
//	const Person p1;
//	p1.showtest();
//	Person p2;
//	p1.m_B = 2; // 常对象不可以修改普通成员变量
//	p1.showt();//常对象只能调用常函数
//}
//int main()
//{
//	system("pause");
//	return 0;
//}

//#include<iostream> //全局函数做友元
//using namespace std;
//class Person
//{
//	friend void test();
//public:
//	Person(string n, int a) : name(n), age(a) {}
//	
//private:
//	string name;
//	int age;
//};
//void test()
//{
//	Person p1("zhangsan", 18);
//	cout << p1.name << "  " << p1.age << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//友元类
//#include<iostream>
//using namespace std;
//class Building;
//class GoodGay
//{
//
//public:
//	GoodGay();
//	void visit();
//	Building *building;
//};
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//private:
//	string SittingRoom;
//	string BedRoom;
//};
//Building::Building()
//{
//	SittingRoom = "客厅";
//	BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "good gay 正在访问： " << building->SittingRoom << endl;
//	cout << "good gay 正在访问： " << building->BedRoom << endl;
//}
//void test()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();
private:
	Building *building;
};
class Building
{

public:
	
	Building();

private :
	friend void GoodGay::visit();
	string m_SittingRoom;
	string m_BedRoom;
		
};
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit()
{
	cout << "good gay 正在访问 " << building->m_SittingRoom << endl;
	cout << "good gat 正在访问 " << building->m_BedRoom << endl;
}
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
void test()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test();
	system("pause");
	return 0;
}