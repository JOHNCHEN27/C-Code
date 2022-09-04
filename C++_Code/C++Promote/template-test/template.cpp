//#include<iostream>
//using namespace std;
//template <typename T> //template声明一个模板，后面代码出现的T是一个通用的数据类型
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	myswap(a, b);
//	cout << a << " " << b << endl;
//
//	char c1 = 'c';
//	char c2 = 'd';
//	myswap(c1, c2); //自动类型推导，必须推导出一直的数据类型否则不可以使用
//	//不能隐式类型转换
//	cout << c1 << " " << c2 << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
////函数模板实现两数相加
//template<typename T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template <class T>
//void fun()
//{
//	cout << "函数模板fun的调用" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	myswap(a, b);
//	cout << a << " " << b << endl;
//	char c = 'c';
//
//	//myswap(a, c); //利用自动类型推导必须推导出数据类型一致的函数，不然不可以使用
//	fun<int>(); //函数模板的使用必须给定T的数据类型，不然不可以使用
//	return 0;
//}

//案例 函数模板封装选择排序 从大到小排
//#include<iostream>
//using namespace std;
//template <typename T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template <class T>
//void mysort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; // 假设最大值是第一个元素下标
//		for (int j = i + 1; j < len; j++) //用最大值与剩下的元素进行比较
//			//若找到大于当前最大值的，则把元素下标赋值重写赋值给Max
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		//找出剩下元素最大值的时，再比较与第一个元素的大小，不等于则进行交换
//		if (arr[max] != arr[i])
//		{
//			//利用函数模板来实现交换
//			myswap(arr[max], arr[i]);
//		}
//	}
//}
//template<typename T>
//void printfmysort(T arr1, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//}
//int main()
//{
//	char arr1[] = "abcdsef";
//	//函数模板封装对数组进行选择排序
//	int len = sizeof(arr1) / sizeof(char);
//	mysort(arr1, len);
//	//函数模板打印
//	printfmysort(arr1, len);
//
//	cout << "--------------------" << endl;
//	int arr2[] = {2,5,22,57,3,52,4,1};
//	int len1 = sizeof(arr2) / sizeof(int);
//	mysort(arr2, len1);
//	printfmysort(arr2, len1);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void fun(int a, int b)
//{
//	cout << "普通函数的调用" << endl;
//}
//template <typename T>
//void fun(T a, T b)
//{
//	cout << "函数模板的调用" << endl;
//}
//template<typename T>
//void fun(T a, T b, T c)
//{
//	cout << "函数重载的模板调用" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	fun(a, b); //当普通函数和函数模板都能实现时，优先调用普通函数
//	fun<>(a, b);//利用空函数参数列表可以强制调用函数模板
//	fun(a, b, 100); // 函数模板可以发生重载
//
//	char c1 = 'c';
//	char c2 = 'b';
//	fun(c1, c2);//当函数模板有更好的匹配，优先调用函数模板
//
//	return 0;
//}

//关于函数模板的隐式转换
//#include<iostream>
////普通函数自动发生类型转换（隐式类型转换）
//int fun(int a, char c)
//{
//	return a + c;
//}
//template <typename T>
//T fun1(T a, T b)
//{
//	return a + b;
//}
//using namespace std;
//int main()
//{
//	int a = 10;
//	char c = 'c';
//	cout << fun(a, c) << endl;;
//	//fun1(a, c); // 函数模板调用时利用自动类型推导不能实现隐式类型转换
//	cout << fun1<int>(a, c) << endl;;// 利用显示指定类型可以实现隐式类型转换
//
//	//推荐使用显示指定类型来调用函数模板，因为可以自己指定T的数据类型
//
//
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//template <typename T>
//bool isSame(T a, T b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//class Person
//{
//public:
//	Person(string name,int  a)
//	{
//		m_name = name;
//		age = a;
//	}
//	string m_name;
//	int age;
//};
//template<typename T> //创建一个具体化函数模板来实现特定类型的比较
//bool mycompare(T& p, T& p2); //先写函数模板和函数的声明；再来具体化指定数据类型
//template<> bool mycompare(Person& p, Person& p2) //加上template <>表示是函数模板的
//{
//	if (p.m_name == p2.m_name && p.age == p2.age)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//void test()
//{
//	Person p1("张三", 18);
//	Person p2("lisi", 19);
//	int ret = mycompare(p1, p2);  //模板不是万能的，对于特定的数据类型必须具体化实现
//	if (ret)
//	{
//		cout << "p1 = p2" << endl;
//	}
//	else
//		cout << "p1 != p2" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = isSame(a, b);
//	if (ret)
//	{
//		cout << "a == b " << endl;
//	}
//	else
//		cout << "a ！= b " << endl;
//
//	test();
//
//	return 0;
//}