//#include<iostream>
//using namespace std;
//#include<deque>
//void printfDeque(const deque<int>& d)
//{
//	//const���� ��ֹ�޸ĵĲ�����ֻ����ֻ������
//	//������Ҳ��Ҫ����
//	for (deque<int> ::const_iterator d1 = d.begin(); d1 != d.end(); d1++)
//	{
//		cout << *d1 << " ";
//	}
//	cout << endl;
//
//}
//void test()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printfDeque(d1);
//	
//	deque <int>d2;
//	d2 = d1;
//	printfDeque(d2);
//
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//	printfDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100); //����ʮ�� 100 ����
//	printfDeque(d4);
//
//	if (d1.empty())
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ�� " << d1.size() << endl;
//	}
//
//	//����ָ����С
//	//d4.resize(15); //�����Ĳ���δָ��ֵĬ����0��䣬���ָ��ֵ��ָ��ֵ���
//	d4.resize(15, 1); //�����Ĳ�����ָ��ֵ1���
//	printfDeque(d4);
//
//	d4.resize(5); //����Ĳ��ֻᱻɾ��
//	printfDeque(d4); 
//	
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<deque>
//void printfDeque(deque<int>& d)
//{
//	for (deque<int> ::iterator d1 = d.begin(); d1 != d.end(); d1++)
//	{
//		cout << *d1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(20);
//	d1.push_front(10);
//	printfDeque(d1);
//
//	d1.pop_front();
//	d1.pop_back();
//
//	d1.insert(d1.begin(), 1000);
//	d1.insert(d1.begin(), 2, 10000);
//	printfDeque(d1);
//
//	deque<int> d2;
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	printfDeque(d2);
//
//	d2.clear();
//	printfDeque(d2);
//
//	d1.erase(d1.begin());
//	
//	printfDeque(d1);
//
//	d1.erase(d1.begin(), d1.end());
//	printfDeque(d1);
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//deque��ȡ
//#include<iostream>
//using namespace std;
//#include<deque>
//#include<algorithm> //sort�㷨��Ҫ����algorithmͷ�ļ�
//void printfDeque(const deque<int>& d)
//{
//	for (deque<int >::const_iterator d1 = d.begin(); d1 != d.end(); d1++)
//	{
//		cout << *d1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(20);
//	d1.push_front(10);
//	printfDeque(d1);
//
//	// [] ����
//	cout << d1[0] << "  " << d1[1] << endl;
//	//at����
//	cout << d1.at(2) << "  " << d1.at(3) << endl;
//
//	//��ȡ��һ����
//	cout << d1.front() << endl; 
//	//��ȡ���һ����
//	cout << d1.back() << endl;
//
//	//sort����
//	sort(d1.begin(), d1.end());
//	printfDeque(d1);
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
//#include<stack>
//void test()
//{
//	stack<int>s;  //stack ջ���ص� �Ƚ����
//	//push��ջ�� pop��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	cout << "ջ�Ĵ�СΪ�� " << s.size() << endl;
//	while (!s.empty())
//	{
//		cout << "ջ��Ϊ��,ջ��Ԫ��Ϊ�� " << s.top() << endl;
//
//		//��ջ
//		s.pop();
//	}
//	cout << "ջ�Ĵ�СΪ�� " << s.size() << endl;
//	
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//queue����
//#include<iostream>
//using namespace std;
//#include<queue>
//#include<string>
//class Person
//{
//public:
//	Person(string n, int a)
//	{
//		m_Name = n;
//		m_Age = a;
//	}
//	string m_Name;
//	int m_Age;
//};
//void test()
//{
//	Person p1("����", 18);
//	Person p2("wangwu", 20);
//	Person p3("����", 22);
//	queue<Person>p;
//	p.push(p1);
//	p.push(p2);
//	p.push(p3);
//
//	cout << "p�Ĵ�С�ǣ� " << p.size() << endl;
//
//	while (!p.empty())
//	{
//		cout << "p��Ϊ�գ�p�Ķ�ͷԪ��Ϊ�� " << p.front().m_Name  << " "
//			<< p.front().m_Age << endl;
//		cout << "p�Ķ�βԪ��Ϊ�� " << p.back().m_Name << "  " << p.back().m_Age << endl;
//		p.pop();
//
//	}
//	cout << "p�Ĵ�СΪ�� " << p.size() << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//list
//#include<iostream>
//using namespace std;
//#include<list>
//void printflist(const list<int>& L)
//{
//	for (list<int> ::const_iterator v = L.begin(); v != L.end(); v++)
//	{
//		cout << *v << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	list<int>L1;//Ĭ�Ϲ���
//	L1.push_back(10);
//	L1.push_back(30);
//	L1.push_back(20);
//	printflist(L1);
//	//list<int>L2(L1); // ��������
//	//printflist(L2);
//
//	//list<int>L3(L1.begin(), L1.end()); //���乹��
//	//printflist(L3);
//
//	////n��Ԫ�صĹ���
//	//list<int>L4(10, 1000);
//	//printflist(L4);
//
//     //��ֵ����
//	//list<int>L2;
//	//L2 = L1; //������ֵ
//	//printflist(L2);
//
//	//list<int>L3;
//	//L3.assign(L2.begin(), L2.end()); // assign���丳ֵ
//	//printflist(L3);
//
//	//list<int>L4;
//	//L4.assign(10, 10000); // assign n��Ԫ�صĸ��� 10��10000��ֵ
//	//printflist(L4);
//
//	//cout << "����ǰ�� " << endl;
//	//printflist(L3);
//	//printflist(L4);
//
//	//cout << "������ :  " << endl;
//	//L3.swap(L4);
//	//printflist(L3);
//	//printflist(L4);
//
//	//��С����
//	if (L1.empty())
//	{
//		cout << "L1weikong" << endl;
//	}
//	else
//	{
//		cout << "L1��Ϊ�� ,��L1�Ĵ�С�� " << L1.size() << endl;
//	}
//
//	//����ָ����С
//	L1.resize(10);
//	printflist(L1);
//
//	L1.resize(2);
//	printflist(L1);
//
//
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//list�����ɾ��
//#include<iostream>
//using namespace std;
//#include<list>
//void printflist(const list<int>& L)
//{
//	for (list<int> ::const_iterator v = L.begin(); v != L.end(); v++)
//	{
//		cout << *v << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(200);
//	L1.push_front(300);
//	L1.push_front(500);
//	printflist(L1);
//
//	//βɾ��ͷɾ
//	L1.pop_back();
//	L1.pop_front();
//	printflist(L1);
//
//	//insert
//	list<int> ::iterator v = L1.begin();
//	v++;
//	L1.insert(v, 1000);
//	printflist(L1); // 300 1000 10
//
//	L1.insert(L1.begin(),L1.begin(), L1.end());
//	printflist(L1); // 300, 1000 10 300 1000 10
//
//	L1.insert(L1.begin(), 2, 1000);
//	printflist(L1); // 1000 1000 1000 10 300 1000 10
//
//	//ɾ��
//	L1.erase(L1.begin());
//	printflist(L1);
//
//	//�Ƴ�
//	L1.remove(1000); //ָ����Ҫ�Ƴ���Ԫ��
//	printflist(L1);
//
//
//	//��������е�Ԫ��
//	L1.clear();
//	printflist(L1);
//
//	//ɾ������yuans
//	L1.erase(L1.begin(), L1.end());
//	printflist(L1);
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
//#include<list>
//using namespace std;
//void printflist(const list<int>& L)
//{
//	for (list<int> ::const_iterator v = L.begin(); v != L.end(); v++)
//	{
//		cout << *v << " ";
//
//	}
//	cout << endl;
//}
//int compare(int val1, int val2)
//{
//	return val1 > val2;
//}
//void test()
//{
//	list<int> L1;
//	L1.push_back(100);
//	L1. push_front(24);
//	L1.push_front(65);
//	L1.push_front(34);
//    
//	printflist(L1);
//	L1.reverse();
//	printflist(L1);
//
//	L1.sort();
//	printflist(L1);
//	L1.sort(compare);
//	printflist(L1); //��������
//
//	list<int> L2;
//	
//	
//
//
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//list��������
//#include<iostream>
//using namespace std;
//#include<list>
//#include<string>
//class Person
//{
//public:
//	Person(string n, int a, int w,int h)
//	{
//		m_Name = n;
//		age = a;
//		weight = w;
//		height = h;
//	}
//	string m_Name;
//	int age;
//	int weight;
//	int height;
//};
//void printflist(const list<Person>& L)
//{
//	for (list<Person> ::const_iterator v = L.begin(); v != L.end(); v++)
//	{
//		cout << v->m_Name << "\t " << v->age << "\t  " << v->height << "\t  " << v->weight << endl;
//	}
//	cout << endl;
//}
//bool comparePerson(Person p1, Person p2)
//{
//	if (p1.age == p2.age)
//	{
//		return p1.weight < p2.weight; //���������ͬ ����������
//	}
//	if (p1.age == p2.age && p1.weight == p2.weight)
//	{
//		return p1.height > p2.height;;  //�����ߺ�������ͬ�����߽���
//	}
//	else
//	return p1.age < p2.age; // ��������
//}
//void test()
//{
//	list<Person> L;
//	Person p1("����", 20, 118, 178);
//	Person p2("wangwu", 20, 110, 178);
//	Person p3("wang", 20, 130, 180);
//	Person p4("lwu", 34, 120, 160);
//	Person p5("wangwu", 34, 120, 170);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	printflist(L);
//
//	//����sort���� :�����Զ�������������Ҫָ����������
//	L.sort(comparePerson);
//	printflist(L);
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


//STL��ί���
#include<iostream>

#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;
class Person
{
public:
	Person(string n, int a)
	{
		m_Name = n;
		score = a;
	}
	string m_Name;
	int score;
};
void createPerson(vector<Person>& v)
{
	string sname = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += sname[i];
		int score = 0;

		Person p(name, score);
		v.push_back(p);

	}
}
void setscore(vector<Person>& v)
{
	for (vector<Person> ::iterator vt = v.begin(); vt != v.end(); vt++)
	{
		//����deque���� �����ί���
		deque<int> d;
		int score = 0;
		for (int i = 0; i < 10; i++)
		{
			score = rand() % 41 + 60; //���������
			d.push_back(score);
		}

		//�鿴���֣� 
		cout << "ѡ�֣� " << vt->m_Name << "�Ĵ��" << endl;
		for (int i = 0; i < d.size(); i++)
		{
			cout << d[i] << "  ";
		}
		cout << endl;

		sort(d.begin(), d.end()); //���� 
		d.pop_back(); //ȥ����߷�
		d.pop_front(); //ȥ����ͷ�
		

		/*for (int i = 0; i < d.size(); i++)
		{
			cout << d[i] << "   ";
		}
		cout << endl;*/

		//�ۼ��ܷ�
		int sum = 0;
		for (int i = 0; i < d.size(); i++)
		{
			sum += d[i];
		}
		int avg = sum / d.size();
		vt->score = avg;

	}
}
void getavg(vector<Person>& v)
{
	for (vector<Person> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
	{
		cout << "����: " << v1->m_Name << "  ������ " << v1->score << endl;
	}
}

int main()
{
	//�������������
	srand((unsigned int)time(NULL));
	
	//��������ѡ��
	vector<Person> v;
	createPerson(v);

	//���
	setscore(v);
    
	//��ȡƽ����
	getavg(v);
	system("pause");
	return 0;
}