#pragma once
#include<iostream>
using namespace std;
#define Max 200

class tele
{
public:
	int arr[Max];
	int size;
};
class Person
{
public:
	string m_Name;
	int m_Age;
	string m_Sex;
	int m_Phone;
	string m_Address;
};

//菜单
void ShowMenu();
//添加联系人
void AddPerson(tele * t);