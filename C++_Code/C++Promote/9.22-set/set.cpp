//#include<iostream>
//using namespace std;
//#include<set>
//void printfset(set<int>& s)
//{
//	for (set<int> ::iterator s1 = s.begin(); s1 != s.end(); s1++)
//	{
//		cout << *s1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	set<int>s;
//	//set������������ֻ����insert
//	//set�����ڲ�������ʱ���Զ�����
//
//	s.insert(25);
//	s.insert(20);
//	s.insert(30);
//	printfset(s);
//	
//	set<int> s1(s); //��������
//
//	printfset(s1);
//
//	set<int> s2;
//	s2 = s1; //��ֵ
//	printfset(s2);
//
//}
//int main()
//{
//
//	test();
//	return 0; 
//}

//#include<iostream>
//using namespace std;
//#include<set>
//void printfset(set<int>& s)
//{
//	for (set<int> ::iterator s1 = s.begin(); s1 != s.end(); s1++)
//	{
//		cout << *s1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	set <int> s;
//	s.insert(20);
//	s.insert(10);
//	s.insert(43);
//	s.insert(20);
//	s.insert(42);
//	s.insert(22);
//	s.insert(28);
//
//	if (s.empty())
//	{
//		cout << "sΪ��" << endl;
//	}
//	else
//	{
//		cout << "s��Ϊ�� " << s.size() << endl;
//	}
//
//	//���Һͼ���
//	set<int> ::iterator pos = s.find(20);
//	if (pos != s.end())
//	{
//		cout << "�ҵ���Ԫ�أ� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ���Ԫ��" << endl;
//	}
//
//	cout << "Ԫ��30�ĸ���Ϊ�� " << s.count(30) << endl;
//
//
//	set<int> s2;
//	s2.insert(1);
//	s2.insert(4);
//	s2.insert(2);
//	printfset(s);
//	printfset(s2);
//
//	cout << "������: " << endl;
//	s.swap(s2);
//	printfset(s);
//	printfset(s2);
//
//	s2.erase(20); //ɾ��ֵΪ20��Ԫ��
//	printfset(s2);
//
//	s2.erase(s2.begin()); 
//	printfset(s2);
//
//	s2.erase(s2.begin(), s2.end());
//	printfset(s2);
//
//	s.clear();
//	printfset(s);
//
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
//#include<set>
//void test()
//{
//	set<int> s;
//	pair<set<int> ::iterator, bool>ret = s.insert(10); 
//	//pair��һ��������ص��ǵ������� �ڶ�������Ƿ���bool �ж��Ƿ����ɹ�
//	if (ret.second)
//	{
//		cout << "����ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ�� " << endl;
//	}
//
//	
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//���飬�ɶԳ��ֵ����� ���ö�����Է�����������
//#include<iostream>
//using namespace std;
//int main()
//{
//	pair<string, int> p("zhangsan", 20);
//	cout << "p�������� " << p.first << "  p�����䣺 " << p.second << endl;
//
//	pair<string, int> p1 = make_pair("����i", 18);
//	cout << "p1�������� " << p1.first << "  p1�����䣺 " << p1.second << endl;
//	return 0;
//}

//�º����ı��������
#include<iostream>
using namespace std;
#include<set>
class Person
{
public :
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	string name;
	int age;
};
class Mycompare
{
public:
	bool operator() ( int val1,  int val2) const 
	{
		return val1 > val2; // ��������
	}
};

class ComparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const 
	{
		return p1.age < p2.age; //�����併������
	}
};
void test()
{
	set<int, Mycompare> s; // ���÷º���ָ����������
	s.insert(20);
	s.insert(250);
	s.insert(10);
	s.insert(30);

	for (set<int, Mycompare> ::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " "; 
	}
	cout << endl; 

	set<Person, ComparePerson> p;
	Person p1("zhangsan", 20);
	Person p2("wuwu", 18);
	Person p3("ww", 25);
	p.insert(p1);
	p.insert(p2);
	p.insert(p3);

	for (set<Person, ComparePerson> ::iterator p1 = p.begin(); p1 != p.end(); p1++)
	{
		cout << "����: " << p1->name << "   ���䣺 " << p1->age << endl;
	}


}
int main()
{
	test();
	return 0;
}