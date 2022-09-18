//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm> 
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//int main()
//{
//	vector<int> v;  //使用vector容器需要引用头文件 
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器的数据
//	vector<int> ::iterator itBegin = v.begin(); // 起始迭代器，指向容器中的第一个元素
//	vector<int> ::iterator itEnd = v.end(); // 结束迭代器，指向容器中的最后一个元素
//
//	//第一种遍历方式
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//第二种遍历方式
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	
//	//第三种遍历方式：利用STL遍历输出
//	for_each(v.begin(), v.end(), myPrint);
//	return 0;
//}
//

//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
////vector容器存放自定义数据类型
//class Person
//{
//public:
//	Person(string n, int a)
//	{
//		m_Name = n;
//		m_age = a;
//	}
//	string m_Name;
//	int m_age;
//};
//void test()
//{
//	vector <Person> v; //创建一个vector容器
//	Person p1("a", 20);
//	Person p2("b", 30);
//	Person p3("c", 40);
//	Person p4("d", 20);
//	Person p5("e", 50);
//
//	//尾插法向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//for循环输出
//	for (vector <Person> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名： " << it->m_Name << "年龄： " << it->m_age << endl;
//		//it看成是一个指针 ，指向Person
//		cout << (*it).m_Name << " " << (*it).m_age << endl;
//		//(*it) 对迭代器进行解引用之后，就解引用成为了Person 数据类型， 可以直接使用
//
//	}
//
//}
//void test01()
//{
//	//vector容器中的数据是Person 指针类型，所以向容器中插入数据需要把数据的地址传递过去，指针接收
//	vector <Person*> v; //创建一个vector容器
//	Person p1("a", 20);
//	Person p2("b", 30);
//	Person p3("c", 40);
//	Person p4("d", 20);
//	Person p5("e", 50);
//
//	//尾插法向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*> ::iterator a = v.begin(); a != v.end(); a++)
//	{
//		cout << (*a)->m_Name << " " << (*a)->m_age << endl;
//		//对迭代器a解引用之后 （*a） = Person* 
//	
//	}
//}
//int main()
//{
//	//test();
//	test01();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
////容器嵌套
//void test()
//{
//	//创建一个小容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	//for循环尾插法向小容器中添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//		
//	}
//	//创建一个大容器 存放小容器
//	vector<vector<int>> v;
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//for循环输出大容器中的数据
//	for (vector<vector<int>> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//先输出小容器中的数据
//		for (vector<int> ::iterator vit = (*it).begin();vit != (*it).end(); vit++)
//		{
//			cout << (*vit) << " ";
//		}
//		cout << endl;
//	}
//
//}
//int main()
//{
//	test();
//	return 0;
//}

////string构造函数
//#include<iostream>
//using namespace std;
//void test()
//{
//	string s1; // 默认构造
//	const char* str= "avs";
//	string s2(str);
//	cout << s2 << endl;
//
//	string s3(s2); //拷贝函数构造
//	cout << s3 << endl;
//
//	string s4(10, 'a'); //表示给s4字符串 传入10个a
//	cout << s4 << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//string 赋值操作
//#include<iostream>
//using namespace std;
//int main()
//{
//	string s1;
//	s1 = "hello C++";
//	cout << s1 << endl;
//	string s2 = s1;
//	cout << s2 << endl;
//
//	string s3;
//	s3 = 'a';
//	cout << s3 << endl;
//
//	string s4;
//	s4.assign("hello world");
//	cout << s4 << endl;
//	string s5;
//	s5.assign("hello world", 5); // 表示只存放五个字符放入字符串s5中
//	cout << s5 << endl;
//
//	string s6;
//	s6.assign(s5);
//	cout << s6 << endl;
//
//	string s7;
//	s7.assign(10, 'c');
//	cout << s7 << endl;
//
//
//
//	return 0;
//}

//字符串的拼接
//#include<iostream>
//using namespace std;
//int main()
//{
//	string s1 = "I";
//	s1 += "  Love";
//	cout << s1 << endl;
//	string s2 = "  LOL DNF";
//	s1 += s2;
//	cout << s1 << endl;
//	string s3;
//	s3 = ';';
//	s1 += s3;
//	cout << s1 << endl;
//	
//	string s4 = " I ";
//	s4.append(" love  you ");
//	cout << s4 << endl;
//
//	s4.append("game wzry", 4); //表示只截取前面4个字符
//	cout << s4 << endl;
//	s4.append(s2);
//	cout << s4 << endl;
//	
//	s4.append(s2, 0, 4); // 表示从s2字符串中的第一个位置开始，截取4个字符
//	cout << s4 << endl;
//		return 0;
//}

// 字符串的查找和替换
//#include<iostream>
//using namespace std;
//void test()
//{
//	string str = "abcdcd";
//
//	int pot = str.find("cd");  // 找到该字符串就返回该字符串第一个字符在主串中的下标，下标从0开始
//	//未找到就返回 -1；
//	if (pot != -1)
//	{
//		cout << "找到了字符串，pot = " << pot << endl;
//	}
//	else
//	{
//		cout << "没有查找到该字符串" << endl;
//	}
//
//	pot = str.rfind("cd");
//	cout << pot << endl;
//	//find和rfind的区别：都是从左往右数，但是find是从左往右查找，而rfind是从右往左查找
//
//}
//void test01()
//{
//	string str1 = "qwert";
//	str1.replace(1, 3, "1111"); //表示从字符串下标为1的字符开始往后的三位数替换成指定的数据
//	cout << str1 << endl;
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//字符串的比较
//#include<iostream>
//using namespace std;
//void test()
//{
//	string str1 = "hello";
//	string str2 = "hello";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 == str2" << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//void test()
//{
//	string str = "hello";
//	//通过下标访问[]
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//   //通过at访问
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " " ;
//	}
//	cout << endl;
//
//	//修改单个字符
//	str[0] = 'a';
//	cout << str << endl;
//
//	//at修改字符
//	str.at(1) = 'a';
//	cout << str << endl;
//
//	
//}
//int main()
//{
//	test();
//	return 0;
//}

//字符串的插入和删除
//#include<iostream>
//using namespace std;
//int main()
//{
//	string str = "hello";
//	str.insert(1, "111"); //从下标为1的元素后面插入指定元素
//	cout << str << endl;
//
//	str.erase(1, 3);
//	//从下标为1的元素开始，删除三个元素
//	cout << str << endl;
//	return 0;
//}

//子串的截取
//#include<iostream>
//using namespace std;
//#include<string>
//void test()
//{
//	string str1 = "hello";
//	string str11 = str1.substr(1, 3); //从字符串下标为1的字符开始 截取三个字符
//	cout << str11 << endl;
//
//	string str2 = "hello@11.com";
//	int pos = str2.find("@");
//	string username = str2.substr(0, pos); // 从下标为0 的位置开始截取长度为pos的字符
//	cout << username << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//vector容器 

//#include<iostream>
//using namespace std;
//#include<vector>
//void printfvector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << (*v1) << "  " ;
//	}
//	cout << endl;
//}
//int main()
//{
//	vector<int>v1;  //默认函数构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfvector(v1);
//
//	vector<int>v2(v1.begin(), v1.end());  //利用区间构造
//	printfvector(v2);
//
//	vector<int>v3(v2);  //拷贝构造
//	printfvector(v3); //
//
//	vector<int>v4(10, 100); //n个元素的构造，表示初识化10个100的数
//	printfvector(v4);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
////vector  operator = 
//#include<vector>
//void printfVector(vector<int>& v)
//{
//	for (vector<int>::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << (*v1) << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfVector(v1);
//	//拷贝赋值
//	vector<int> v2;
//	v2 = v1;
//	printfVector(v2);
//
//	//assign区间赋值
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printfVector(v3);
//
//	//assign n个元素赋值
//	vector<int> v4;
//	v4.assign(10, 200); // 赋值10个 200的元素
//	printfVector(v4);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//vector容器 容量和大小
//#include<iostream>
//using namespace std;
//#include<vector>
//void printfVector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfVector(v1);
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为 : " << v1.capacity() << endl;
//		cout << "v1的大小为： " << v1.size() << endl;
//	}
//	v1.resize(15);  //resize重新指定容器大小，如大小超出原来的大小
//	//则剩下超出的部分 如没有默认值，则用0填充，有默认值有默认值填充
//	printfVector(v1);
//
//	v1.resize(5);
//	printfVector(v1); // 如果重新指定的大小小于原来大小，则删除超出的部分
//	
//}
//int main()
//{
//	test();
//	return 0;
//}

//vector容器的插入和删除
//#include<iostream>
//using namespace std;
//#include<vector>
//void  printfVector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);  //尾插法，从尾部插入数据
//	printfVector(v1);
//
//	//尾删法
//	v1.pop_back(); //从尾部删除数据
//	printfVector(v1);
//
//	//插入法
//	v1.insert(v1.begin(), 2); //从迭代器的开始插入一个数据2
//	printfVector(v1);
//	v1.insert(v1.begin(), 2, 100); // 从迭代器的开始插入两个数据 100
//	printfVector(v1); 
//
//	//删除法
//	v1.erase(v1.begin()); //从迭代器的开始删除一个元素
//	printfVector(v1);
//	v1.erase(v1.begin(), v1.end()); //从迭代器开始到结束区间删除元素
//	printfVector(v1);
//
//	//清空
//	v1.clear();
//	printfVector(v1);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//vector容器的数据存取
//#include<iostream>
//using namespace std;
//#include<vector>
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//通过[]访问元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//通过at访问
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "v1容器中的第一个元素是： " << v1.front() << endl;
//	cout << "v1容器中的最后一个元素是: " << v1.back() << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//vector容器互换
//#include<iostream>
//using namespace std;
//#include<vector>
//void printfVector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
// 	}
//	printfVector(v1);
//	vector <int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printfVector(v2);
//	cout << "交换之后 " << endl;
//	v1.swap(v2);
//	printfVector(v1);
//	printfVector(v2);
//}
//void test01()
//{
//	//实际用途收缩空间
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为： " << v.capacity() << endl;
//	cout << "v的大小为： " << v.size() << endl;
//
//	v.resize(5);
//	cout << "v的容量为： " << v.capacity() << endl;  //当重新指定大小时，容量还是没有变化
//	cout << "v的大小为： " << v.size() << endl;
//
//	//通过swap函数来压缩内存
//	vector<int>(v).swap(v); //vector<int>(v) 匿名对象，把v重新调整的大小初始化匿名对象的容量大小，
//	//然后将匿名对象的容量和v的容量交换，这样v就变成了重新调整大小之后的容量，而匿名对象的大小会
//	//在本行结束之后释放掉， 从而实现内存压缩
//	cout << "v的容量为： " << v.capacity() << endl;
//	cout << "v的大小为： " << v.size() << endl;
//}
//int main()
//{
//	test();
//	test01();
//	system("pause");
//	return 0;
//}

//预留空间
//#include<iostream>
//#include<vector>
//using namespace std;
//void test()
//{
//	vector<int>v;
//	int num = 0;
//	int* p = NULL;
//	//利用reverse预留空间
//	v.reserve(100000);
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << num << endl; 
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<iostream>
using namespace std;
#include<deque>
void printfDeque(const deque<int>& d)  //const修饰容器 和修饰迭代器 防止误操作（写操作）
{
	for (deque<int> ::const_iterator d1 = d.begin(); d1 != d.end(); d1++)
	{
		cout << *d1 << " ";
	}
	cout << endl;
}
void test()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printfDeque(d1);

	deque<int>d2(d1);
	printfDeque(d2);

	deque<int>d3(10, 100);
	printfDeque(d3);

	deque<int>d4(d1.begin(), d1.end());
	printfDeque(d4);



}
int main()
{
	test();
	return 0;
}