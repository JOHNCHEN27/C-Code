//#include<iostream>
//using namespace std;
//template <typename T> //template����һ��ģ�壬���������ֵ�T��һ��ͨ�õ���������
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
//	myswap(c1, c2); //�Զ������Ƶ��������Ƶ���һֱ���������ͷ��򲻿���ʹ��
//	//������ʽ����ת��
//	cout << c1 << " " << c2 << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
////����ģ��ʵ���������
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
//	cout << "����ģ��fun�ĵ���" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	myswap(a, b);
//	cout << a << " " << b << endl;
//	char c = 'c';
//
//	//myswap(a, c); //�����Զ������Ƶ������Ƶ�����������һ�µĺ�������Ȼ������ʹ��
//	fun<int>(); //����ģ���ʹ�ñ������T���������ͣ���Ȼ������ʹ��
//	return 0;
//}

//���� ����ģ���װѡ������ �Ӵ�С��
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
//		int max = i; // �������ֵ�ǵ�һ��Ԫ���±�
//		for (int j = i + 1; j < len; j++) //�����ֵ��ʣ�µ�Ԫ�ؽ��бȽ�
//			//���ҵ����ڵ�ǰ���ֵ�ģ����Ԫ���±긳ֵ��д��ֵ��Max
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		//�ҳ�ʣ��Ԫ�����ֵ��ʱ���ٱȽ����һ��Ԫ�صĴ�С������������н���
//		if (arr[max] != arr[i])
//		{
//			//���ú���ģ����ʵ�ֽ���
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
//	//����ģ���װ���������ѡ������
//	int len = sizeof(arr1) / sizeof(char);
//	mysort(arr1, len);
//	//����ģ���ӡ
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
//	cout << "��ͨ�����ĵ���" << endl;
//}
//template <typename T>
//void fun(T a, T b)
//{
//	cout << "����ģ��ĵ���" << endl;
//}
//template<typename T>
//void fun(T a, T b, T c)
//{
//	cout << "�������ص�ģ�����" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	fun(a, b); //����ͨ�����ͺ���ģ�嶼��ʵ��ʱ�����ȵ�����ͨ����
//	fun<>(a, b);//���ÿպ��������б����ǿ�Ƶ��ú���ģ��
//	fun(a, b, 100); // ����ģ����Է�������
//
//	char c1 = 'c';
//	char c2 = 'b';
//	fun(c1, c2);//������ģ���и��õ�ƥ�䣬���ȵ��ú���ģ��
//
//	return 0;
//}

//���ں���ģ�����ʽת��
//#include<iostream>
////��ͨ�����Զ���������ת������ʽ����ת����
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
//	//fun1(a, c); // ����ģ�����ʱ�����Զ������Ƶ�����ʵ����ʽ����ת��
//	cout << fun1<int>(a, c) << endl;;// ������ʾָ�����Ϳ���ʵ����ʽ����ת��
//
//	//�Ƽ�ʹ����ʾָ�����������ú���ģ�壬��Ϊ�����Լ�ָ��T����������
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
//template<typename T> //����һ�����廯����ģ����ʵ���ض����͵ıȽ�
//bool mycompare(T& p, T& p2); //��д����ģ��ͺ������������������廯ָ����������
//template<> bool mycompare(Person& p, Person& p2) //����template <>��ʾ�Ǻ���ģ���
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
//	Person p1("����", 18);
//	Person p2("lisi", 19);
//	int ret = mycompare(p1, p2);  //ģ�岻�����ܵģ������ض����������ͱ�����廯ʵ��
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
//		cout << "a ��= b " << endl;
//
//	test();
//
//	return 0;
//}