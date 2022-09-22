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
//	//set容器插入数据只能用insert
//	//set容器在插入数据时会自动排序
//
//	s.insert(25);
//	s.insert(20);
//	s.insert(30);
//	printfset(s);
//	
//	set<int> s1(s); //拷贝构造
//
//	printfset(s1);
//
//	set<int> s2;
//	s2 = s1; //赋值
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
//		cout << "s为空" << endl;
//	}
//	else
//	{
//		cout << "s不为空 " << s.size() << endl;
//	}
//
//	//查找和计数
//	set<int> ::iterator pos = s.find(20);
//	if (pos != s.end())
//	{
//		cout << "找到该元素： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到该元素" << endl;
//	}
//
//	cout << "元素30的个数为： " << s.count(30) << endl;
//
//
//	set<int> s2;
//	s2.insert(1);
//	s2.insert(4);
//	s2.insert(2);
//	printfset(s);
//	printfset(s2);
//
//	cout << "交换后: " << endl;
//	s.swap(s2);
//	printfset(s);
//	printfset(s2);
//
//	s2.erase(20); //删除值为20的元素
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
//	//pair第一个结果返回的是迭代器， 第二个结果是返回bool 判断是否插入成功
//	if (ret.second)
//	{
//		cout << "插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败 " << endl;
//	}
//
//	
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//对组，成对出现的数据 利用对组可以返回两个数据
//#include<iostream>
//using namespace std;
//int main()
//{
//	pair<string, int> p("zhangsan", 20);
//	cout << "p的姓名： " << p.first << "  p的年龄： " << p.second << endl;
//
//	pair<string, int> p1 = make_pair("礼物i", 18);
//	cout << "p1的姓名： " << p1.first << "  p1的年龄： " << p1.second << endl;
//	return 0;
//}

//仿函数改变排序规则
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
		return val1 > val2; // 降序排列
	}
};

class ComparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const 
	{
		return p1.age < p2.age; //按年龄降序排列
	}
};
void test()
{
	set<int, Mycompare> s; // 利用仿函数指定排序类型
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
		cout << "姓名: " << p1->name << "   年龄： " << p1->age << endl;
	}


}
int main()
{
	test();
	return 0;
}