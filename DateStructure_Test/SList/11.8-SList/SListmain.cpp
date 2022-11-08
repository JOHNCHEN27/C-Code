#include"SList.h"
#include<vector>
#include<algorithm>
class myprintf
{
public:
	void operator()(int v1)
	{
		cout << v1 <<" ";
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
 	}

	for_each(v.begin() ,v.end(), myprintf());
}

void test02()
{
	SList s;
	SListInit(&s);

	SListPushFront(&s, 1);
	SListPushFront(&s, 20);
	SListPushFront(&s, 15);
	SListPushFront(&s, 11);

	SListPushBack(&s, 300);
	SListPushBack(&s, 223);
	SListPushBack(&s, 520);

	SListPopFront(&s);
	
	SListPopBack(&s);

	cout << SListFind(&s, 223) << endl;

	Printf(&s);


	SListDestroy(&s);
}
int main()
{
	//test01();

	test02();

	return 0;
}