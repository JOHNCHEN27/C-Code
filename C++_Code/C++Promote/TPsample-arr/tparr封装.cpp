//#include<iostream>
//#include<string>
//using namespace  std;
//#include"tparr.hpp"
//void printfarr(Myarray<int> &m1)
//{
//	for (int i = 0; i <m1.getSize(); i++)
//	{
//		cout << m1[i] << endl;
//	}
//}
////void test()
////{
////	Myarray<int> m1(5);
////	for (int i = 0; i < 5; i++)
////	{
////		m1.Push_Back(i);
////	}
////	cout << "打印数组中的元素 " << endl;
////	printfarr(m1);
////	/*Myarray<int> m2(m1);
////	Myarray<int> m3(100);
////	m3 = m2;*/
////	cout << "容量： " << m1.getCapacity() << endl;
////	cout << "大小： " << m1.getSize() << endl;
////
////	Myarray<int> m2(m1);
////	printfarr(m2);
////	cout << "容量： " << m2.getCapacity() << endl;
////	cout << "大小： " << m2.getSize() << endl;
////
////	m2.Pop_Back();
////	cout << "尾删之后m2的容量：   " << m2.getCapacity() << endl;
////	cout << "尾删之后m2的大小：   " << m2.getSize() << endl;
////} 
//class Person
//{
//public:
//	Person() {  };
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//void printfarr1(Myarray<Person>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i].m_Name << endl;
//	}
//}
//void test02()
//{
//	Myarray<Person> p(10);
//	Person p1("孙悟空", 999);
//	Person p2("赵云", 18);
//	Person p3("诸葛亮", 20);
//	Person p4("貂蝉", 18);
//
//	p.Push_Back(p1);
//	p.Push_Back(p2);
//	p.Push_Back(p3);
//	p.Push_Back(p4);
//
//	//dayin
//	printfarr1(p);
//
//
//}
//int main()
//{
//	//test();
//	test02();
//	return 0;
//}