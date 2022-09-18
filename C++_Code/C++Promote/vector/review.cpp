//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//void myprint(int val)
//{
//	cout << val << endl;
//}
//
//void test()
//{
//	vector<int> v; //vector容器使用 需要包含头文件，vector容器可以看成是一个数组，创建了一个v对象
//	v.push_back(10);//尾插法向容器种插入数组
//	v.push_back(20);
//	v.push_back(30);
//
//	//通过迭代器访问数据中的容器 : vector<int> :: iterator 迭代器
//	vector<int> ::iterator itBegin = v.begin();//起始迭代器，指向容器中的第一个元素
//	vector<int> ::iterator itEnd = v.end(); //结束迭代器，指向容器中的最后一个元素
//
//	//while循环访问容器中数据
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	cout << endl;
//
//	//通过for循环访问容器中的数据
//	for (vector<int> ::iterator t = v.begin(); t != v.end(); t++)
//	{
//		cout << *t << endl;
//	}
//
//	cout << endl;
//
//	//通过for_each算法来访问容器中的内容  需要包含算法头文件 algorithm
//	for_each(v.begin(), v.end(), myprint);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}