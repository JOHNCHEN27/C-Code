//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说活 " << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Cat在说话 " << endl;
//	}
//};
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Dog在说话" << endl;
//	}
//};
//void dospeak(Animal& animal)
//{
//	animal.speak();
//}
//void test()
//{
//	Cat cat;
//	dospeak(cat);//本意上是想执行cat类中的speak，但是现在会执行Animal类中的speak
//	//原因是：Cat类在运行时 分配函数地址，而函数dospeak在编译阶段就分配了地址
//	//animal类地址先确定下来，所有调用的是animal中的speak
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void fun() = 0; //令虚函数=0；虚函数就变成纯虚函数
//	//有纯虚函数的类 又称为抽象类
//	//抽象类的特点是：
//	//无法实例化对象； 子类必须重写抽象类的纯虚函数，否则也是抽象类
//};
//class son : public Base
//{
//public:
//	virtual void fun()
//	{
//		cout << "son 纯虚函数的调用" << endl;
//	};
//
//};
//void test()
//{
//	//Base b;//抽象类无法实例化对象
//	//new Base; //栈区、堆区都无法实例化对象
//	son s;
//	new son; //子类中没重写父类中的纯虚函数，所有子类也变成了抽象类
//	Base* base = new son;
//	base->fun();
//	delete base;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Cat在说话" << endl;
//	}
//
//};
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Dog在说话" << endl;
//	}
//};
//void dospeak(Animal& animal)
//{
//	animal.speak();
//}
//void test()
//{
//	Cat c;
//	c.speak();
//
//	Dog d;
//	d.speak();
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "animal 构造函数的调用" << endl;
//	}
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//	/*~Animal()
//	{
//		cout << "animal析构函数的调用" << endl;
//	}*/
//	//虚析构
//	/*virtual ~Animal() {
//	
//		cout << "animal析构的调用" << endl;
//	}*/
//	//纯虚析构
//	virtual ~Animal()  = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal析构函数的调用" << endl;
//}
//class Cat : public Animal
//{
//public:
//	Cat()
//	{
//		cout << "cat构造函数的调用" << endl;
//	}
//	Cat(string name)
//	{
//		Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *Name <<"小猫在说话" << endl;
//	}
//	~Cat()
//	{
//		cout << "cat析构函数的调用" << endl;
//		if (this->Name != NULL)
//		{
//			delete Name;
//			Name = NULL;
//		}
//	}
//	string* Name;
//};
//void test()
//{
//	
//	
//	Animal * animal = new Cat("blue");
//	animal->speak();
//	delete animal;
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<iostream>
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "animal 构造函数的调用" << endl;
	}
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
	/*virtual ~Animal()
	{
		cout << "animal析构函数的调用" << endl;
	}*/
	virtual ~Animal() = 0;
};
Animal::~Animal()
{
	cout << "Animal析构函数的调用" << endl;
}
class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "cat构造函数的调用" << endl;
		Name = new string(name);
	}
	virtual void speak()
	{
		cout << "小猫在说话" << endl;
	}
	~Cat()
	{
		cout << "cat析构函数的调用" << endl;
	}
	string* Name;
};
void test()
{
	Animal* animal = new Cat("blue");
	animal->speak();
	delete animal;
}
int main()
{
	test();
	return 0;
}