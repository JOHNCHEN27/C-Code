//#include<iostream>
//#include<string> //关系运算符重载
//using namespace std;
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_name = name;
//		this->age = age;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->m_name == p.m_name && this->age == p.age)
//		{
//			return true;
//		}
//		return false;
//
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_name != p.m_name && this->age != p.age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator<(Person& p)
//	{
//		if (this->m_name != p.m_name && this->age < p.age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator <=(Person& p)
//	{
//		if (this->m_name != p.m_name && this->age <= p.age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator>(Person& p)
//	{
//		if (this->m_name != p.m_name && this->age > p.age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator>=(Person& p)
//	{
//		if (this->m_name != p.m_name && this->age >= p.age)
//		{
//			return true;
//		}
//		return false;
//			
//	}
//	string m_name;
//	int age;
//};
//void test()
//{
//	Person p1("张三", 18);
//	Person p2("张三", 18);
//	if (p1 == p2)
//	{
//		cout << "p1 == p2" << endl;
//	}
//	else
//		cout << "p1 != p2" << endl;
//	if (p1 != p2)
//	{
//		cout << "p1 != p2" << endl;
//	}
//	else
//		cout << "p1 == p2" << endl;
//}
//void test01()
//{
//	Person p3("liu", 20);
//	Person p4("wu", 18);
//	if (p3 < p4)
//	{
//		cout << "p3 < p4" << endl;
//	}
//	else
//		cout << "p3 > p4" << endl;
//	if (p3 <= p4)
//	{
//		cout << "p3 <= p4" << endl;
//	}
//	else
//		cout << "p3 > p4" << endl;
//}
//void test02()
//{
//	Person p5("q", 22);
//	Person p6("l", 30);
//	if (p5 > p6)
//	{
//		cout << "p5 > p6" << endl;
//	}
//	else
//		cout << "p5 < p6" << endl;
//	if (p5 >= p6)
//	{
//		cout << "p5 >= p6" << endl;
//	}
//	else
//		cout << "p5 < p6" << endl;
//}
//int main()
//{
//	test();
//	test01();
//	test02();
//	return 0;
//}

//赋值重载运算符
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int a)
//	{
//		m_A = new int(a);
//	}
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//		if (m_A != NULL)
//		{
//			delete m_A; //释放new出来在堆区的空间
//			m_A = NULL; //防止野指针的出现，将指针指向NULL
//		}
//	}
//	Person& operator =(Person& p)
//	{
//		// 利用赋值运算符重载 operator 重新分配空间
//
//		// 首先判断属性是否在堆区，在则清理干净
//		if (m_A != NULL)
//		{
//			delete m_A;
//			m_A = NULL;
//		}
//		//重新给属性 分配空间
//		m_A = new int(*p.m_A);
//		return *this;  //返回对象本身
//	}
//	int *m_A;
//};
//void test()
//{
//	Person p1(10);
//	Person p2(20);
//	cout << *p1.m_A << endl;
//	cout << *p2.m_A << endl;
// }
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//递增运算符重载
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		m_A = 10;
//	}
//	Person & operator++()
//	{
//		++m_A;
//		return *this;
//	}//前置加加 返回的是对象本身 ，后置加加 返回的是值
//	Person operator++(int) //区分前置和后置加加的区别是 加一个int占位参数
//	{
//		//记录当前的值
//		Person temp = *this;
//		//后置加加
//		m_A++;
//		//返回记录的值 :实现先返回后加加
//		return temp;
//	}
//	int m_A;
//};
////左移运算符重载只能在全局函数里发生
//ostream &operator<<(ostream &cout ,Person p)
//{
//	cout << p.m_A << endl;
//	return cout;
//		 
//}
//void test()
//{
//	Person p1;
//	Person p2;
//	cout << ++p1 << endl;
//	cout << p2++ << endl;
//	cout << p2 << endl;
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
//class Myint
//{
//	friend ostream& operator <<(ostream& cout, Myint p);
//public:
//	Myint()
//	{
//		m_num = 0;
//	}
//	Myint& operator --()
//	{
//		--m_num;
//		return *this;  // 返回对象本身
//	}
//	Myint operator --(int)
//	{
//		Myint temp = *this;
//		m_num--;
//		return temp;
//	}
//private:
//	int m_num;
//};
//ostream& operator<<(ostream& cout, Myint p)
//{
//	cout << p.m_num << endl;
//	return cout;
//}
//void test()
//{
//	Myint p1;
//	Myint p2;
//	cout << --p1 << endl;
//	cout << p1-- << endl;
//	cout << p1 << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;

//#include<iostream>
//using namespace std;
//class Person
//{
//	friend ostream& operator <<(ostream& cout, Person p);
//public:
//	Person()
//	{
//		;
//	}
//	Person(int a ,int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	Person operator + (Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//private:
//	int m_A;
//	int m_B;
//};
//ostream& operator << (ostream& cout, Person p)
//{
//	cout << p.m_A << " " << p.m_B << endl;
//	return cout;
// }
//void test()
//{
//	Person p1(10, 20);
//	Person p2(20, 20);
//	cout << p1 + p2 << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//加号运算符重载
//#include<iostream>
//using namespace std;
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person p);
//	friend Person operator+(Person& p,Person &a);
//public:
//	Person()
//	{
//		;
//	}
//	Person(int a, int b) : m_A(a), m_B(b) {}
//	
//	//Person& operator+(Person& a) //成员函数实现加号运算符重载
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + a.m_A;
//	//	temp.m_B = this->m_B + a.m_B;
//	//	return temp;
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
////全局函数实现加号运算符重载
//Person operator+ (Person& p,Person &a)
//{
//	Person temp;
//	temp.m_A = a.m_A + p.m_A;
//	temp.m_B = a.m_B + p.m_B;
//	return temp;
//}
////全局函数实现左移运算符重载
//ostream& operator<<(ostream & cout, Person p)
//{
//	cout << p.m_A << " " << p.m_B;
//	return cout;
//}
//void test()
//{
//	Person p1(10, 10);
//	Person p2(10, 10);
//	//Person p3 = p1 + p2;
//	Person p3 = operator+(p1, p2);
//	cout << p3 << endl;
//}
//	
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//函数调用运算符重载
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void person(string t)
{
	cout << t << endl;
}
void test()
{
	Person p1;
	p1("zhansan");
	Person p2;
	person("zhangsan");

}
int main()
{
	test();
	system("pause");
	return 0;
}