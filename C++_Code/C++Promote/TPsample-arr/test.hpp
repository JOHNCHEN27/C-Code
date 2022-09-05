#pragma once
#include<iostream>
template<class T>
class Myarray
{
public:
	Myarray(int capacity)
	{
		cout << "有参构造的调用" << endl;
		m_Capacity = capacity;
		m_Size = 0;
		paddress = new T[capacity];
	}
	Myarray(const Myarray& arr)
	{
		cout << " 拷贝函数的调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		paddress = new T[arr.m_Capacity];
		//给数组里的值赋值
		for (int i = 0; i < this->m_Size; i++)
		{
			paddress[i] = arr.paddress[i];
		}
	}

	//operator = 运算符重载赋值
	Myarray& operator = (Myarray& arr)
	{
		//清空在堆区的属性
		if (paddress != NULL)
		{
			delete[] paddress;
			paddress = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	//尾插法 
	void Push_array(T& val)
	{
		//判断数组是否为满
		if (m_Size == m_Capacity)
		{
			return;
		}
		this->paddress[m_Size] = val;
		m_Size++;
	}

	//尾删法
	void pop_array()
	{
		//判断数组是否为空
		if (m_Size == 0)
		{
			return ;
		}
		m_Size--;
	}

	//获得元素个数
	int getsize()
	{
		return m_Size;
	}
	int getcapacity()
	{
		return m_Capacity;
	}

	//通过下标来访问数据元素
	T& operator [](int index)
	{
		return this->paddress[index];
	}
	~Myarray()
	{
		
		if (paddress != NULL)
		{
			cout << "构造函数的调用" << endl;
			delete[] paddress;
			paddress = NULL;

		}
	}
private:
	T* paddress;
	int m_Capacity;
	int m_Size;
};