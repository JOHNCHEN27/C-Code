//#include<iostream>
//using namespace std;
//#include<string>
//#include<map>
//void PrintfMap(map<int, int> m)
//{
//	for (map<int, int> ::iterator m1 = m.begin(); m1 != m.end(); m1++)
//	{
//		cout << m1->first << "  " << m1->second << endl;
//	}
//}
//void test()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(10, 22));
//	m.insert(pair<int, int>(5, 22));
//	m.insert(pair<int, int>(3, 22));
//	m.insert(pair<int, int>(6, 22));
//	
//	
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ�գ�m�Ĵ�СΪ�� " << m.size() << endl;
//	}
//
//	//��������map����
//	map<int, int>m1;
//	m1.insert(pair<int, int>(3, 55));
//	m1.insert(pair<int, int>(2, 23));
//
//	cout << "����ǰ�� " << endl;
//	PrintfMap(m);
//	cout << "-----------" << endl;
//	PrintfMap(m1);
//
//
//	m.swap(m1);
//	cout << "������ " << endl;
//	PrintfMap(m);
//	PrintfMap(m1);
//
//
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
//#include<map>
//void  printfmap(map<int, int> m)
//{
//	for (map<int, int> ::iterator m1 = m.begin(); m1 != m.end(); m1++)
//	{
//		cout << m1->first << "   " << m1->second << endl;
//	}
//	cout << endl;
//}
//void test()
//{
//	map<int, int> m;
//
//	//���ֲ��뷽ʽ
//	m.insert(pair<int, int>(1, 20));
//	
//	m.insert(make_pair(3, 45));
//
//	m.insert(map<int, int> ::value_type(2, 55));
//
//	m[4] = 55; //������
//
//	printfmap(m);
//
//	m.erase(1); //ɾ����ֵΪ 1 ��Ԫ��
//	printfmap(m);
//
//	m.erase(m.begin());  //ɾ��ͷ��Ԫ��
//	printfmap(m);
//
//	m.erase(m.begin(), m.end());   //ɾ�������Ԫ��
//	printfmap(m);
//
//	m.clear(); //�������
//
//}
//int main()
//{
//	test();
//	return 0;
//
//}

#include<iostream>
#include<map>
using namespace std;
class Person
{
public:
	Person(string n, int age)
	{
		this->Name = n;
		this->Age = age;
	}
	string Name;
	int Age;
};
class PersonSort
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};
class MyCompare
{
public:
	bool operator ()(int v1, int v2) const
	{
		return v1 > v2; // ����
	}
};

void printfmap(map<int, int,MyCompare> m)
{
	for (map<int, int, MyCompare> ::iterator m1 = m.begin(); m1 != m.end(); m1++)
	{
		cout << m1->first << "   " << m1->second << endl;
	}
	cout << endl;
}
void printfmap(map<int, Person, PersonSort> m)
{
	for (map<int, Person, PersonSort> ::iterator m1 = m.begin(); m1 != m.end(); m1++)
	{
		cout << m1->first << " ";
		cout << m1->second.Name << "  " << m1->second.Age << endl;
	}
	cout << endl;
}
void test()
{
	map<int, int,MyCompare> m;  //�º���ָ���������
	m.insert(pair<int, int>(1, 43));
	m.insert(pair<int, int>(3, 22));
	m.insert(make_pair(2, 72));

	printfmap(m);

	Person p1("����", 20);
	Person p2("wuuw", 18);
	Person p3("qqq", 26);
	map<int, Person, PersonSort>m1;
	m1.insert(pair<int, Person>(2, p1));
	m1.insert(pair<int, Person>(1, p3));
	m1.insert(pair<int, Person>(3, p2));

	printfmap(m1);
	
}
int main()
{
	test();
	return 0;
}