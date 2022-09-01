//#include<iostream>
//using namespace std;
//#include<string>
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
//	
//};
//void test()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << "+" << c.m_Num2 << " = " << c.getResult("+") << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//计算器
//#include<iostream>
//using namespace std;
//class AbstractCalculator
//{
//public:
//	virtual int getResult() = 0;
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
//	AbstractCalculator* c = new AddCalculator;
//	c->m_Num1 = 10;
//	c->m_Num2 = 10;
//	cout << c->m_Num1 << " + " << c->m_Num2 << " = " << c->getResult() << endl;
//	delete c;
//
//	 c = new SubCalculator;
//	c->m_Num1 = 10;
//	c->m_Num2 = 10;
//	cout << c->m_Num1 << " - " << c->m_Num2 << " = " << c->getResult() << endl;
//	delete c;
//
//	c = new MulCalculator;
//	c->m_Num1 = 10;
//	c->m_Num2 = 10;
//	cout << c->m_Num1 << " * " << c->m_Num2 << " = " << c->getResult() << endl;
//	delete c;
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class CPU
//{
//public:
//	virtual void Calculate() = 0;
//
//};
//class VideoCard
//{
//public:
//	virtual void Display() = 0;
//};
//class Memory
//{
//public:
//	virtual void Storage() = 0;
//};
//class intelCPU : public CPU
//{
//public:
//	virtual void Calculate()
//	{
//		cout << "intelCPU正在计算" << endl;
//	}
//};
//class intelVideoCard : public VideoCard
//{
//public:
//	virtual void Display()
//	{
//		cout << "intelVideoCard正在显示" << endl;
//	}
//};
//class intelMemory : public Memory
//{
//public:
//	virtual void Storage()
//	{
//		cout << "intelmemory正在存储" << endl;
//	}
//};
//class lenovoCPU : public CPU
//{
//public:
//	virtual void Calculate()
//	{
//		cout << "lenovoCPU正在计算" << endl;
//	}
//};
//class lenovoVideoCard : public VideoCard
//{
//public:
//	virtual void Display()
//	{
//		cout << "lenovoVideoCard正在显示" << endl;
//	}
//};
//class lenovoMemory : public Memory
//{
//public:
//	virtual void Storage()
//	{
//		cout << "lenovomemory正在存储" << endl;
//	}
//};
//class Computer
//{
//public:
//	Computer(CPU * cpu,VideoCard * vc,Memory *m)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_m = m;
//	}
//	void work()
//	{
//		m_cpu->Calculate();
//		m_vc->Display();
//		m_m->Storage();
//	}
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_m != NULL)
//		{
//			delete m_m;
//			m_m = NULL;
//		}
//	}
//		CPU* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_m;
//};
//void test()
//{
//	Computer c(new intelCPU, new intelVideoCard, new intelMemory);
//	c.work();
//	//在堆区开辟了地址 记得手动释放掉
//	cout << "----------------------------" << endl;
//	Computer b(new lenovoCPU, new lenovoVideoCard, new lenovoMemory);
//	b.work();
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}
