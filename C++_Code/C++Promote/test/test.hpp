//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//template<class T>
//class sort
//{
//public:
//	sort(int capacity)
//	{
//		cout << "�вι��캯���ĵ���" << endl;
//		m_Capacity = capacity;
//		m_Size = 0;
//		paddress = new T[capacity];
//	}
//	//��������
//	sort(const sort & arr)
//	{
//		cout << "�������캯���ĵ���" << endl;
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->paddress = new T[arr.m_Capacity];
//			//����������鸳ֵ
//		for (int i = 0; i < m_Size; i++)
//		{
//			this->paddress[i] = arr.paddress[i];
//		}
//	}
//	//operator=
//	sort& operator = (T& arr)
//	{
//		if (paddress != NULL)
//		{
//			delete[] paddress;
//			paddress = NULL;
//			m_Capacity = 0;
//			m_Size = 0;
//		}
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->paddress = arr.paddress;
//		for (int i = 0; i < m_Size; i++)
//		{
//			this->paddress[i] = arr.paddress[i];
//		}
//	}
//	//[]
//	T & operator[](int index)
//	{
//		return this->paddress[index];
//	}
//	//β�巨
//	void Push_sort(T& val)
//	{
//		if (m_Size == m_Capacity)
//		{
//			return;
//		}
//		this->paddress[m_Size] = val;
//		m_Size++;
//	}
//	//βɾ��
//	void Pop_sort()
//	{
//		if (m_Size == 0)
//		{
//			return;
//		}
//		m_Size--;
//	}
//	int getCapacity()
//	{
//		return m_Capacity;
//	}
//	int getSize()
//	{
//		return m_Size;
//	}
//
//	~sort()
//	{
//		if (paddress != NULL)
//		{
//			cout << "���������ĵ���" << endl;
//			delete[] paddress;
//			paddress = NULL;
//
//		}
//	}
//
//private:
//	T* paddress;
//	int m_Capacity;
//	int m_Size;
//};
