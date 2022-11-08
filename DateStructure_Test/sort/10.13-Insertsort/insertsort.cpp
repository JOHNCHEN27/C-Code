//#include<iostream>
//using namespace std;
//void swap(int arr[], int len)
//{
//	for (int i = 1; i < len; i++)
//	{
//		int temp = arr[i]; // 从第二个数开始比较 先保存这个数
//		if (arr[i] < arr[i - 1]) //如果前面一个数大于这个数，则将这两个数交换位置
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
//	cout << "字符串s的大小为： " << s.size() << endl;
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
	//创建一个通讯录
	tele t;
	t.arr = NULL;
	t.size = 0;
	cout << "菜单选项" << endl;
	bool ret = true;
	while (ret)
	{
		ShowMenu();
		int select;
		cout << "请输入你的选择" << endl;
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
			cout << "退出通讯录" << endl;
			ret = false;
			break;


		}
	}
	system("pause");
	return 0;
}