//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator == (const Person& p)
//	{
//		if (this->m_Name == m_Name && this->m_Age == m_Age)
//		{
//			return true; 
//		}
//		else
//		{
//			return false;
//		}
//
//	}
//	string m_Name;
//	int m_Age;
//};
//void test()
//{
//	//内置数据类型find查找
//	//语法：begin （） end（）、value  返回元素迭代器 ，未找到返回end迭代器
//	/*vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int> ::iterator it = find(v.begin(), v.end(), 2);
//	if (it == v.end())
//	{
//		cout << "未查找到" << endl;
//	}
//	else
//	{
//		cout << "查找成功，该元素为：" << *it << endl;
//	}*/
//
//	//内置数据类型查找
//	Person p1("zhangsan", 20);
//	Person p2("666", 22);
//	
//
//	vector<Person> p;
//	p.push_back(p1);
//	p.push_back(p2);
//	Person pp("666", 22);
//
//	vector<Person> ::iterator vt = find(p.begin(), p.end(),pp); 
//	if (vt == p.end())
//	{
//		cout << "未查找到" << endl;
//	}
//	else
//	{
//		cout << "查找成功:" << vt->m_Name << " " << vt->m_Age << endl;
//	}
//	
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

//find_if 按条件查找 通过仿函数或谓词来指定条件
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	
//	string m_Name;
//	int m_Age;
//};
//class PP
//{
//public:
//	bool operator ()(const Person & p) 
//	{
//		return p.m_Age > 20;
//	}
//};
//void test()
//{
//	Person p1("zhangsan", 20);
//	Person p2("wuwu", 22);
//	Person p3("we", 22);
//	Person p4("ww", 22);
//
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//
//	vector<Person> ::iterator vt = find_if(v.begin(), v.end(),PP());
//	if (vt == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << vt->m_Name << " " << vt->m_Age << endl;
//	}
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//adjacent_find 查找相邻重复元素 ，返回相邻元素第一个位置的迭代器，未找到返回end（）
//#include<iostream>
//#include<vector>
//using namespace std;
//#include<algorithm>
//void test()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(10);
//	v.push_back(10);
//
//	vector<int> ::iterator vt = adjacent_find(v.begin(), v.end());
//	if (vt == v.end())
//	{
//		cout << "查找失败" << endl;
//	}
//	else
//	{
//		cout << "查找成功： " << *vt << endl;
//	}
//
//}
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "查找成功 " << endl;
//	}
//	else
//	{
//		cout << "查找失败" << endl;
//	}
//
//	//在无序序列中不可用， 二分查找的效率很高
//
//}
//int main()
//{
//	//test();
//	test02();
//	return 0;
//}

//count计数 
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator == (const Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//void test()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//
//	int num = count(v.begin(), v.end(), 1);
//	cout << "1的个数为 : " << num << endl;
//
//	Person p1("zhangsan", 20);
//	Person p2("liuliu", 20);
//	Person p3("wuwu", 20);
//	Person p4("1", 22);
//
//	vector<Person>p;
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//
//	int num1 = count(p.begin(), p.end(), p1);
//	cout << num1 << endl;
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//count_if
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//class Person
//{
//public:
//	Person(string n, int age)
//	{
//		this->m_Name = n;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//class mycompare
//{
//public:
//	bool operator ()(const Person& p)
//	{
//		return p.m_Age >= 20;
//	}
//};
//void test()
//{
//	vector<Person> v;
//	Person p1("wuwu", 20);
//	Person p2("2", 11);
//	Person p3("pp", 22);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	int num = count_if(v.begin(), v.end(), mycompare());
//	cout << num << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//sort排序
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class myprintf
//{
//public:
//	void operator ()(int val)
//	{
//		cout << val << " ";
//	}
//};
//class mycompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//void test()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(2);
//	v.push_back(29);
//
//	sort(v.begin(), v.end());
//	//for_each(v.begin(), v.end(), myprintf());
//
//	//利用仿函数改变排序类型
//	sort(v.begin(), v.end(), mycompare());
//	for_each(v.begin(), v.end(), myprintf());
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//random_shuffle洗牌算法
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
////利用仿函数来遍历
//class myprintf
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	srand((unsigned int)time(NULL));  //利用随机数种子产生更真实的排序
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myprintf());
//	cout << endl;
//	//打乱排序
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myprint);
//}
//int main()
//{
//	test();
//	return 0;
//}

//merge合并两个容器
//两个容器必须是有序的
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//void myprintf(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(),myprintf);
//
//	//合并的两个容器必须是有序的， 目标容器要有空间 没有则开辟
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//reverse反转
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class mtprintf
{
public:
	void operator ()(int val)
	{
		cout << val << " ";
	}
};
void test()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), mtprintf());

	cout << endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), mtprintf());
}
int main()
{
	test();
	return 0;
}