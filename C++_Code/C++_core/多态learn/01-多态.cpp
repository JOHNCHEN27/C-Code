//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "������˵�� " << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Cat��˵�� " << endl;
//	}
//};
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Dog��˵��" << endl;
//	}
//};
//void dospeak(Animal& animal)
//{
//	animal.speak();
//}
//void test()
//{
//	Cat cat;
//	dospeak(cat);//����������ִ��cat���е�speak���������ڻ�ִ��Animal���е�speak
//	//ԭ���ǣ�Cat��������ʱ ���亯����ַ��������dospeak�ڱ���׶ξͷ����˵�ַ
//	//animal���ַ��ȷ�����������е��õ���animal�е�speak
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
//	virtual void fun() = 0; //���麯��=0���麯���ͱ�ɴ��麯��
//	//�д��麯������ �ֳ�Ϊ������
//	//��������ص��ǣ�
//	//�޷�ʵ�������� ���������д������Ĵ��麯��������Ҳ�ǳ�����
//};
//class son : public Base
//{
//public:
//	virtual void fun()
//	{
//		cout << "son ���麯���ĵ���" << endl;
//	};
//
//};
//void test()
//{
//	//Base b;//�������޷�ʵ��������
//	//new Base; //ջ�����������޷�ʵ��������
//	son s;
//	new son; //������û��д�����еĴ��麯������������Ҳ����˳�����
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
//		cout << "������˵��" << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Cat��˵��" << endl;
//	}
//
//};
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Dog��˵��" << endl;
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
//		cout << "animal ���캯���ĵ���" << endl;
//	}
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//	/*~Animal()
//	{
//		cout << "animal���������ĵ���" << endl;
//	}*/
//	//������
//	/*virtual ~Animal() {
//	
//		cout << "animal�����ĵ���" << endl;
//	}*/
//	//��������
//	virtual ~Animal()  = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal���������ĵ���" << endl;
//}
//class Cat : public Animal
//{
//public:
//	Cat()
//	{
//		cout << "cat���캯���ĵ���" << endl;
//	}
//	Cat(string name)
//	{
//		Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *Name <<"Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		cout << "cat���������ĵ���" << endl;
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
		cout << "animal ���캯���ĵ���" << endl;
	}
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
	/*virtual ~Animal()
	{
		cout << "animal���������ĵ���" << endl;
	}*/
	virtual ~Animal() = 0;
};
Animal::~Animal()
{
	cout << "Animal���������ĵ���" << endl;
}
class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "cat���캯���ĵ���" << endl;
		Name = new string(name);
	}
	virtual void speak()
	{
		cout << "Сè��˵��" << endl;
	}
	~Cat()
	{
		cout << "cat���������ĵ���" << endl;
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