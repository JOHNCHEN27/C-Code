//#include<iostream>
//#include<string> //��ϵ���������
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
//	Person p1("����", 18);
//	Person p2("����", 18);
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

//��ֵ���������
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
//		cout << "���������ĵ���" << endl;
//		if (m_A != NULL)
//		{
//			delete m_A; //�ͷ�new�����ڶ����Ŀռ�
//			m_A = NULL; //��ֹҰָ��ĳ��֣���ָ��ָ��NULL
//		}
//	}
//	Person& operator =(Person& p)
//	{
//		// ���ø�ֵ��������� operator ���·���ռ�
//
//		// �����ж������Ƿ��ڶ�������������ɾ�
//		if (m_A != NULL)
//		{
//			delete m_A;
//			m_A = NULL;
//		}
//		//���¸����� ����ռ�
//		m_A = new int(*p.m_A);
//		return *this;  //���ض�����
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

//�������������
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
//	}//ǰ�üӼ� ���ص��Ƕ����� �����üӼ� ���ص���ֵ
//	Person operator++(int) //����ǰ�úͺ��üӼӵ������� ��һ��intռλ����
//	{
//		//��¼��ǰ��ֵ
//		Person temp = *this;
//		//���üӼ�
//		m_A++;
//		//���ؼ�¼��ֵ :ʵ���ȷ��غ�Ӽ�
//		return temp;
//	}
//	int m_A;
//};
////�������������ֻ����ȫ�ֺ����﷢��
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
//		return *this;  // ���ض�����
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

//�Ӻ����������
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
//	//Person& operator+(Person& a) //��Ա����ʵ�ּӺ����������
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
////ȫ�ֺ���ʵ�ּӺ����������
//Person operator+ (Person& p,Person &a)
//{
//	Person temp;
//	temp.m_A = a.m_A + p.m_A;
//	temp.m_B = a.m_B + p.m_B;
//	return temp;
//}
////ȫ�ֺ���ʵ���������������
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

//�����������������
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