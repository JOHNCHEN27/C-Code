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
//	vector<int> v; //vector����ʹ�� ��Ҫ����ͷ�ļ���vector�������Կ�����һ�����飬������һ��v����
//	v.push_back(10);//β�巨�������ֲ�������
//	v.push_back(20);
//	v.push_back(30);
//
//	//ͨ�����������������е����� : vector<int> :: iterator ������
//	vector<int> ::iterator itBegin = v.begin();//��ʼ��������ָ�������еĵ�һ��Ԫ��
//	vector<int> ::iterator itEnd = v.end(); //������������ָ�������е����һ��Ԫ��
//
//	//whileѭ����������������
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	cout << endl;
//
//	//ͨ��forѭ�����������е�����
//	for (vector<int> ::iterator t = v.begin(); t != v.end(); t++)
//	{
//		cout << *t << endl;
//	}
//
//	cout << endl;
//
//	//ͨ��for_each�㷨�����������е�����  ��Ҫ�����㷨ͷ�ļ� algorithm
//	for_each(v.begin(), v.end(), myprint);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}