//#include<iostream>
//#include<string>
//using namespace std;
//class myadd   //��������������һ���࣬���Ǻ���
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;  //���ú����������ط� ���� ��Ϊ�º����� ���������Ķ���Ϊ��������
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
//	cout << a(10, 20) << endl;   // ���������������ͨ�����������ã������в��������з���ֵ
//	
//	myprintf b; 
//	cout << b.count << endl; // ��������������Լ���״̬ �����Լ��ĳ�Ա
//
//	printf(b, "hello c++"); //  ���������������������
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}


//ν��
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class va
//{
//public:
//    bool operator()(int val)
//    {
//        return val > 5; //ν�� ���º�����������Ϊbool�ĳ�Ϊν�� һԪν��Ϊ����һ������
//    }
//};
//void test()
//{
//    vector<int>v;
//    for (int i = 0; i < 10; i++)
//    {
//        v.push_back(i);
//    }
//    //����find_if�㷨������ֵ����Ҫ����ͷ�ļ� algorithm ���ص���һ��������
//    //va������һ����������
//   vector<int> :: iterator v1 =   find_if(v.begin(), v. end(), va());
//   if (v1 != v.end())
//   {
//       cout << "���ҳɹ��� " << *v1 << endl;
//   }
//   else
//   {
//       cout << "����ʧ��" << endl;
//   }
//}
//int main()
//{
//    test();
//    return 0;
//}

//�ڽ���������
//�����º�������ϵ�º������߼��º���  �� ʹ����Щ �º�����Ҫ����ͷ�ļ� functional
//#include<iostream>
//using namespace std;
//#include<functional>
//#include<vector>
//#include<algorithm>
//void test()
//{
//	//�����º���
//	plus<int> p;
//	cout << p(10, 20) << endl; // plus �ӷ��º���
//
//	minus<int> m;
//	cout << m(10, 5) << endl; // minus �����º���
//
//	multiplies<int> mp;
//	cout << mp(10, 2) << endl;  // multiplies �˷��º���
//
//	negate<int> n;
//	cout << n(10) << endl; // negate ȡ���º���
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
//	cout << "greater�����: --------------" << endl;
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

//STL�еı����㷨
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

	//for_each��ͨ����������
	for_each(v.begin(), v.end(), printf01);
	cout << endl;
	//for_each�º�������
	for_each(v.begin(), v.end(), printf02());  //����printf02������һ����������

	//��ͨ�����ͷº������������ǣ� ��ͨ����ֻ��Ҫ���Ϻ����������º�����Ҫ����

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