//#include<iostream>
//using namespace std;
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.......(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ��������ġ�վ�ڵ���......������β����" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++......(���������б�) " << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.......(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ��������ġ�վ�ڵ���......������β����" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++......(���������б�) " << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.......(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ��������ġ�վ�ڵ���......������β����" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++......(���������б�) " << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//void test()
//{
//	CPP c;
//	cout << "C++������Ƶ�������£�" << endl;
//	c.header();
//	c.footer();
//	c.left();
//	c.content();
//	cout << "-----------------------" << endl;
//
//	Java j;
//	cout << "Java������Ƶ�������£�" << endl;
//	j.header();
//	j.footer();
//	j.left();
//	j.content();
//	cout << "-----------------------" << endl;
//
//	Python p;
//	cout << "Python������Ƶ�������£�" << endl;
//	p.header();
//	p.footer();
//	p.left();
//	p.content();
//	cout << "-----------------------" << endl;
//	
//}
//int main()
//{
//	 test();
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class BasePage
//{
//public:
//    void header()
//    {
//        cout << "��ҳ�������Ρ���¼��ע��......(����ͷ��) " << endl;
//    }
//    void footer()
//    {
//        cout << "�������ġ��������ġ�վ�ڵ���.......(�����ײ�)" << endl;
//    }
//    void left()
//    {
//        cout << "Java��C++��Python.......(�����б�" << endl;
//    }
//
//};
////�̳��﷨��class ���ࣨ�����ࣩ : �̳з�ʽ ���ࣨ���ࣩ
//class Java : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "Javaѧ����Ƶ" << endl;
//    }
//};
//class CPP : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "C++ѧ����Ƶ" << endl;
//    }
//};
//class Python : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "Pythonѧ����Ƶ" << endl;
//    }
//};
//void test()
//{
//    Java J;
//    J.header();
//    J.footer();
//    J.left();
//    J.content();
//    cout <<" -------------------- - "<< endl;
//    Python P;
//    P.header();
//    P.footer();
//    P.left();
//    P.content();
//    cout << "-------------------- -" << endl;
//    CPP C;
//    C.header();
//    C.footer();
//    C.left();
//    C.content();
//
//
//}
//int main()
//{
//    test();
//    system("pause");
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Base1
//{
//    friend class son2 ;
//public:
//    int m_A;
//protected:
//    int m_B;
//private:
//    int m_C;
//};
//class son1 : public Base1
//{
//public:
//    void test()
//    {
//        m_A = 100; //���Է��� �����еĹ�����Ա�������л��ǹ�����Ա
//        m_B = 200; //���Է��� �����б�����Ա�������е�Ȩ�޻��Ǳ���Ȩ��
//       // m_C = 100; //�����Է��ʣ����಻���Է��ʸ����е�˽�г�Ա
//    }
//};
//void test01()
//{
//    son1 s1;
//    s1.m_A = 200; //���Է��ʣ�����Ȩ����������Է���
//  //  s1.m_B = 300; //�����Է��ʣ�����Ȩ����������ʲ���
//}
//class son2 : protected Base1
//{
//    friend void test2();
//public:
//    void test()
//    {
//        m_A = 300; //�����г�˽��Ȩ�����⣬����Ȩ���������ж����˱���Ȩ��
//        m_B = 400;
//        m_C = 300;//���಻���Է��ʸ����˽��Ȩ��
//    }
//
//};
//void test2()
//{
//    son2 s2;
//    s2.m_A = 400; //�����Է���m_A ��Ϊm_A�������е�Ȩ���Ѿ�����˱���Ȩ�� ���ⲻ���Է���
//    s2.m_B = 500; //ͬ�������Է��� 
//
//}
//class son3 : private Base1
//{
//public:
//    void test()
//    {
//        m_A = 500;
//        m_B = 600;
//        m_C = 600; // ���಻���Է��ʸ����˽�г�Ա
//    }
//};
//void test03()
//{
//    son3 s3;
//    s3.m_A = 600; //�����Է��ʣ���Ϊm_A�������е�Ȩ�ޱ����˽��
//    s3.m_B = 800; //ͬ�������Է���
//
//}
//int main()
//{
//    return 0;
//}

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
//		m_A = 100;//�����еĹ�����Ա������public�̳���Ҳ�ǹ���Ȩ�� 
//		m_B = 200; // �����еı�����Ա��������Ҳ�Ǳ���Ȩ��
//		//m_C = 300; //�����е�˽�г�Ա�����಻���Է���
//	}
//};
//void test01()
//{
//	son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 200; //m_B�Ǳ���Ȩ�� ���ⲻ���Է���
//}
//class son2 :protected Base
//{
//public:
//	void test()
//	{
//		m_A = 100;
//		m_B = 200;//m_A ��m_B ��protected�̳��£�������˱���Ȩ��
//		//m_C;//˽�г�Ա�����Է���
//	}
//};
//void test02()
//{
//	son2 s2;
//	//s2.m_A;//���ⲻ���Է��� ����Ȩ�� ; m_A�ڸ������ǹ���Ȩ�ޣ�������protected�̳�
//	//֮�� m_A����˱���Ȩ�ޣ��������ⲻ�ܷ��ʡ�
//}
//class son3 : private Base
//{
//public:
//	void test()
//	{
//		m_A = 300;
//		m_B = 400;  // ��private�̳�֮��m_A m_B�������˽��Ȩ��
//	}
//};
//void test03()
//{
//	son3 s3;
//	s3.m_A;//���ɷ��ʣ�m_A�����˽��Ȩ��
//}
//int main()
//{
//	system("pause");
//	return 0;
//}

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
//class son : public Base
//{
//public:
//	int A;
//};
//void test()
//{
//	cout << sizeof(son) << endl;
//}
//int main()
//{
//
//	test();
//	system("pause");
//	return 0;
//}

//�̳��й��캯��������������˳��
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		cout << "���ࣨ���ࣩ���캯���ĵ���" << endl;
//	}
//	~Base()
//	{
//		cout << "���ࣨ���ࣩ���������ĵ���" << endl;
//	}
//};
//class son :public Base
//{
//public:
//	son()
//	{
//		cout << "���ࣨ�����ࣩ���캯���ĵ���" << endl;
//	}
//	~son()
//	{
//		cout << "���ࣨ�����ࣩ���������ĵ���" << endl;
//	}
//};
//void test()
//{
//	son s;
//}
//int main()   //�ڴ����������ʱ�����ڼ̳й�ϵ�����������Զ�����һ������Ķ���
////�����ȵ��ø���Ĺ��캯���������ٶ���ʱ����Ϊ�ֲ����������ջ����ջ���ص����Ƚ����
//// ������������������ȵ�������������������ٵ��ø������������
//{
//	test();
//	return 0;
//}

//ͬ����Ա����
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void fun()
//	{
//		cout << "Base ͬ����Ա�����ĵ���" << endl;
//	}
//	void fun(int a)
//	{
//		cout << "Base int  ͬ����Ա�����ĵ���" << endl;
//	}
//	int m_A;
//};
//class son : public Base
//{
//public:
//	son()
//	{
//		m_A = 200;
//	}
//	void fun()
//	{
//		cout << "son ͬ����Ա�����ĵ���" << endl;
//	}
//
//	int m_A;
//};
//void test()
//{
//	son s;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl; //���������е�ͬ����Աʱ ֱ�ӷ��� ���� .ͬ����Ա
//	//ͨ������ ���ʸ����е�ͬ����Աʱ��Ҫ����������
//}
//void test01()
//{
//	son s1;
//	s1.fun(); //����������͸���ͬ����Ա����ʱ �����ͬ����Ա����ֱ�ӵ���
//	s1.Base::fun(); //ͨ��������ʸ����е�ͬ����Ա����ʱ��Ҫ����������
//	s1.Base :: fun(100); //�����е�ͬ����Ա���������ص������е�ͬ����Ա������ͨ���������
//	//��Ҫ����������
//
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}s

//ͬ����̬��Ա����
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	static void fun()
//	{
//		cout << "Base ��̬ͬ����Ա�����ĵ���" << endl;
//	}
//	static void fun(int a)
//	{
//		cout << "Base int a ��̬ͬ����Ա�����ĵ���" << endl;
//	}
//	static int m_A;
//};
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//	static void fun()
//	{
//		cout << "Son ��̬ͬ����Ա�����ĵ���" << endl;
//	}
//	static int m_A;
//};
//int Son::m_A = 200;
//void test()
//{
//	Son s;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl; 
//
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//	//ͨ��Son���� ���ʸ���Base�������µľ�̬ͬ����Ա
//
//	cout << Base::m_A << endl;
//	//ֱ��ͨ���������ͬ����Ա
//}
//void test01()
//{
//	Son s1;
//	//ͨ��������ʾ�̬ͬ������
//	s1.fun();
//	s1.Base::fun();
//	s1.Base::fun(100);
//
//	//ͨ����������
//	 Son::fun() ;
//	 Base::fun() ;
//	 Son::Base::fun();
//	 //������ʾͨ��������� �ڶ��� :: ��ʾ ���ʸ����������µľ�̬ͬ����Ա����
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//��̳��﷨
#include<iostream>
using namespace std;
//��̳��﷨��class ���� �� �̳з�ʽ ���� �� �̳з�ʽ ����
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};
class son : public Base1, public Base2
{
public:
	son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test()
{
	son s;
	cout << sizeof(s) << endl;
	//��������������ͬ����Աʱ��Ϊ��������Ҫ���������
	//cout << s.m_A << endl;//���ڶ����� ��Ϊ�������඼��m_A��Ա ��֪�������ĸ�
	cout << s.Base1::m_A << endl;
	cout << s.Base2::m_A << endl;
}
int main()
{
	test();
	return 0;
}