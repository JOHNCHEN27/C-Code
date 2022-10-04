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
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空，m的大小为： " << m.size() << endl;
//	}
//
//	//交换两个map容器
//	map<int, int>m1;
//	m1.insert(pair<int, int>(3, 55));
//	m1.insert(pair<int, int>(2, 23));
//
//	cout << "交换前： " << endl;
//	PrintfMap(m);
//	cout << "-----------" << endl;
//	PrintfMap(m1);
//
//
//	m.swap(m1);
//	cout << "交换后： " << endl;
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
//	//四种插入方式
//	m.insert(pair<int, int>(1, 20));
//	
//	m.insert(make_pair(3, 45));
//
//	m.insert(map<int, int> ::value_type(2, 55));
//
//	m[4] = 55; //不建议
//
//	printfmap(m);
//
//	m.erase(1); //删除键值为 1 的元素
//	printfmap(m);
//
//	m.erase(m.begin());  //删除头个元素
//	printfmap(m);
//
//	m.erase(m.begin(), m.end());   //删除区间的元素
//	printfmap(m);
//
//	m.clear(); //清除容器
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
		return v1 > v2; // 降序
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
	map<int, int,MyCompare> m;  //仿函数指定排序规则
	m.insert(pair<int, int>(1, 43));
	m.insert(pair<int, int>(3, 22));
	m.insert(make_pair(2, 72));

	printfmap(m);

	Person p1("张三", 20);
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