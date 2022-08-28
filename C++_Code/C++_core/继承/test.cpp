//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//    static void fun()
//    {
//        cout << "Base static的调用" << endl;
//    }
//    static void fun(int a)
//    {
//        cout << "Base static int 的调用" << endl;
//    }
//    static int m_A;
//};
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//    static void fun()
//    {
//        cout << "Son static的调用" << endl;
//    }
//    static int m_A;
//};
//int Son::m_A = 200;
//void test()
//{
//    Son s;
//    //通过对象访问
//    cout << s.m_A << endl;
//    cout << s.Base :: m_A << endl;
//
//    //通过类名访问
//    cout << Son::m_A << endl;
//    cout << Son:: Base::m_A << endl;
//    // 通过子类 访问父类中的m_A ; 第一个 ：： 表示通过类名访问
//    // 第二个 ：： 表示访问父类作用域下的成员。
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
//    cout << sizeof(s) << endl; //输出是16 因为子类继承了两个父类的成员
//    //当两个父类中都有同名成员 需要加作用域区分
//}
//int main()
//{
//    test();
//    return 0;
//}
