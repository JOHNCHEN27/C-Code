//ʵ�ּ������
//#include<iostream>
//#include<string>
//using namespace std;
//class Computer
//{
//	//��ͳ�ķ�ʽʵ��
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

//���ö�̬ʵ��
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
//    //�����ͷŶ�����ַ
//	delete abs;
//
//	abs = new SubCalculator;  //��absָ������ָ��Sub���ڶ������ٵĵ�ַ
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//	cout << abs->m_Num1 << "-" << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//	abs = new MulCalculator;  //��absָ������ָ��Sub���ڶ������ٵĵ�ַ
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
//	//�����ͷŶ�����ַ
//	delete abs;
//
//	abs = new SubCalculator;  //��absָ������ָ��Sub���ڶ������ٵĵ�ַ
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 10;
//	cout << abs->m_Num1 << "-" << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//	abs = new MulCalculator;  //��absָ������ָ��Sub���ڶ������ٵĵ�ַ
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
////��̬�ĺô�����֯�ṹ�������ɶ���ǿ�� ����ǰ�ںͺ��ڵ�ά�� 
////�ڳ��򿪷���Ӧ�ö����ö�̬��ʵ��


//������Ʒ
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
//		cout << "������ˮ" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ڳ��ݿ���" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void Putsomething()
//	{
//		cout << "�����ǡ�����" << endl;
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

//������װ  
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
		cout << "intelCPU��ʼ����" << endl;
	}
};
class intelVideoCard : public VideoCard
{
public:
	virtual void Display()
	{
		cout << "intel�Կ�����ʾ" << endl;
	}
};
class intelMemory : public Memory
{
public:
	virtual void Storage()
	{
		cout << "intel�ڴ�����ʼ�洢" << endl;
	}
};
class lenovoCPU : public CPU
{
public:
	virtual void Calculate()
	{
		cout << "lenovoCPU��ʼ����" << endl;
	}
};
class lenovoVideoCard : public VideoCard
{
public:
	virtual void Display()
	{
		cout << "lenovo�Կ�����ʾ" << endl;
	}
};
class lenovoMemory : public Memory
{
public:
	virtual void Storage()
	{
		cout << "lenovo�ڴ�����ʼ�洢" << endl;
	}
};
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* st)
	{
		m_cpu = cpu;  //����ָ��������������ʱ   �����յ�ָ�븳ֵ���������ԣ�
		//���������Ե��� ������ʵ�ֵ�����ת
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
		//���캯���ͷŵ�ָ��
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
//����ʵ��
void test()
{
	//����һ̨����
	Computer computer0(new intelCPU, new intelVideoCard, new intelMemory);
	//����һ�����Զ��� new����������������ڶ����ĵ�ַ �ø���ָ����� ������̬
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