//#include"test.hpp"
//#include<iostream>
//void printftest(sort<int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//void test()
//{
//	sort <int> s(5);
//	/*sort<int>  s1(s);*/
//	for (int i = 0; i < 10; i++)
//	{
//		s.Push_sort(i);
//	}
//	//打印s数组里的值
//	printftest(s);
//	cout << s.getCapacity()<< endl;
//
//	s.Pop_sort();
//	cout << "尾删后的size ： " << s.getSize() << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//两个函数封装 分别输出九九乘法表上、下两部分
//#include<iostream>
//using namespace std;
//void FMul(int& i, int& j)
//{
//	for (i = 1; i < 6; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << " = " << i * j << "  ";
//		}
//		cout << endl;
//	}
//}
//void LMul(int& i, int& j)
//{
//	for (int i = 6; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << " = " << i * j << "  ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	FMul(i, j);
//	cout << endl;
//	LMul(i, j);
//	return 0;
//}
//
//
////一段代码实现
//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << " * " << i << " = " << i * j << " ";
//		}
//		cout << endl;
//		if (i == 5)
//		{
//			cout << endl;
//		}
//	}
//	return 0;
//}


//逆序输出整数的各个位数，如n = 123456 请输出654321
//#include<iostream>
//using namespace std;
//void printfReverse(int n)
//{
//	int sum;
//	while (n != 0)
//	{
//		sum = n % 10;
//		n /= 10;
//		cout << sum << " ";
//	}
//}
//int main()
//{
//	int n =0;
//	cout << "请输入一个整数： " << endl;
//	cin >> n;
//	printfReverse(n);
//	system("pause");
//	return 0;
//}

//用递归判断一个整数数组是否是升序

//递归函数的实现
//bool 类型是一个判断真假的类型，它的返回值只有真或假， true为真，false 为假，或者0和非零数代替，  
//0表示为假，非零数表示为真
//bool IsAscend(int arr[], int len)
//{
//	if (len == 1)
//	{
//		return true; //可以写成 return 1；
//	}
//	if (arr[len - 2] > arr[len - 1])
//	{
//		return false;  //可以写成return 0
//	}
//	else
//		IsAscend(arr, len - 1); //递归调用自身继续判断数组是否满足条件
//}
////int main()
////{
////	int arr[5] ;
////	int len = sizeof(arr) / sizeof(int);
////	cout << "请输入数组中的元素: " << endl;
//// 	for (int i = 0; i < len; i++)
////	{
////		cin >> arr[i];
////	}
////	//递归函数调用
////	bool ret = IsAscend(arr, len); // 用一个bool类型的数来接受递归函数返回的结果
////	if(ret ) //如果返回的是真值打印数组
////		{
////			cout << "整型数组是升序序列" << endl;
////			printfarr(arr, len);  //打印数组
////		}
////	else
////	{
////		cout << "整型数组不是升序序列" << endl;
////		printfarr(arr, len); 
////	}
////	system("pause");
////	return 0;
////}
//
//
////递归输出99乘法表
//#include<iostream>
//using namespace std;
//void digui(int i, int j)
//{
//	if (i <= 9)
//	{
//		if (j <= i)
//		{
//			cout << j << " * " << i << " = " << j * i << " ";
//			digui(i, j + 1);
//		}
//		
//		cout << endl;
//		
//		
//	}
//	j = 1;
//	digui(i + 1, j);
//
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	digui(i, j);
//	system("pause");
//	return 0;
//}