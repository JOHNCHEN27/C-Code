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
//		cout << "�вι��캯���ĵ���" << endl;
//		m_Capacity = capacity;
//		m_Size = 0;
//		paddress = new T[capacity];
//	}
//	//��������
//	Myarray(const Myarray& arr)
//	{
//		cout << "�������캯���ĵ���" << endl;
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
//	//operator= ��ֵ�����
//	Myarray& operator = (Myarray& arr)
//	{
//		if (paddress != NULL)
//		{
//			cout << "��ֵ��������� operator = �ĵ���" << endl;
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
//	//β�巨
//	void Push_Back(const T& val)
//	{
//		//�ж������Ƿ�����
//		if (this->m_Capacity == this->m_Size)
//		{
//			return;
//		}
//		this->paddress[this->m_Size] = val; // ������β����������
//		this->m_Size++; // ��������Ĵ�С
//
//	}
//
//	//βɾ��
//	void Pop_Back()
//	{
//		//�����ж������ǲ���Ϊ��
//		if (this->m_Size == 0)
//		{
//			return;
//		}
//		//������Ĵ�С��һ����ɾ�����һ��Ԫ��
//		this->m_Size--;
//	}
//
//	//ͨ���±�����������Ԫ��
//	T& operator [] (int index)
//	{
//		return this->paddress[index];
//	}
//
//	//��ȡ��������
//	int getCapacity()
//	{
//		return m_Capacity;
//	}
//	//��ȡ�����С
//	int getSize()
//	{
//		return m_Size;
//	}
//	~Myarray()
//	{
//		
//		if (paddress != NULL)
//		{
//			cout << "�������캯���ĵ���" << endl;
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