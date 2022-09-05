//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//template<class T>
//class Myarray
//{
//public:
//	Myarray(int capacity)
//	{
//		cout << "有参构造函数的调用" << endl;
//		m_Capacity = capacity;
//		m_Size = 0;
//		paddress = new T[capacity];
//	}
//	//拷贝函数
//	Myarray(const Myarray& arr)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//		m_Capacity = arr.m_Capacity;
//		m_Size = arr.m_Size;
//		paddress = new T[arr.m_Capacity];
//
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->paddress[i] = arr.paddress[i];
//		}
//	} 
//
//	//operator= 赋值运算符
//	Myarray& operator = (Myarray& arr)
//	{
//		if (paddress != NULL)
//		{
//			cout << "赋值运算符重载 operator = 的调用" << endl;
//			delete[] paddress;
//			m_Capacity = 0;
//			m_Size = 0;
//		}
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->paddress = new T[arr.m_Capacity];
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->paddress[i] = arr.paddress[i];
//		}
//		return *this;
//	}
//	
//	//尾插法
//	void Push_Back(const T& val)
//	{
//		//判断数组是否已满
//		if (this->m_Capacity == this->m_Size)
//		{
//			return;
//		}
//		this->paddress[this->m_Size] = val; // 在数组尾部插入数据
//		this->m_Size++; // 更新数组的大小
//
//	}
//
//	//尾删法
//	void Pop_Back()
//	{
//		//首先判断数组是不是为空
//		if (this->m_Size == 0)
//		{
//			return;
//		}
//		//把数组的大小减一即可删除最后一个元素
//		this->m_Size--;
//	}
//
//	//通过下标来访问数据元素
//	T& operator [] (int index)
//	{
//		return this->paddress[index];
//	}
//
//	//获取数组容量
//	int getCapacity()
//	{
//		return m_Capacity;
//	}
//	//获取数组大小
//	int getSize()
//	{
//		return m_Size;
//	}
//	~Myarray()
//	{
//		
//		if (paddress != NULL)
//		{
//			cout << "析构构造函数的调用" << endl;
//			delete[] paddress;
//			paddress = NULL;
//
//		}
//	}
//private:
//	T* paddress;
//	int m_Size;
//	int m_Capacity;
//};