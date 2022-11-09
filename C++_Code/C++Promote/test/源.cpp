//#include<stdio.h>
//#define N  5
//int main()
//{
//	int a[N] = { 11,23,42,20,6 };
//	int i = 0, min;
//	min = a[0];
//	for (i = 0; i < N; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//			printf("最小值为：%d\n", min);
//		}
//	}
//}
//getch();

#include <iostream>
using namespace std;
#include<string>
#include<deque>
class Person
{
public:
    Person(string n)
    {
        m_name = n;
    }
    string m_name;
};
int main() {
    Person guest1("张三");
    Person guest2("李四");
    Person VIPguest("liu");

    deque<Person> q;
    q.push_back(guest1);
    q.push_back(guest2);
    q.push_front(VIPguest);
    for (deque<Person>::iterator d1 = q.begin(); d1 != q.end(); d1++)
    {
        cout << (*d1).m_name << " ";
    }
}