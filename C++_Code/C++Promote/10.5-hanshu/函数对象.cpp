//#include<iostream>
//#include<string>
//using namespace std;
//class myadd   //函数对象本质上是一个类，不是函数
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;  //利用函数调用重载符 的类 称为仿函数， 创建出来的对象为函数对象
//	}
//};
//class myprintf
//{
//public:
//	myprintf()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count;
//
//};
//void printf(myprintf& a,string test)
//{
//	a(test);
//}
//void test()
//{
//	myadd a;
//	cout << a(10, 20) << endl;   // 函数对象可以像普通函数那样调用，可以有参数可以有返回值
//	
//	myprintf b; 
//	cout << b.count << endl; // 函数对象可以有自己的状态 调用自己的成员
//
//	printf(b, "hello c++"); //  函数对象可以做参数传递
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}


//谓词
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class va
//{
//public:
//    bool operator()(int val)
//    {
//        return val > 5; //谓词 ：仿函数返回类型为bool的称为谓词 一元谓词为接收一个参数
//    }
//};
//void test()
//{
//    vector<int>v;
//    for (int i = 0; i < 10; i++)
//    {
//        v.push_back(i);
//    }
//    //利用find_if算法来查找值，需要包含头文件 algorithm 返回的是一个迭代器
//    //va（）是一个匿名对象
//   vector<int> :: iterator v1 =   find_if(v.begin(), v. end(), va());
//   if (v1 != v.end())
//   {
//       cout << "查找成功： " << *v1 << endl;
//   }
//   else
//   {
//       cout << "查找失败" << endl;
//   }
//}
//int main()
//{
//    test();
//    return 0;
//}

//内建函数对象
//算术仿函数、关系仿函数、逻辑仿函数  ： 使用这些 仿函数需要包含头文件 functional
//#include<iostream>
//using namespace std;
//#include<functional>
//#include<vector>
//#include<algorithm>
//void test()
//{
//	//算术仿函数
//	plus<int> p;
//	cout << p(10, 20) << endl; // plus 加法仿函数
//
//	minus<int> m;
//	cout << m(10, 5) << endl; // minus 减法仿函数
//
//	multiplies<int> mp;
//	cout << mp(10, 2) << endl;  // multiplies 乘法仿函数
//
//	negate<int> n;
//	cout << n(10) << endl; // negate 取反仿函数
//
//
//}
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(2);
//	v.push_back(14);
//	v.push_back(23);
//	v.push_back(18);
//
//	
//	
//	sort(v.begin(), v.end());
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//	cout << endl;
//	cout << "greater排序后: --------------" << endl;
//
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//STL中的遍历算法
//for_each()
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void printf01(int val)
{
	cout<< val << " ";
}
class printf02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
class v11
{
public:
	int operator()(int val)
	{
		return val;
	}
};
void test()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//for_each普通函数遍历，
	for_each(v.begin(), v.end(), printf01);
	cout << endl;
	//for_each仿函数遍历
	for_each(v.begin(), v.end(), printf02());  //这里printf02（）是一个匿名对象

	//普通函数和仿函数遍历区别是： 普通函数只需要加上函数名，而仿函数需要对象

	vector<int> v1(v);
	transform(v.begin(), v.end(), v1.begin(), v11());
	cout << endl;
	for_each(v1.begin(), v1.end(), printf02());
}
int main()
{
	test();
	return 0;
}