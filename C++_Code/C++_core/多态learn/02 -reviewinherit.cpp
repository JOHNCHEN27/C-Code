//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class son1 : public Base
//{
//public:
//	void test()
//	{
//		 m_A = 100;
//		 m_B = 200;
//	//	 m_C = 300; //���ɷ��� ���಻���Է��ʸ����е�˽�г�Ա
//	}
//};
//class son2 : protected Base
//{
//protected:
//	void test01()
//	{
//		m_A = 200;
//		m_B = 300;
//		//m_C = 300;
//	}
//};
//class son3 :private Base
//{
//private:
//	void test02()
//	{
//		m_A = 300;
//		m_B = 300;
//		//m_C //
//	}
//};
//void test()
//{
//	son1 s1;
//	s1.m_A = 100;
//}
//void test01()
//{
//	son2 s2;
//	//s2.m_A;
//	//s2.m_B;
//}
//int main()
//{
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Base1
//{
//private:
//	int m_A;
//};
//class Base2
//{
//private:
//	int m_A;
//};
//class son : public Base1, public Base2
//{
//public:
//	son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//void test()
//{
//	son s;
//	cout << sizeof(s) << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

////ͬ����Ա����
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	void test01()
//	{
//		cout << "Base ͬ����Ա�����ĵ���" << endl;
//	}
//	static void test02()
//	{
//		cout << "Base  static ͬ����Ա�����ĵ���" << endl;
//	}
//	void test01(int a)
//	{
//		cout << "Base int ͬ����Ա�����ĵ���" << endl;
//	}
//	int m_A;
//	static int m_B;
//};
//class son : public Base
//{
//public:
//	int m_A;
//	static int m_B;
//	void test01()
//	{
//		cout << "son ͬ����Ա�����ĵ���" << endl;
//	}
//	static void test02()
//	{
//		cout << "son  static ͬ����Ա�����ĵ���" << endl;
//	}
//};
//void test()
//{
//	son s;
//	//ͨ���������
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//	cout << s.m_B << endl;
//	cout << s.Base::m_B << endl;
//
//	//ͨ����������
//	s.test01();
//	s.Base:: test01();
//	s.test02();
//	s.Base::test02;
//	s.Base::test01(100);
//
//	//ͨ��������������ʸ����������µĺ���
//	son::Base::m_B;
//	son::Base::test02();
//}
//int main()
//{
//	test();
//	return 0;
//}

