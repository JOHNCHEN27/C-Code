#pragma once
#include<iostream>
template<class T>
class Myarray
{
public:
	Myarray(int capacity)
	{
		cout << "�вι���ĵ���" << endl;
		m_Capacity = capacity;
		m_Size = 0;
		paddress = new T[capacity];
	}
	Myarray(const Myarray& arr)
	{
		cout << " ���������ĵ���" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		paddress = new T[arr.m_Capacity];
		//���������ֵ��ֵ
		for (int i = 0; i < this->m_Size; i++)
		{
			paddress[i] = arr.paddress[i];
		}
	}

	//operator = ��������ظ�ֵ
	Myarray& operator = (Myarray& arr)
	{
		//����ڶ���������
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

	//β�巨 
	void Push_array(T& val)
	{
		//�ж������Ƿ�Ϊ��
		if (m_Size == m_Capacity)
		{
			return;
		}
		this->paddress[m_Size] = val;
		m_Size++;
	}

	//βɾ��
	void pop_array()
	{
		//�ж������Ƿ�Ϊ��
		if (m_Size == 0)
		{
			return ;
		}
		m_Size--;
	}

	//���Ԫ�ظ���
	int getsize()
	{
		return m_Size;
	}
	int getcapacity()
	{
		return m_Capacity;
	}

	//ͨ���±�����������Ԫ��
	T& operator [](int index)
	{
		return this->paddress[index];
	}
	~Myarray()
	{
		
		if (paddress != NULL)
		{
			cout << "���캯���ĵ���" << endl;
			delete[] paddress;
			paddress = NULL;

		}
	}
private:
	T* paddress;
	int m_Capacity;
	int m_Size;
};