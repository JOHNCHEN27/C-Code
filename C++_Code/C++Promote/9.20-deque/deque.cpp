//#include<iostream>
//using namespace std;
//#include<deque>
//void printfDeque(const deque<int>& d)
//{
//	//const修饰 防止修改的操作，只允许只读操作
//	//迭代器也需要修饰
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
//	d4.assign(10, 100); //构造十个 100 的数
//	printfDeque(d4);
//
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小为： " << d1.size() << endl;
//	}
//
//	//重新指定大小
//	//d4.resize(15); //超出的部分未指定值默认用0填充，如果指定值用指定值填充
//	d4.resize(15, 1); //超出的部分用指定值1填充
//	printfDeque(d4);
//
//	d4.resize(5); //多出的部分会被删除
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

//deque存取
//#include<iostream>
//using namespace std;
//#include<deque>
//#include<algorithm> //sort算法需要包含algorithm头文件
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
//	// [] 访问
//	cout << d1[0] << "  " << d1[1] << endl;
//	//at访问
//	cout << d1.at(2) << "  " << d1.at(3) << endl;
//
//	//获取第一个数
//	cout << d1.front() << endl; 
//	//获取最后一个数
//	cout << d1.back() << endl;
//
//	//sort排序
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
//	stack<int>s;  //stack 栈的特点 先进后出
//	//push入栈， pop出栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	cout << "栈的大小为： " << s.size() << endl;
//	while (!s.empty())
//	{
//		cout << "栈不为空,栈顶元素为： " << s.top() << endl;
//
//		//出栈
//		s.pop();
//	}
//	cout << "栈的大小为： " << s.size() << endl;
//	
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//queue队列
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
//	Person p1("张三", 18);
//	Person p2("wangwu", 20);
//	Person p3("李四", 22);
//	queue<Person>p;
//	p.push(p1);
//	p.push(p2);
//	p.push(p3);
//
//	cout << "p的大小是： " << p.size() << endl;
//
//	while (!p.empty())
//	{
//		cout << "p不为空，p的队头元素为： " << p.front().m_Name  << " "
//			<< p.front().m_Age << endl;
//		cout << "p的队尾元素为： " << p.back().m_Name << "  " << p.back().m_Age << endl;
//		p.pop();
//
//	}
//	cout << "p的大小为： " << p.size() << endl;
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
//	list<int>L1;//默认构造
//	L1.push_back(10);
//	L1.push_back(30);
//	L1.push_back(20);
//	printflist(L1);
//	//list<int>L2(L1); // 拷贝构造
//	//printflist(L2);
//
//	//list<int>L3(L1.begin(), L1.end()); //区间构造
//	//printflist(L3);
//
//	////n个元素的构造
//	//list<int>L4(10, 1000);
//	//printflist(L4);
//
//     //赋值操作
//	//list<int>L2;
//	//L2 = L1; //拷贝赋值
//	//printflist(L2);
//
//	//list<int>L3;
//	//L3.assign(L2.begin(), L2.end()); // assign区间赋值
//	//printflist(L3);
//
//	//list<int>L4;
//	//L4.assign(10, 10000); // assign n个元素的赋： 10个10000赋值
//	//printflist(L4);
//
//	//cout << "交换前： " << endl;
//	//printflist(L3);
//	//printflist(L4);
//
//	//cout << "交换后 :  " << endl;
//	//L3.swap(L4);
//	//printflist(L3);
//	//printflist(L4);
//
//	//大小操作
//	if (L1.empty())
//	{
//		cout << "L1weikong" << endl;
//	}
//	else
//	{
//		cout << "L1不为空 ,且L1的大小： " << L1.size() << endl;
//	}
//
//	//重新指定大小
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

//list插入和删除
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
//	//尾删和头删
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
//	//删除
//	L1.erase(L1.begin());
//	printflist(L1);
//
//	//移除
//	L1.remove(1000); //指定需要移除的元素
//	printflist(L1);
//
//
//	//清除容器中的元素
//	L1.clear();
//	printflist(L1);
//
//	//删除区间yuans
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
//	printflist(L1); //降序排列
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


//list容器排序
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
//		return p1.weight < p2.weight; //如果年龄相同 按体重升序
//	}
//	if (p1.age == p2.age && p1.weight == p2.weight)
//	{
//		return p1.height > p2.height;;  //如果身高和年龄相同按升高降序
//	}
//	else
//	return p1.age < p2.age; // 年龄升序
//}
//void test()
//{
//	list<Person> L;
//	Person p1("张三", 20, 118, 178);
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
//	//利用sort排序 :对于自定义数据类型需要指定排序属性
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


//STL评委打分
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
		string name = "选手";
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
		//创建deque容器 存放评委打分
		deque<int> d;
		int score = 0;
		for (int i = 0; i < 10; i++)
		{
			score = rand() % 41 + 60; //产生随机数
			d.push_back(score);
		}

		//查看评分： 
		cout << "选手： " << vt->m_Name << "的打分" << endl;
		for (int i = 0; i < d.size(); i++)
		{
			cout << d[i] << "  ";
		}
		cout << endl;

		sort(d.begin(), d.end()); //排序 
		d.pop_back(); //去掉最高分
		d.pop_front(); //去掉最低分
		

		/*for (int i = 0; i < d.size(); i++)
		{
			cout << d[i] << "   ";
		}
		cout << endl;*/

		//累加总分
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
		cout << "姓名: " << v1->m_Name << "  分数： " << v1->score << endl;
	}
}

int main()
{
	//生成随机数种子
	srand((unsigned int)time(NULL));
	
	//创建五名选手
	vector<Person> v;
	createPerson(v);

	//打分
	setscore(v);
    
	//获取平均分
	getavg(v);
	system("pause");
	return 0;
}