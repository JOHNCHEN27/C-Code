//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//    static void fun()
//    {
//        cout << "Base static�ĵ���" << endl;
//    }
//    static void fun(int a)
//    {
//        cout << "Base static int �ĵ���" << endl;
//    }
//    static int m_A;
//};
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//    static void fun()
//    {
//        cout << "Son static�ĵ���" << endl;
//    }
//    static int m_A;
//};
//int Son::m_A = 200;
//void test()
//{
//    Son s;
//    //ͨ���������
//    cout << s.m_A << endl;
//    cout << s.Base :: m_A << endl;
//
//    //ͨ����������
//    cout << Son::m_A << endl;
//    cout << Son:: Base::m_A << endl;
//    // ͨ������ ���ʸ����е�m_A ; ��һ�� ���� ��ʾͨ����������
//    // �ڶ��� ���� ��ʾ���ʸ����������µĳ�Ա��
//    cout << Base::m_A << endl;
//}
//void test01()
//{
//    Son s1;
//    s1.fun();
//    s1.Base::fun();
//    s1.Base::fun(100);
//
//   Son::fun() ;
//     Son::Base::fun() ;
//     Son::Base::fun(100) ;
//
//}
//int main()
//{
//    test();
//    test01();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class Base1
//{
//public:
//    Base1()
//    {
//        m_A = 100;
//    }
//    int m_A;
//};
//class Base2
//{
//public:
//    Base2()
//    {
//        m_B = 200;
//    }
//    int m_B;
//};
//class son : public Base1, public Base2
//{
//public:
//    son()
//    {
//        m_C = 300;
//        m_D = 400;
//    }
//    int m_C;
//    int m_D;
//};
//void test()
//{
//    son s;
//    cout << sizeof(s) << endl; //�����16 ��Ϊ����̳�����������ĳ�Ա
//    //�����������ж���ͬ����Ա ��Ҫ������������
//}
//int main()
//{
//    test();
//    return 0;
//}
