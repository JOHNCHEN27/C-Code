#pragma once
#include<iostream>
using namespace std;
#include"work.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "explicit.txt"
class WorkerManager
{
public:
	WorkerManager() ; // 构造函数的声明
	void ShowMenu(); //展示菜单
	void existSystem(); //实现退出功能
	//记录职工人数
	int m_EmpNum;
	//职工数组指针
	Worker** m_EmpArray;

	//保存文件
	void save();
	//添加职工
	void Add_Emp();

	//标志文件是否为空
	bool m_FileEmpty;

	//获取人数
	int get_EmpNum();

	//初始化成员
	void init_Emp();

	//显示职工信息
	void Show_Emp();

	//删除职工信息
	void Delete_Emp();

	//判断职工是否存在
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//职工编号排序实现
	void Sort_Emp();

	//清空函数实现
	void Clean_File();
	~WorkerManager() ; //析构函数的声明
};