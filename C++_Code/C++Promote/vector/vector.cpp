//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm> 
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//int main()
//{
//	vector<int> v;  //ʹ��vector������Ҫ����ͷ�ļ� 
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ͨ����������������������
//	vector<int> ::iterator itBegin = v.begin(); // ��ʼ��������ָ�������еĵ�һ��Ԫ��
//	vector<int> ::iterator itEnd = v.end(); // ������������ָ�������е����һ��Ԫ��
//
//	//��һ�ֱ�����ʽ
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//�ڶ��ֱ�����ʽ
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	
//	//�����ֱ�����ʽ������STL�������
//	for_each(v.begin(), v.end(), myPrint);
//	return 0;
//}
//

//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
////vector��������Զ�����������
//class Person
//{
//public:
//	Person(string n, int a)
//	{
//		m_Name = n;
//		m_age = a;
//	}
//	string m_Name;
//	int m_age;
//};
//void test()
//{
//	vector <Person> v; //����һ��vector����
//	Person p1("a", 20);
//	Person p2("b", 30);
//	Person p3("c", 40);
//	Person p4("d", 20);
//	Person p5("e", 50);
//
//	//β�巨���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//forѭ�����
//	for (vector <Person> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������ " << it->m_Name << "���䣺 " << it->m_age << endl;
//		//it������һ��ָ�� ��ָ��Person
//		cout << (*it).m_Name << " " << (*it).m_age << endl;
//		//(*it) �Ե��������н�����֮�󣬾ͽ����ó�Ϊ��Person �������ͣ� ����ֱ��ʹ��
//
//	}
//
//}
//void test01()
//{
//	//vector�����е�������Person ָ�����ͣ������������в���������Ҫ�����ݵĵ�ַ���ݹ�ȥ��ָ�����
//	vector <Person*> v; //����һ��vector����
//	Person p1("a", 20);
//	Person p2("b", 30);
//	Person p3("c", 40);
//	Person p4("d", 20);
//	Person p5("e", 50);
//
//	//β�巨���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*> ::iterator a = v.begin(); a != v.end(); a++)
//	{
//		cout << (*a)->m_Name << " " << (*a)->m_age << endl;
//		//�Ե�����a������֮�� ��*a�� = Person* 
//	
//	}
//}
//int main()
//{
//	//test();
//	test01();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
////����Ƕ��
//void test()
//{
//	//����һ��С����
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	//forѭ��β�巨��С�������������
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//		
//	}
//	//����һ�������� ���С����
//	vector<vector<int>> v;
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//forѭ������������е�����
//	for (vector<vector<int>> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//�����С�����е�����
//		for (vector<int> ::iterator vit = (*it).begin();vit != (*it).end(); vit++)
//		{
//			cout << (*vit) << " ";
//		}
//		cout << endl;
//	}
//
//}
//int main()
//{
//	test();
//	return 0;
//}

////string���캯��
//#include<iostream>
//using namespace std;
//void test()
//{
//	string s1; // Ĭ�Ϲ���
//	const char* str= "avs";
//	string s2(str);
//	cout << s2 << endl;
//
//	string s3(s2); //������������
//	cout << s3 << endl;
//
//	string s4(10, 'a'); //��ʾ��s4�ַ��� ����10��a
//	cout << s4 << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//string ��ֵ����
//#include<iostream>
//using namespace std;
//int main()
//{
//	string s1;
//	s1 = "hello C++";
//	cout << s1 << endl;
//	string s2 = s1;
//	cout << s2 << endl;
//
//	string s3;
//	s3 = 'a';
//	cout << s3 << endl;
//
//	string s4;
//	s4.assign("hello world");
//	cout << s4 << endl;
//	string s5;
//	s5.assign("hello world", 5); // ��ʾֻ�������ַ������ַ���s5��
//	cout << s5 << endl;
//
//	string s6;
//	s6.assign(s5);
//	cout << s6 << endl;
//
//	string s7;
//	s7.assign(10, 'c');
//	cout << s7 << endl;
//
//
//
//	return 0;
//}

//�ַ�����ƴ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	string s1 = "I";
//	s1 += "  Love";
//	cout << s1 << endl;
//	string s2 = "  LOL DNF";
//	s1 += s2;
//	cout << s1 << endl;
//	string s3;
//	s3 = ';';
//	s1 += s3;
//	cout << s1 << endl;
//	
//	string s4 = " I ";
//	s4.append(" love  you ");
//	cout << s4 << endl;
//
//	s4.append("game wzry", 4); //��ʾֻ��ȡǰ��4���ַ�
//	cout << s4 << endl;
//	s4.append(s2);
//	cout << s4 << endl;
//	
//	s4.append(s2, 0, 4); // ��ʾ��s2�ַ����еĵ�һ��λ�ÿ�ʼ����ȡ4���ַ�
//	cout << s4 << endl;
//		return 0;
//}

// �ַ����Ĳ��Һ��滻
//#include<iostream>
//using namespace std;
//void test()
//{
//	string str = "abcdcd";
//
//	int pot = str.find("cd");  // �ҵ����ַ����ͷ��ظ��ַ�����һ���ַ��������е��±꣬�±��0��ʼ
//	//δ�ҵ��ͷ��� -1��
//	if (pot != -1)
//	{
//		cout << "�ҵ����ַ�����pot = " << pot << endl;
//	}
//	else
//	{
//		cout << "û�в��ҵ����ַ���" << endl;
//	}
//
//	pot = str.rfind("cd");
//	cout << pot << endl;
//	//find��rfind�����𣺶��Ǵ���������������find�Ǵ������Ҳ��ң���rfind�Ǵ����������
//
//}
//void test01()
//{
//	string str1 = "qwert";
//	str1.replace(1, 3, "1111"); //��ʾ���ַ����±�Ϊ1���ַ���ʼ�������λ���滻��ָ��������
//	cout << str1 << endl;
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//�ַ����ıȽ�
//#include<iostream>
//using namespace std;
//void test()
//{
//	string str1 = "hello";
//	string str2 = "hello";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 == str2" << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//void test()
//{
//	string str = "hello";
//	//ͨ���±����[]
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//   //ͨ��at����
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " " ;
//	}
//	cout << endl;
//
//	//�޸ĵ����ַ�
//	str[0] = 'a';
//	cout << str << endl;
//
//	//at�޸��ַ�
//	str.at(1) = 'a';
//	cout << str << endl;
//
//	
//}
//int main()
//{
//	test();
//	return 0;
//}

//�ַ����Ĳ����ɾ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	string str = "hello";
//	str.insert(1, "111"); //���±�Ϊ1��Ԫ�غ������ָ��Ԫ��
//	cout << str << endl;
//
//	str.erase(1, 3);
//	//���±�Ϊ1��Ԫ�ؿ�ʼ��ɾ������Ԫ��
//	cout << str << endl;
//	return 0;
//}

//�Ӵ��Ľ�ȡ
//#include<iostream>
//using namespace std;
//#include<string>
//void test()
//{
//	string str1 = "hello";
//	string str11 = str1.substr(1, 3); //���ַ����±�Ϊ1���ַ���ʼ ��ȡ�����ַ�
//	cout << str11 << endl;
//
//	string str2 = "hello@11.com";
//	int pos = str2.find("@");
//	string username = str2.substr(0, pos); // ���±�Ϊ0 ��λ�ÿ�ʼ��ȡ����Ϊpos���ַ�
//	cout << username << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//vector���� 

//#include<iostream>
//using namespace std;
//#include<vector>
//void printfvector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << (*v1) << "  " ;
//	}
//	cout << endl;
//}
//int main()
//{
//	vector<int>v1;  //Ĭ�Ϻ�������
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfvector(v1);
//
//	vector<int>v2(v1.begin(), v1.end());  //�������乹��
//	printfvector(v2);
//
//	vector<int>v3(v2);  //��������
//	printfvector(v3); //
//
//	vector<int>v4(10, 100); //n��Ԫ�صĹ��죬��ʾ��ʶ��10��100����
//	printfvector(v4);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
////vector  operator = 
//#include<vector>
//void printfVector(vector<int>& v)
//{
//	for (vector<int>::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << (*v1) << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfVector(v1);
//	//������ֵ
//	vector<int> v2;
//	v2 = v1;
//	printfVector(v2);
//
//	//assign���丳ֵ
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printfVector(v3);
//
//	//assign n��Ԫ�ظ�ֵ
//	vector<int> v4;
//	v4.assign(10, 200); // ��ֵ10�� 200��Ԫ��
//	printfVector(v4);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//vector���� �����ʹ�С
//#include<iostream>
//using namespace std;
//#include<vector>
//void printfVector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfVector(v1);
//	if (v1.empty())
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ : " << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ�� " << v1.size() << endl;
//	}
//	v1.resize(15);  //resize����ָ��������С�����С����ԭ���Ĵ�С
//	//��ʣ�³����Ĳ��� ��û��Ĭ��ֵ������0��䣬��Ĭ��ֵ��Ĭ��ֵ���
//	printfVector(v1);
//
//	v1.resize(5);
//	printfVector(v1); // �������ָ���Ĵ�СС��ԭ����С����ɾ�������Ĳ���
//	
//}
//int main()
//{
//	test();
//	return 0;
//}

//vector�����Ĳ����ɾ��
//#include<iostream>
//using namespace std;
//#include<vector>
//void  printfVector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);  //β�巨����β����������
//	printfVector(v1);
//
//	//βɾ��
//	v1.pop_back(); //��β��ɾ������
//	printfVector(v1);
//
//	//���뷨
//	v1.insert(v1.begin(), 2); //�ӵ������Ŀ�ʼ����һ������2
//	printfVector(v1);
//	v1.insert(v1.begin(), 2, 100); // �ӵ������Ŀ�ʼ������������ 100
//	printfVector(v1); 
//
//	//ɾ����
//	v1.erase(v1.begin()); //�ӵ������Ŀ�ʼɾ��һ��Ԫ��
//	printfVector(v1);
//	v1.erase(v1.begin(), v1.end()); //�ӵ�������ʼ����������ɾ��Ԫ��
//	printfVector(v1);
//
//	//���
//	v1.clear();
//	printfVector(v1);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//vector���������ݴ�ȡ
//#include<iostream>
//using namespace std;
//#include<vector>
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//ͨ��[]����Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//ͨ��at����
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "v1�����еĵ�һ��Ԫ���ǣ� " << v1.front() << endl;
//	cout << "v1�����е����һ��Ԫ����: " << v1.back() << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//vector��������
//#include<iostream>
//using namespace std;
//#include<vector>
//void printfVector(vector<int>& v)
//{
//	for (vector<int> ::iterator v1 = v.begin(); v1 != v.end(); v1++)
//	{
//		cout << *v1 << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
// 	}
//	printfVector(v1);
//	vector <int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printfVector(v2);
//	cout << "����֮�� " << endl;
//	v1.swap(v2);
//	printfVector(v1);
//	printfVector(v2);
//}
//void test01()
//{
//	//ʵ����;�����ռ�
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������Ϊ�� " << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ�� " << v.size() << endl;
//
//	v.resize(5);
//	cout << "v������Ϊ�� " << v.capacity() << endl;  //������ָ����Сʱ����������û�б仯
//	cout << "v�Ĵ�СΪ�� " << v.size() << endl;
//
//	//ͨ��swap������ѹ���ڴ�
//	vector<int>(v).swap(v); //vector<int>(v) �������󣬰�v���µ����Ĵ�С��ʼ�����������������С��
//	//Ȼ�����������������v����������������v�ͱ�������µ�����С֮�������������������Ĵ�С��
//	//�ڱ��н���֮���ͷŵ��� �Ӷ�ʵ���ڴ�ѹ��
//	cout << "v������Ϊ�� " << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ�� " << v.size() << endl;
//}
//int main()
//{
//	test();
//	test01();
//	system("pause");
//	return 0;
//}

//Ԥ���ռ�
//#include<iostream>
//#include<vector>
//using namespace std;
//void test()
//{
//	vector<int>v;
//	int num = 0;
//	int* p = NULL;
//	//����reverseԤ���ռ�
//	v.reserve(100000);
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << num << endl; 
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<iostream>
using namespace std;
#include<deque>
void printfDeque(const deque<int>& d)  //const�������� �����ε����� ��ֹ�������д������
{
	for (deque<int> ::const_iterator d1 = d.begin(); d1 != d.end(); d1++)
	{
		cout << *d1 << " ";
	}
	cout << endl;
}
void test()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printfDeque(d1);

	deque<int>d2(d1);
	printfDeque(d2);

	deque<int>d3(10, 100);
	printfDeque(d3);

	deque<int>d4(d1.begin(), d1.end());
	printfDeque(d4);



}
int main()
{
	test();
	return 0;
}