//#include<iostream>
//using namespace std;
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.......(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流中心、站内导航......（公共尾部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++......(公共分类列表) " << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.......(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流中心、站内导航......（公共尾部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++......(公共分类列表) " << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.......(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流中心、站内导航......（公共尾部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++......(公共分类列表) " << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//void test()
//{
//	CPP c;
//	cout << "C++下载视频界面如下：" << endl;
//	c.header();
//	c.footer();
//	c.left();
//	c.content();
//	cout << "-----------------------" << endl;
//
//	Java j;
//	cout << "Java下载视频界面如下：" << endl;
//	j.header();
//	j.footer();
//	j.left();
//	j.content();
//	cout << "-----------------------" << endl;
//
//	Python p;
//	cout << "Python下载视频界面如下：" << endl;
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
//        cout << "首页、公开课、登录、注册......(公共头部) " << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流中心、站内导航.......(公共底部)" << endl;
//    }
//    void left()
//    {
//        cout << "Java、C++、Python.......(公共列表）" << endl;
//    }
//
//};
////继承语法：class 子类（派生类） : 继承方式 父类（基类）
//class Java : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "Java学科视频" << endl;
//    }
//};
//class CPP : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "C++学科视频" << endl;
//    }
//};
//class Python : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "Python学科视频" << endl;
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
//        m_A = 100; //可以访问 父类中的公共成员在子类中还是公共成员
//        m_B = 200; //可以访问 父类中保护成员在子类中的权限还是保护权限
//       // m_C = 100; //不可以访问，子类不可以访问父类中的私有成员
//    }
//};
//void test01()
//{
//    son1 s1;
//    s1.m_A = 200; //可以访问，公共权限在类外可以访问
//  //  s1.m_B = 300; //不可以访问，保护权限在类外访问不到
//}
//class son2 : protected Base1
//{
//    friend void test2();
//public:
//    void test()
//    {
//        m_A = 300; //父类中除私有权限以外，其它权限在子类中都成了保护权限
//        m_B = 400;
//        m_C = 300;//子类不可以访问父类的私有权限
//    }
//
//};
//void test2()
//{
//    son2 s2;
//    s2.m_A = 400; //不可以访问m_A 因为m_A在子类中的权限已经变成了保护权限 内外不可以访问
//    s2.m_B = 500; //同样不可以访问 
//
//}
//class son3 : private Base1
//{
//public:
//    void test()
//    {
//        m_A = 500;
//        m_B = 600;
//        m_C = 600; // 子类不可以访问父类的私有成员
//    }
//};
//void test03()
//{
//    son3 s3;
//    s3.m_A = 600; //不可以访问，因为m_A在子类中的权限变成了私有
//    s3.m_B = 800; //同样不可以访问
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
//		m_A = 100;//父类中的公共成员在子类public继承中也是公共权限 
//		m_B = 200; // 父类中的保护成员在子类中也是保护权限
//		//m_C = 300; //父类中的私有成员，子类不可以访问
//	}
//};
//void test01()
//{
//	son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 200; //m_B是保护权限 类外不可以访问
//}
//class son2 :protected Base
//{
//public:
//	void test()
//	{
//		m_A = 100;
//		m_B = 200;//m_A 和m_B 在protected继承下，都变成了保护权限
//		//m_C;//私有成员不可以访问
//	}
//};
//void test02()
//{
//	son2 s2;
//	//s2.m_A;//类外不可以访问 保护权限 ; m_A在父类中是公共权限；经子类protected继承
//	//之后 m_A变成了保护权限，所有类外不能访问。
//}
//class son3 : private Base
//{
//public:
//	void test()
//	{
//		m_A = 300;
//		m_B = 400;  // 经private继承之后，m_A m_B都变成了私有权限
//	}
//};
//void test03()
//{
//	son3 s3;
//	s3.m_A;//不可访问，m_A变成了私有权限
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

//继承中构造函数和析构函数的顺序
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		cout << "父类（基类）构造函数的调用" << endl;
//	}
//	~Base()
//	{
//		cout << "父类（基类）析构函数的调用" << endl;
//	}
//};
//class son :public Base
//{
//public:
//	son()
//	{
//		cout << "子类（派生类）构造函数的调用" << endl;
//	}
//	~son()
//	{
//		cout << "子类（派生类）析构函数的调用" << endl;
//	}
//};
//void test()
//{
//	son s;
//}
//int main()   //在创建子类对象时，由于继承关系，编译器会自动创建一个父类的对象，
////所有先调用父类的构造函数；在销毁对象时，因为局部变量存放在栈区，栈的特点是先进后出
//// 所有先销毁子类对象，先调用子类的析构函数，再调用父类的析构函数
//{
//	test();
//	return 0;
//}

//同名成员处理
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
//		cout << "Base 同名成员函数的调用" << endl;
//	}
//	void fun(int a)
//	{
//		cout << "Base int  同名成员函数的调用" << endl;
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
//		cout << "son 同名成员函数的调用" << endl;
//	}
//
//	int m_A;
//};
//void test()
//{
//	son s;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl; //访问子类中的同名成员时 直接访问 对象 .同名成员
//	//通过子类 访问父类中的同名成员时需要加上作用域
//}
//void test01()
//{
//	son s1;
//	s1.fun(); //当出现子类和父类同名成员函数时 子类的同名成员函数直接调用
//	s1.Base::fun(); //通过子类访问父类中的同名成员函数时需要加上作用域
//	s1.Base :: fun(100); //子类中的同名成员函数会隐藏掉父类中的同名成员函数，通过子类访问
//	//需要加上作用域
//
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}s

//同名静态成员处理
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	static void fun()
//	{
//		cout << "Base 静态同名成员函数的调用" << endl;
//	}
//	static void fun(int a)
//	{
//		cout << "Base int a 静态同名成员函数的调用" << endl;
//	}
//	static int m_A;
//};
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//	static void fun()
//	{
//		cout << "Son 静态同名成员函数的调用" << endl;
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
//	//通过Son类名 访问父类Base作用域下的静态同名成员
//
//	cout << Base::m_A << endl;
//	//直接通过父类访问同名成员
//}
//void test01()
//{
//	Son s1;
//	//通过对象访问静态同名函数
//	s1.fun();
//	s1.Base::fun();
//	s1.Base::fun(100);
//
//	//通过类名访问
//	 Son::fun() ;
//	 Base::fun() ;
//	 Son::Base::fun();
//	 //：：表示通过子类访问 第二个 :: 表示 访问父类作用域下的静态同名成员函数
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}

//多继承语法
#include<iostream>
using namespace std;
//多继承语法：class 子类 ： 继承方式 父类 ， 继承方式 父类
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
	//当两个父类中有同名成员时，为了区分需要添加作用域
	//cout << s.m_A << endl;//存在二义性 因为两个父类都有m_A成员 不知道该用哪个
	cout << s.Base1::m_A << endl;
	cout << s.Base2::m_A << endl;
}
int main()
{
	test();
	return 0;
}