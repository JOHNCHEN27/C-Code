//#include<iostream>
//using namespace std;
//void swap(int arr[], int len)
//{
//	for (int i = 1; i < len; i++)
//	{
//		int temp = arr[i]; // �ӵڶ�������ʼ�Ƚ� �ȱ��������
//		if (arr[i] < arr[i - 1]) //���ǰ��һ�����������������������������λ��
//		{
//			int j;
//			for ( j = i - 1; j >= 0 && arr[j] > temp; j--)
//			{
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = temp;
//		}
//	}
//}
//void test()
//{
//	int arr[] = { 1,4,6,2,7,3,8,5 };
//	int len = sizeof(arr) / sizeof(int);
//	swap(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<string>
//void test()
//{
//	string s;
//	cin >> s;
//	cout << "�ַ���s�Ĵ�СΪ�� " << s.size() << endl;
//}
//void test01()
//{
//	string s;
//	cin >> s;
//	int count = 0;
//	while (cin >>  s)
//	{
//		count++;
//		cout << s << endl;
//		cout << count << endl;
//	}
//}
//int main()
//{
//	//test();
//	test01();
//	return 0;
// }

#include"tele.h"
int main()
{
	//����һ��ͨѶ¼
	tele t;
	t.arr = NULL;
	t.size = 0;
	cout << "�˵�ѡ��" << endl;
	bool ret = true;
	while (ret)
	{
		ShowMenu();
		int select;
		cout << "���������ѡ��" << endl;
		cin >> select;
		switch (select)
		{
		case 1:

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "�˳�ͨѶ¼" << endl;
			ret = false;
			break;


		}
	}
	system("pause");
	return 0;
}