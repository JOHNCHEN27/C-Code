//#include"test.hpp"
//#include<iostream>
//void printftest(sort<int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//void test()
//{
//	sort <int> s(5);
//	/*sort<int>  s1(s);*/
//	for (int i = 0; i < 10; i++)
//	{
//		s.Push_sort(i);
//	}
//	//��ӡs�������ֵ
//	printftest(s);
//	cout << s.getCapacity()<< endl;
//
//	s.Pop_sort();
//	cout << "βɾ���size �� " << s.getSize() << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//����������װ �ֱ�����žų˷����ϡ���������
//#include<iostream>
//using namespace std;
//void FMul(int& i, int& j)
//{
//	for (i = 1; i < 6; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << " = " << i * j << "  ";
//		}
//		cout << endl;
//	}
//}
//void LMul(int& i, int& j)
//{
//	for (int i = 6; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << " = " << i * j << "  ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	FMul(i, j);
//	cout << endl;
//	LMul(i, j);
//	return 0;
//}
//
//
////һ�δ���ʵ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << " * " << i << " = " << i * j << " ";
//		}
//		cout << endl;
//		if (i == 5)
//		{
//			cout << endl;
//		}
//	}
//	return 0;
//}


//������������ĸ���λ������n = 123456 �����654321
//#include<iostream>
//using namespace std;
//void printfReverse(int n)
//{
//	int sum;
//	while (n != 0)
//	{
//		sum = n % 10;
//		n /= 10;
//		cout << sum << " ";
//	}
//}
//int main()
//{
//	int n =0;
//	cout << "������һ�������� " << endl;
//	cin >> n;
//	printfReverse(n);
//	system("pause");
//	return 0;
//}

//�õݹ��ж�һ�����������Ƿ�������

//�ݹ麯����ʵ��
//bool ������һ���ж���ٵ����ͣ����ķ���ֵֻ�����٣� trueΪ�棬false Ϊ�٣�����0�ͷ��������棬  
//0��ʾΪ�٣���������ʾΪ��
//bool IsAscend(int arr[], int len)
//{
//	if (len == 1)
//	{
//		return true; //����д�� return 1��
//	}
//	if (arr[len - 2] > arr[len - 1])
//	{
//		return false;  //����д��return 0
//	}
//	else
//		IsAscend(arr, len - 1); //�ݹ������������ж������Ƿ���������
//}
////int main()
////{
////	int arr[5] ;
////	int len = sizeof(arr) / sizeof(int);
////	cout << "�����������е�Ԫ��: " << endl;
//// 	for (int i = 0; i < len; i++)
////	{
////		cin >> arr[i];
////	}
////	//�ݹ麯������
////	bool ret = IsAscend(arr, len); // ��һ��bool���͵��������ܵݹ麯�����صĽ��
////	if(ret ) //������ص�����ֵ��ӡ����
////		{
////			cout << "������������������" << endl;
////			printfarr(arr, len);  //��ӡ����
////		}
////	else
////	{
////		cout << "�������鲻����������" << endl;
////		printfarr(arr, len); 
////	}
////	system("pause");
////	return 0;
////}
//
//
////�ݹ����99�˷���
//#include<iostream>
//using namespace std;
//void digui(int i, int j)
//{
//	if (i <= 9)
//	{
//		if (j <= i)
//		{
//			cout << j << " * " << i << " = " << j * i << " ";
//			digui(i, j + 1);
//		}
//		
//		cout << endl;
//		
//		
//	}
//	j = 1;
//	digui(i + 1, j);
//
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	digui(i, j);
//	system("pause");
//	return 0;
//}