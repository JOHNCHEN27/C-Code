//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//class myprintf
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
////void test()
////{
////	vector<int> v1;
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////	}
////
////	vector<int> v2;
////	v2.resize(v1.size());
////
////	copy(v1.begin(), v1.end(), v2.begin());
////	for_each(v2.begin(), v2.end(), myprintf());
////
////}
//void vprintf(int val)
//{
//	cout << val << " ";
//}
//class lt20
//{
//public:
//	bool operator()(int val)
//	{
//		return val < 20;
//	}
//};
//void test01()
//{
//	//replace替换， 将容器中的元素替换成指定元素
//	vector<int> v1;
//	v1.push_back(20);
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(22);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(50);
//	v1.push_back(20);
//
//	replace(v1.begin(), v1.end(), 20, 200);
//	for_each(v1.begin(), v1.end(), myprintf());
//	cout << endl;
//	cout << "replace_if指定条件替换" << endl;
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(10);
//	v2.push_back(10);
//	v2.push_back(130);
//	v2.push_back(10);
//	v2.push_back(10);
//	v2.push_back(20);
//	v2.push_back(10);
//
//	replace_if(v2.begin(), v2.end(), lt20(), 100);
//	for_each(v2.begin(), v2.end(), myprintf());
//
//
//}
//
//void test02()
//{
//	//swap交换容器
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), myprintf());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myprintf());
//
//}
//int main()
//{
//	//test();
//	//test01();
//	test02();
//	return 0;
//}

//常用算术生成算法
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<numeric>
//#include<algorithm>
//void myprintf(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	//accumulate计算容器元素累积总和 返回一个数
//	vector<int> v1;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i);
//	}
//	int total = accumulate(v1.begin(), v1.end(), 0);  // 参数3是起始累加值 一般设为0
//
//	cout << "v1容器累加之和是： " << total << endl;
//}
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "填充前： " << endl;
//	for_each(v.begin(), v.end(), myprintf);
//	cout << endl; 
//	cout << "填充后： " << endl;
//
//	fill(v.begin(), v.end(), 10); //将v容器区间全部填充为10
//	for_each(v.begin(), v.end(), myprintf);
//
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//常用的集合算法
//ser_intersection 、 set_union 、 set_difference ;都必须是有序序列 返回的都是交、并、差最后一个元素的
//迭代器位置
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myprintf(int val)
{
	cout << val << " ";
}
//void test()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i); // 0- 9
//		v2.push_back(i + 5); // 5-14
//	}
//
//	vector<int> v3; //将两个容器的结构存放到v3目标容器中
//	//需要给目标容器开辟空间 因为求的是交集， 考虑最特殊的情况就是 一个容器包含另一个容器
//	//此时只需将开辟小的那个容器的空间大小给目标容器
//	v3.resize(min(v1.size(), v2.size()));
//
//	vector<int >::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	//set_intersection 返回的都是结果中最后一个元素的迭代器位置
//	for_each(v3.begin(), itEnd, myprintf); // 这里遍历结束用itEnd迭代器，因为itEnd迭代器是交集中最后一个元素的
//	//迭代器， 只需要把这些交集的元素打印出来就行， 如果是v3.end 会把剩下多余的空间中的元素也打印出来
//
//}
void test02()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//set_union求并集 考虑最特殊的情况是， 两个容器都不相加，这个时候开辟空间大小为两个容器的大小
	vector<int> v3;
	v3.resize(v1.size() + v2.size());

	vector<int> ::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), itEnd, myprintf);
}
void test03()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v3; 
	v3.resize(max(v1.size(), v2.size())); // 最特殊的情况两个都不相交  开辟最大的一个空间
	cout << "v1和 v2的差 " << endl;
	vector<int> ::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), itEnd, myprintf);
	cout << endl;
	cout << "v2和v1的差 " << endl;
	vector<int> ::iterator itEnd1 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());
	for_each(v3.begin(), itEnd1, myprintf);
}
int main()
{
	//test();
	//test02();
	test03();
	return 0;
}