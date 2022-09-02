//#include<iostream>
//using namespace std;
//void swapint(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swapdouble(double& c, double& d)
//{
//	double temp = c;
//	c = d;
//	c = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swapint(a, b);
//	cout << a << "   " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	swapdouble(c, d);
//
//	cout << c << "   " << d << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//template<typename T>  //声明一个模板，告诉编译器后面代码的T是一个通用的数据类型                
//void myswap(T & a, T & b)  //typename 可以用class替代，原理都是一样的
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<class T>
//void fun()
//{
//	cout << "fun的调用" << endl;
//}
//
//void test()
//{
//	fun();  //不能直接调用模板， 必须确定T的数据类型才可以使用，
//	//尽管函数模板fun没有参数，但调用函数模板时必须确定一个数据类型T才可以使用
//	fun<int>(); //可以调用 利用了显示指定类型给定了一个数据类型
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//显示指定类型
//	myswap<int>(a, b);
//	cout << a << " " << b << endl;
//	//自动类型推导
//	myswap(a, b);
//	cout << a << " " << b << endl;
//
//	char c = 'c';
//	//myswap(a, c); //错误，自动类型推导必须推导出一致的数据类型，不然不可以使用
//
//	return 0;
//}

//案例数组
//#include<iostream>
//using namespace std;
////利用函数模板进行两个数交换
//template <typename T>
//void myswap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//
//}
////用函数模板实现数组的选择排序
//template <typename T>
//void mysort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; // 假设从数组的第一个数起是最大值
//		for (int j = i + 1; j < len; j++) //将max与剩下的数进行比较，找出数组中最大的数
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j; //如果数组max的值小于其他数，则把数组的下标进行交换
//				//一直到找到剩下的最大数
//			}
//		}
//		//一趟找出剩余数组的最大数之后，将其与第一个数进行交换
//		if (arr[max] != arr[i])
//		{
//			myswap(arr[max], arr[i]);
//		}
//	}
//}
//template<typename T>
//void printfsort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//void test()
//{
//	//char数组进行排序打印
//	char chararr[] = "cdbsae";
//	int len = sizeof(chararr) / sizeof(char);
//	mysort(chararr, len);
//	//打印排序后的数组
//	printfsort(chararr, len);
//
//}
//void test01()
//{
//	//int数组进行排序
//	int intarr[] = { 4,2,6,8,3,5,7,41 };
//	int len = sizeof(intarr) / sizeof(len);
//	mysort(intarr, len);
//	printfsort(intarr, len);
//}
//
//int main()
//{
//	test();
//	cout << endl;
//	test01();
//	return 0;
//}

//普通函数和函数模板的区别
//普通函数调用时可以发生自动类型转换，隐式类型转换
//函数模板调用时，如果使用自动类型推导，则不可以发生隐式类型转换
//如果用显示指定类型，则可以发生隐式类型转换
//#include<iostream>
//using namespace std;
////普通函数调用
//int myAdd01(int a, int c)
//{
//	return a + c;
//}
////函数模板调用
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd01(a, c) << endl;//可以发生自动类型转换（隐式类型转换）
//	//字符c 在ASCII码表中的数字 是99
//
//	//cout << myAdd02(a, c) << endl;// 函数模板调用时，自动类型推导不可以发生隐式
//	//类型转换
//	cout << myAdd02<int>(a, c) << endl;
//	//用显示指定类型 可以发生隐式类型转换，指定通用类型T为 int类型
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
////普通函数
//void myPrintf(int a, int b)
//{
//	cout << "普通函数的调用" << endl;
//}
////函数模板
//template <typename T>
//void myPrintf( T a ,T b)
//{
//	cout << "函数模板的调用" << endl;
//}
////重载函数模板
//template <typename T>
//void myPrintf(T a, T b, T c)
//{
//	cout << "重载函数模板的调用" << endl;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	myPrintf(a, b); //当普通函数和函数模板能都实现时，优先调用普通函数
//
//	myPrintf<>(a, b); //利用空模板参数列表可以强制调用函数模板，<>表明这是一个函数模板
//
//	//函数重载可以发生重载
//	myPrintf(a, b, 100);
//
//	//当函数模板可以产生更好的匹配，优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'c';
//	myPrintf(c1, c2); //优先调用函数模板，因为char类型， 如果用普通函数的话
//	//需要发生隐式类型转换， 而函数模板可以省掉这一步，更好匹配
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(string name, int a)
//	{
//		m_Name = name;
//		age = a;
//	}
//	string m_Name;
//	int age;
//};
//template<typename T>
//bool mycompare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//template<> bool mycompare(Person & a, Person& b)
//{
//	if (a.m_Name == b.m_Name && a.age == b.age)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = mycompare(a, b);
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//		cout << "a != b" << endl;
//
//}
//void test01()
//{
//	Person p1("zhangsan", 18);
//	Person p2("wangwu", 20);
//	bool ret = mycompare(p1, p2);
//	if (ret)
//	{
//		cout << " p1 == p2" << endl;
//	}
//	else
//		cout << "p1 != p2" << endl;
//
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//    Person(string name, int a)
//    {
//        m_Name = name;
//        age = a;
//    }
//    string m_Name;
//    int age;
//};
//template<typename T>
//bool mycompare(T& a, T& b);
//template<>bool mycompare(Person& p1, Person& p2)
//{
//    if (p1.m_Name == p2.m_Name && p1.age == p2.age)
//    {
//        return true;
//    }
//    else
//        return false;
//}
//void test()
//{
//    Person p1("zhangsan", 20);
//    Person p2("zhangsan", 19);
//    bool ret = mycompare(p1, p2);
//    if (ret)
//    {
//        cout << "p1 == p2" << endl;
//    }
//    else
//        cout << "p1 != p2" << endl;
//
//}
//int main()
//{
//    test();
//    return 0;
//}