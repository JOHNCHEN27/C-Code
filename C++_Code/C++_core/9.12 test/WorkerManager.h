#pragma once
#include<iostream>
#include"Worker.h"
#include "Boss.h"
#include "employee.h"
#include"manager.h"
#define FILENAME "test.txt"
#include<fstream>
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	
	~WorkerManager();
	//职工人数
	int m_EmpNum;
	//职工指针
	Worker** m_EmpArray;
	//展示菜单
	void ShowMenu();
	//退出职工系统
	void existSystem();
	//增加职工
	void AddEmpNum();
	//保存文件
	void save();

	//文件为空的标志
	bool m_FileEmpty;

	//显示职工信息
	void ShowEmp();
	//获取文件中的人数
	int get_EmpNum();
	//初始化成员
	void initEmp();

	//删除职工
	void DeleteEmp();
	//判断职工是否存在
	int IsExist(int a);

	//修改职工信息
	void ModEmp();

	//查找职工编号
	void FindEmp();

	//按职工编号进行排序
	void SortEmp();

	//清空所有文档
	void CleanFile();


	



};