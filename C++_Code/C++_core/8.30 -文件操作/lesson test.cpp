//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
////void test()
////{
////	//����ͷ�ļ�
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
//	//��������ͨ��whileѭ������ȡ�ļ�:���ַ�ʽ
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
//	char m_Name[64]; //��char����������ַ��� ������string����
//	int age;
//};
//void test()
//{
//	ofstream ofs;
//	ofs.open("Person.txt", ios::out | ios::binary); //���� binary�Զ����Ʒ�ʽд��
//
//	//д����Ҫ����write����  ����һ������Ѷ���д��
//	Person p = { "zhangsan",20 };
//	ofs.write((const char*)&p, sizeof(p)); //sizeofд����ֽ��� ��ָ����ָ��
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
//	//����read�������ȴ�������
//	Person p;
//	ifs.read((char*)&p, sizeof(p)); //д������ݶ���
//	cout << p.m_Name << " " << p.age << endl; 
//	//read������ȡ֮�� ��cout����������ı�
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
//	virtual void fun()  //�麯���ؼ��� virtual ���ں���ǰ
//	{
//		cout << "parents��˵�� " << endl;
//	}
//};
//class son : public Person
//{
//public:
//	void fun() //�����е��麯�� virtual ����ʡ�Բ�д�����������Զ�����
//	{
//		cout << "son��˵��" << endl;
//	}
//};
//void speak(Person & name) // ���ø���ָ�������ִ���������ʱ���Ϳ��Է�����̬
////Ҳ����˵ fun�����ж�����̬���ã����忴�㴫����ĸ���Ķ���͵����ĸ����е�
////fun����
//{
//	name.fun();  //��Ȼ����������son��Ķ��� ��������speak�����ڱ���׶ξ�ȷ����
//	//��ַ���������ࣨ���ࣩ �� �麯�����������н׶β�ȷ����ַ�����Դ˿��������
//	//�����fun��������Ϊ�����ַ�ȱ�ȷ��
//	//Ҫ���������⣬��Ҫ������̬��ʹ�����ĸ���Ķ���͵����ĸ���
//	//��̬��̬�����������ǣ�Ҫ�м̳й�ϵ�����������д�����е��麯�����ø���ָ���
//	//������ִ��������� 
//	//���麯��ʹ�����fun����Ҳ�� ���н׶�ȷ����ַ�����������ʵ�ֶ�̬
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

//��̬ʵ�ֵ�ԭ������������������virtualʱ��Ϊ�麯������ʱ�麯������һ�� vfptr
//�麯��ָ�� ָ���ʱ vftable �麯���� �麯�����д�ŵ����麯��
//������̳и���ʱ��Ҳ�̳��˸����е��麯�����е��麯����������಻������д�麯��
//��ô�����е��麯�����ŵ��Ǹ����е��麯���������෢����д��ʱ�������е��麯��
//��ʹ�ŵ��Ǿ��������е���д֮����麯��Ҳ�麯��
//������ָ�������ִ���������ʱ���Ϳ��Է�����̬���ô˶�������麯�������������е�
//�麯���Ѿ���д�ˣ����Ե��õ��������е��麯���������Ǹ����е��麯�������δ������д
//��ô���õ��Ǹ����е��麯��

//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	void fun()
//	{
//		cout << "Animal��˵��" << endl;
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

//���麯���ͳ�����
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	virtual void fun() = 0; //���麯������0 �ͱ���˴��麯��
//	//�����д��麯��Ҳ����֮Ϊ������
//	//��������ص��� ���޷�ʵ�������� ���˱�����д����Ĵ��麯������ȻҲ�ǳ�����
//	
//};
//class son : public Person
//{
//public:
//	virtual void fun()
//	{
//		cout << "���麯���ĵ���" << endl;
//	}
//
//};
//void test()
//{
//	//Person s;//���ڸ����ǳ����ࡣ�޷�ʵ��������
//	//new Person;//��ʹ���ڶ�������Ҳ����
//
//	//son s;
//	//new s; //��Ϊ����son û����д���麯��������Ҳ���ڳ�����
//
//	son s;
//}
//int main()
//{
//	test();
//	return 0;
//}

//�������ʹ�������
//�������������ڶ�����ʱ���ø���ָ���޷�����������������������ܻ�����ڴ�й©
//�������ʹ����������Խ���������
//���������Ĺ����ǣ� ����ͨ������ָ�� �ͷ�������� ����ѭҪ�о����ʵ��
//#include<iostream>
//#include<string>
//using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯���ĵ���" << endl;
//	}
//	//virtual~Base() //ͨ���������ʹ����������������ָ���޷��ͷ�������������
//	//{
//	//	cout << "Base���������ĵ���" << endl;
//	//}
//
//	//��������
//	virtual ~Base() = 0; //���麯���������������� ����ʵ��
//};
//
//Base::  ~Base()
//{
//	cout << "BASE���������ĵ���" << endl;
//}
//class son : public Base
//{
//public:
//	son(string  name)
//	{
//		m_name = new string(name);
//		cout << "Son���캯���ĵ���" << endl;
//	}
//	~son()
//	{
//		cout << "Son���������ĵ���" << endl;
//	}
//	string* m_name;
//};
//void test()
//{
//	Base* base = new son("����");
//	
//	delete base;  //��Ϊ�����������Կ��ٵ�������ͨ���ͷŸ���ָ��ʱ���ܹ��ͷ�����
//	//���󿪱��ڶ��������ݣ����ܻ�����ڴ�й©����
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
//    AbstractCalculator* a = new Addcalculator; //ͨ������ָ�� ִ�������������̬
//    a->m_Num1 = 100;
//    a->m_Num2 = 100;
//
//    cout << a->m_Num1 << " + " << a->m_Num2 << " = " << a->getResult() << endl;
//    //�������ݼǵ��ͷ�
//    delete a; //�������ݱ��ͷţ�ָ�뻹��
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

//�������
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
////��̬ʵ�ּ������
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
//	//���ø����ָ�� ִ��������� ������̬
//	AbstractCalculator* p = new AddCalculator;
//	p->m_Num1 = 10;
//	p->m_Num2 = 10;
//	cout << p->m_Num1 << " + " << p->m_Num2 << " = " << p->getResult() << endl;
//
//	//����������ݼǵ��ͷ�
//	delete p;
//
//	p = new SubCalculator; //pָ�벢û�б��ͷţ�delete�ͷŵ��Ƕ����ĵ�ַ��ָ�뻹��
//	p->m_Num1 = 10;
//	p->m_Num2 = 10;
//
//	cout << p->m_Num1 << " - " << p->m_Num2 << " = " << p->getResult() << endl;
//	delete p;
//
//	p = new MulCalculator; //pָ�벢û�б��ͷţ�delete�ͷŵ��Ƕ����ĵ�ַ��ָ�뻹��
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
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭�� 
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
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
		cout << "������ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ڳ��ݿ���" << endl;
	}
	//���뱭�� 
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "�����ǡ�����" << endl;
	}
};
class Tea : public MakeDrink
{
public:
	virtual void Boil()
	{
		cout << "������ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�������ʻ������" << endl;
	}
};
//����ʵ��
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