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
//	//replace�滻�� �������е�Ԫ���滻��ָ��Ԫ��
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
//	cout << "replace_ifָ�������滻" << endl;
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
//	//swap��������
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

//�������������㷨
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
//	//accumulate��������Ԫ���ۻ��ܺ� ����һ����
//	vector<int> v1;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i);
//	}
//	int total = accumulate(v1.begin(), v1.end(), 0);  // ����3����ʼ�ۼ�ֵ һ����Ϊ0
//
//	cout << "v1�����ۼ�֮���ǣ� " << total << endl;
//}
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "���ǰ�� " << endl;
//	for_each(v.begin(), v.end(), myprintf);
//	cout << endl; 
//	cout << "���� " << endl;
//
//	fill(v.begin(), v.end(), 10); //��v��������ȫ�����Ϊ10
//	for_each(v.begin(), v.end(), myprintf);
//
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//���õļ����㷨
//ser_intersection �� set_union �� set_difference ;���������������� ���صĶ��ǽ������������һ��Ԫ�ص�
//������λ��
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
//	vector<int> v3; //�����������Ľṹ��ŵ�v3Ŀ��������
//	//��Ҫ��Ŀ���������ٿռ� ��Ϊ����ǽ����� ������������������ һ������������һ������
//	//��ʱֻ�轫����С���Ǹ������Ŀռ��С��Ŀ������
//	v3.resize(min(v1.size(), v2.size()));
//
//	vector<int >::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	//set_intersection ���صĶ��ǽ�������һ��Ԫ�صĵ�����λ��
//	for_each(v3.begin(), itEnd, myprintf); // �������������itEnd����������ΪitEnd�������ǽ��������һ��Ԫ�ص�
//	//�������� ֻ��Ҫ����Щ������Ԫ�ش�ӡ�������У� �����v3.end ���ʣ�¶���Ŀռ��е�Ԫ��Ҳ��ӡ����
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
	//set_union�󲢼� ���������������ǣ� ��������������ӣ����ʱ�򿪱ٿռ��СΪ���������Ĵ�С
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
	v3.resize(max(v1.size(), v2.size())); // �������������������ཻ  ��������һ���ռ�
	cout << "v1�� v2�Ĳ� " << endl;
	vector<int> ::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), itEnd, myprintf);
	cout << endl;
	cout << "v2��v1�Ĳ� " << endl;
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