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
//		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		m_A = a;
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "�������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		//�������������ͷŶ������ٵĿռ�
//		cout << "���������ĵ���" << endl;
//	}
//	int m_A;
//};
//void test()
//{
//	//���÷��� �� ���ŷ�
//	Person p1;  //��Ҫע�����ŷ� ����Ĭ�Ϲ��캯��ʱ ��Ҫ�ӣ��� ��Ȼ����������Ϊ
//	//����һ������������
//	Person p2(10);
//	Person p3(p2);
//
//	//��ʾ��
//	Person p4 = Person(10);
//	Person p5 = Person(p4);
//	//�������� �� ���� ��ʾ�������� �� Person(10) �ص��������������н�����ϵͳ��ֱ�ӻ���
//	//�������Ϊû�����ֵ���ʱ����
//	//�����ÿ������캯������ʼ���������� �磺 Person(p1) ����������Ϊ��
//	//���������  Person p1;
//
//	//��ʽת����
//	Person p6 = 10;
//	Person p7 = p6;  //ʵ�����ǣ�  Person p7 = Person(p6);
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
// }

//�����ǳ����

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
//		cout << "���������ĵ���" << endl;
//		if (m_A != NULL)
//		{
//			delete m_A;  //�������������Դ+�ͷŶ������ԵĿռ䣨ָ������Ŀռ��ͷŵ�
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
//		return *this;  // ����������󣬿�����ʽ���Ӹ�ֵ
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
//	Phone m_phone;//�����Ա
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
//	Person p1("����", "appleeleven");
//	Person p2("����", "huaweimate30");
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
//		m_A = 100;  //��̬��Ա����ֻ�ܵ��þ�̬��Ա����
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
//		this->age = age;   //thisָ��ָ����÷Ǿ�̬��Ա�����Ķ���
//		//���������� ˭�����˷Ǿ�̬��Ա������thisָ���ָ��˭
//	}
//	Person& Personadd(Person& p)
//	{
//		this->age += age;
//		return *this; // *this �Ǵ��������this�Ƕ���ĵ�ַ *this �����þ��Ƕ�����
//	}
//
//	int age;
//	
//};
//void test()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.Personadd(p1).Personadd(p1).Personadd(p1); //��ʽ����˼��
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
////��ָ��Ҳ���Ե��ó�Ա����������Ҫע����û���õ�thisָ�� ��Ҫ�����жϼ�ǿ����Ľ�׳��
//class Person
//{
//public:
//	void showPerson()
//	{
//		cout << "hello C++" << endl;
//	}
//	void showP()
//	{
//		cout << m_A << endl; //�������� ��Ϊ this-> m_A thisָ��Ϊ�� 
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
//		m_A = 100; // �����������޸ĳ�Ա����
//	}
//	mutable int m_A; //��Ա��������mutable����֮�� �������������޸Ĵ˳�Ա����
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
//	p1.m_B = 2; // �����󲻿����޸���ͨ��Ա����
//	p1.showt();//������ֻ�ܵ��ó�����
//}
//int main()
//{
//	system("pause");
//	return 0;
//}

//#include<iostream> //ȫ�ֺ�������Ԫ
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

//��Ԫ��
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
//	SittingRoom = "����";
//	BedRoom = "����";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "good gay ���ڷ��ʣ� " << building->SittingRoom << endl;
//	cout << "good gay ���ڷ��ʣ� " << building->BedRoom << endl;
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
	cout << "good gay ���ڷ��� " << building->m_SittingRoom << endl;
	cout << "good gat ���ڷ��� " << building->m_BedRoom << endl;
}
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
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