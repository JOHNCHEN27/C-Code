#include"tele.h"

void ShowMenu()
{
	cout << "--------- 1、添加联系人 ----------" << endl;
	cout << "--------- 2、显示联系人 ----------" << endl;
	cout << "--------- 3、删除联系人 ----------" << endl;
	cout << "--------- 4、查找联系人 ----------" << endl;
	cout << "--------- 5、修改联系人 ----------" << endl;
	cout << "--------- 6、清空联系人 ----------" << endl;
	cout << "--------- 0、退出通讯录 ----------" << endl;


}
void AddPerson(tele* t)
{
	cout << "请输入添加联系人的个数：" << endl;
	int num = 0;
	cin >> num;

	cout << "添加第" << num + 1 << "个联系人" << endl;
	}