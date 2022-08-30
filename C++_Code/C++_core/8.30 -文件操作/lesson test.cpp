//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
////void test()
////{
////	//包含头文件
////	
////	ofstream ofs;
////	ofs.open("text.txt", ios::out);
////	ofs << "hello world" << endl;
////
////	ofs.close();
////}
////int main()
////{
////	test();
////	return 0;
////}
//
//void test()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//   if(!ifs.is_open())
//
//	//创建数组通过while循环来读取文件:四种方式
//	
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf ;
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
//	ifs.close();
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<string>
//#include<fstream>
//class Person
//{
//public:
//	char m_Name[64]; //用char数组来存放字符串 避免用string出错
//	int age;
//};
//void test()
//{
//	ofstream ofs;
//	ofs.open("Person.txt", ios::out | ios::binary); //加上 binary以二进制方式写入
//
//	//写入需要利用write函数  创建一个对象把对象写入
//	Person p = { "zhangsan",20 };
//	ofs.write((const char*)&p, sizeof(p)); //sizeof写入的字节数 用指针来指向
//
//	ofs.close();
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
//#include<fstream>
//class Person
//{
//public:
//	char m_Name[64];
//	int age;
//};
//void test()
//{
//	ifstream ifs;
//	ifs.open("Person.txt", ios::in | ios::binary);
//
//	//利用read函数首先创建对象
//	Person p;
//	ifs.read((char*)&p, sizeof(p)); //写入的数据多少
//	cout << p.m_Name << " " << p.age << endl; 
//	//read函数读取之后， 用cout输出读到的文本
//
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
//class Person
//{
//public:
//	virtual void fun()  //虚函数关键字 virtual 加在函数前
//	{
//		cout << "parents在说话 " << endl;
//	}
//};
//class son : public Person
//{
//public:
//	void fun() //子类中的虚函数 virtual 可以省略不写，编译器会自动加上
//	{
//		cout << "son在说话" << endl;
//	}
//};
//void speak(Person & name) // 当用父类指针或引用执行子类对象时，就可以发生多态
////也就是说 fun函数有多种形态调用，具体看你传入的哪个类的对象就调用哪个类中的
////fun函数
//{
//	name.fun();  //虽然传进来的是son类的对象 但是由于speak函数在编译阶段就确定了
//	//地址，而派生类（子类） 和 虚函数都是在运行阶段才确定地址，所以此刻输出的是
//	//父类的fun函数，因为父类地址先被确定
//	//要想解决此问题，需要发生多态，使传入哪个类的对象就调用哪个类
//	//动态多态发生的条件是：要有继承关系，子类必须重写父类中的虚函数，用父类指针或
//	//引用来执行子类对象 
//	//用虚函数使父类的fun函数也在 运行阶段确定地址这样子类可以实现多态
//}
//void test()
//{
//	son s;
//	speak(s);
//}
//int main()
//{
//	test();
//	return 0;
//}

//多态实现的原理剖析：当函数加上virtual时变为虚函数，此时虚函数会有一个 vfptr
//虚函数指针 指向的时 vftable 虚函数表， 虚函数表中存放的是虚函数
//当子类继承父类时，也继承了父类中的虚函数表中的虚函数，如果子类不发生重写虚函数
//那么子类中的虚函数表存放的是父类中的虚函数，当子类发生重写的时候，子类中的虚函数
//表就存放的是就是子类中的重写之后的虚函数也虚函数
//当父类指针或引用执行子类对象时，就可以发生多态，用此对象调用虚函数，由于子类中的
//虚函数已经重写了，所以调用的是子类中的虚函数，而不是父类中的虚函数，如果未发生重写
//那么调用的是父类中的虚函数

//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	void fun()
//	{
//		cout << "Animal在说话" << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//};
//void speak(Animal& name)
//{
//	name.fun();
//}
//void test()
//{
//	Cat cat;
//	speak(cat);
//}
//int main()
//{
//	test();
//	return 0;

//纯虚函数和抽象类
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	virtual void fun() = 0; //令虚函数等于0 就变成了纯虚函数
//	//类中有纯虚函数也被称之为抽象类
//	//抽象类的特点是 ：无法实例化对象； 子了必须重写父类的纯虚函数，不然也是抽象类
//	
//};
//class son : public Person
//{
//public:
//	virtual void fun()
//	{
//		cout << "纯虚函数的调用" << endl;
//	}
//
//};
//void test()
//{
//	//Person s;//由于父类是抽象类。无法实例化对象
//	//new Person;//即使是在堆区开辟也不行
//
//	//son s;
//	//new s; //因为子类son 没有重写纯虚函数，所以也属于抽象类
//
//	son s;
//}
//int main()
//{
//	test();
//	return 0;
//}

//虚析构和纯虚析构
//当子类有属性在堆区的时候，用父类指针无法调用子类的析构函数，可能会造成内存泄漏
//虚析构和纯虚析构可以解决这个问题
//两个析构的共性是： 可以通过父类指针 释放子类对象； 都必循要有具体的实现
//#include<iostream>
//#include<string>
//using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数的调用" << endl;
//	}
//	//virtual~Base() //通过虚析构和纯虚析构来解决父类指针无法释放子类对象的问题
//	//{
//	//	cout << "Base析构函数的调用" << endl;
//	//}
//
//	//纯虚析构
//	virtual ~Base() = 0; //纯虚函数必须在类里声明 类外实现
//};
//
//Base::  ~Base()
//{
//	cout << "BASE纯虚析构的调用" << endl;
//}
//class son : public Base
//{
//public:
//	son(string  name)
//	{
//		m_name = new string(name);
//		cout << "Son构造函数的调用" << endl;
//	}
//	~son()
//	{
//		cout << "Son析构函数的调用" << endl;
//	}
//	string* m_name;
//};
//void test()
//{
//	Base* base = new son("张三");
//	
//	delete base;  //因为子类中有属性开辟到堆区，通过释放父类指针时不能够释放子类
//	//对象开辟在堆区的数据，可能会造成内存泄漏问题
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Calculator
//{
//public:
//	int getNum(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//void test()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getNum("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getNum("-") << endl;
//	cout << c.m_Nm1 << " * " << c.m_Num2 << " = " << c.getNum("*") << endl;
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
//class AbstractCalculator
//{
//public:
//    virtual int getResult()
//    {
//        return 0;
//    }
//    int m_Num1;
//    int m_Num2;
//};
//class Addcalculator : public AbstractCalculator
//{
//public:
//    virtual int getResult()
//    {
//        return m_Num1 + m_Num2;
//    }
//};
//class Subcalculator : public AbstractCalculator
//{
//public:
//    virtual int getResult()
//    {
//        return m_Num1 - m_Num2;
//    }
//};
//class Mulcalculator : public AbstractCalculator
//{
//public:
//    virtual int getResult()
//    {
//        return m_Num1 * m_Num2;
//    }
//};
//void test()
//{
//    AbstractCalculator* a = new Addcalculator; //通过父类指针 执行子类对象发生多态
//    a->m_Num1 = 100;
//    a->m_Num2 = 100;
//
//    cout << a->m_Num1 << " + " << a->m_Num2 << " = " << a->getResult() << endl;
//    //用完数据记得释放
//    delete a; //堆区数据被释放，指针还在
//
//    a = new Subcalculator;
//    a->m_Num1 = 100;
//    a->m_Num2 = 100;
//
//    cout << a->m_Num1 << " - " << a->m_Num2 << " = " << a->getResult() << endl;
//
//    a = new Mulcalculator;
//    a->m_Num1 = 100;
//    a->m_Num2 = 100;
//
//    cout << a->m_Num1 << " * " << a->m_Num2 << " = " << a->getResult() << endl;
//
//}
//int main()
//{
//    test();
//    return 0;
//}

//计算机类
//#include<iostream>
//using namespace std;
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//	int m_Num1;
//	int m_Num2;
//};
//void test()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
////多态实现计算机类
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//class AddCalculator : public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//class SubCalculator : public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//class MulCalculator : public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//void test()
//{
//	//利用父类的指针 执行子类对象 发生多态
//	AbstractCalculator* p = new AddCalculator;
//	p->m_Num1 = 10;
//	p->m_Num2 = 10;
//	cout << p->m_Num1 << " + " << p->m_Num2 << " = " << p->getResult() << endl;
//
//	//用完堆区数据记得释放
//	delete p;
//
//	p = new SubCalculator; //p指针并没有被释放，delete释放的是堆区的地址，指针还在
//	p->m_Num1 = 10;
//	p->m_Num2 = 10;
//
//	cout << p->m_Num1 << " - " << p->m_Num2 << " = " << p->getResult() << endl;
//	delete p;
//
//	p = new MulCalculator; //p指针并没有被释放，delete释放的是堆区的地址，指针还在
//	p->m_Num1 = 10;
//	p->m_Num2 = 10;
//
//	cout << p->m_Num1 << " * " << p->m_Num2 << " = " << p->getResult() << endl;
//	delete p;
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<iostream>
using namespace std;
class MakeDrink
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中 
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}

};
class Coffe : public MakeDrink
{
public:
	virtual void Boil()
	{
		cout << "正在煮水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "正在冲泡咖啡" << endl;
	}
	//倒入杯中 
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入糖、冰块" << endl;
	}
};
class Tea : public MakeDrink
{
public:
	virtual void Boil()
	{
		cout << "正在煮水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSomething()
	{
		cout << "加入柠檬或者枸杞" << endl;
	}
};
//具体实现
void make(MakeDrink* abs)
{
	abs->makeDrink();
}
void test()
{
	make(new Coffe);
	cout << "----------------------" << endl;
	make(new Tea);
}
int main()
{
	test();
	return 0;
}