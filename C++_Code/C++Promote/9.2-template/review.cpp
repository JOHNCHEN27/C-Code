//#include<iostream>
//using namespace std;
//void swrap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////����ģ��
//template<typename T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<typename T>
//void fun()
//{
//	cout << "fun����ģ��ĵ���" << endl;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	swrap(a, b);
//	cout << a << " " << b << endl;
//
//	myswap(a, b);
//
//	char c = 'c';
//	//myswap(a, c);//�Զ������Ƶ�������Ҫ�Ƶ���һ�µ���������
//
//	//myswap<int>(a, c);
//	fun<int>();
//}
//int main()
//{
//	test();
//	return 0;
//
//}

#include<iostream>
using namespace std;
int myadd01(int a, int b)
{
	cout << "int " << endl;
	return a + b;
}
template<typename T>
T myadd01(T a, T b)
{
	cout << "char " << endl;
	return a + b;
}
void test()
{
	int a = 10;
	int b = 20;
	int c = 'c';
	cout << myadd01(a, c) << endl;
	cout << myadd01<>(a, c) << endl;

	char c1 = 'c';
	char c2 = 'd';
	cout << myadd01(c1, c2) << endl;


}
int main()
{
	test();
	return 0;
}