//实现计算机类
//#include<iostream>
//#include<string>
//using namespace std;
//class Computer
//{
//	//传统的方式实现
//public:
//	virtual int getResult(string oper)
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
//
//	}
//	int m_Num1;
//	int m_Num2;
//};
//void test()
//{
//	Computer c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//利用多态实现
//#include<iostream>
//using namespace std;
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
//
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
//	AbstractCalculator* abs = new AddCalculator;
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//
//	cout << abs->m_Num1 << "+" << abs->m_Num2 << " = " << abs->getResult() << endl;
//    //用完释放堆区地址
//	delete abs;
//
//	abs = new SubCalculator;  //将abs指针重新指向Sub类在堆区开辟的地址
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//	cout << abs->m_Num1 << "-" << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//	abs = new MulCalculator;  //将abs指针重新指向Sub类在堆区开辟的地址
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//	cout << abs->m_Num1 << "*" << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class AbstractCalculator
//{
//public:
//	virtual int getResult() = 0;
//	
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
//
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
//	AbstractCalculator* abs = new AddCalculator;
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//
//	cout << abs->m_Num1 << "+" << abs->m_Num2 << " = " << abs->getResult() << endl;
//	//用完释放堆区地址
//	delete abs;
//
//	abs = new SubCalculator;  //将abs指针重新指向Sub类在堆区开辟的地址
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//	cout << abs->m_Num1 << "-" << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//	abs = new MulCalculator;  //将abs指针重新指向Sub类在堆区开辟的地址
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//	cout << abs->m_Num1 << "*" << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//}
//int main()
//{
//	test();
//	return 0;
//}
//
////多态的好处：组织结构清晰，可读性强， 便于前期和后期的维护 
////在程序开放中应该多利用多态来实现


//制作饮品
//#include<iostream>
//using namespace std;
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;
//
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void Putsomething() = 0;
//
//	void Makedrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		Putsomething();
//	}
//};
//class Coffe : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "正在煮水" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "正在冲泡咖啡" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void Putsomething()
//	{
//		cout << "加入糖、冰块" << endl;
//	}
//};
//void test()
//{
//	AbstractDrinking* abs = new Coffe;
//	abs->Makedrink();
//}
//int main()
//{
//	test();
//	return 0;
//}

//电脑组装  
#include<iostream>
using namespace std;
class CPU
{
public:
	virtual void Calculate() = 0;
};
class VideoCard
{
public:
	virtual void Display() = 0;
};
class Memory
{
public:
	virtual void Storage() = 0;
};
class intelCPU : public CPU
{
public:
	virtual void Calculate()
	{
		cout << "intelCPU开始计算" << endl;
	}
};
class intelVideoCard : public VideoCard
{
public:
	virtual void Display()
	{
		cout << "intel显卡的显示" << endl;
	}
};
class intelMemory : public Memory
{
public:
	virtual void Storage()
	{
		cout << "intel内存条开始存储" << endl;
	}
};
class lenovoCPU : public CPU
{
public:
	virtual void Calculate()
	{
		cout << "lenovoCPU开始计算" << endl;
	}
};
class lenovoVideoCard : public VideoCard
{
public:
	virtual void Display()
	{
		cout << "lenovo显卡的显示" << endl;
	}
};
class lenovoMemory : public Memory
{
public:
	virtual void Storage()
	{
		cout << "lenovo内存条开始存储" << endl;
	}
};
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* st)
	{
		m_cpu = cpu;  //父类指针接收了子类对象时   将接收的指针赋值给类中属性，
		//用类中属性调用 各功能实现电脑运转
		m_vc = vc;
		m_st = st;
	}
	void work()
	{
		m_cpu->Calculate();
		m_vc->Display();
		m_st->Storage();
	}
	~Computer()
	{
		//构造函数释放掉指针
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_st != NULL)
		{
			delete m_st;
			m_st = NULL;
		}
	}
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_st;
};
//具体实现
void test()
{
	//创建一台电脑
	Computer computer0(new intelCPU, new intelVideoCard, new intelMemory);
	//创建一个电脑对象 new开辟三个厂商零件在堆区的地址 用父类指针接收 产生多态
	computer0.work();

	cout << "---------------------" << endl;
	Computer computer1(new lenovoCPU, new lenovoVideoCard, new lenovoMemory);
	computer1.work();
	cout << "---------------------------" << endl;
	Computer computer2(new lenovoCPU, new intelVideoCard, new lenovoMemory);
	computer2.work();
}
int main()
{
	test();
	return 0;
}