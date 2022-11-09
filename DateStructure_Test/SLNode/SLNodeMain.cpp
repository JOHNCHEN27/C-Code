#include"SLNode.h"

void test01()
{
	int arr[][3] = {1,2,3,4,5,6};
	int arr1[3][2] = {0};
	for (int i = 0; i < 2; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			arr1[j][i] = arr[i][j];
			
		}
		
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	
}

void test02()
{
	SLNode* s = SLNodeInit();
	SLNodePushFront(s,22);

	SLNodePushFront(s, 55);
	SLNodePushFront(s, 33);

	SLNodePushBack(s, 111);
	SLNodePushBack(s, 355);

	//SLNodePopBack(s);
	//SLNodePopBack(s);

	SLNodeInsert(s, SLNodeFind(s, 355), 2028);
	SLNodeInsert(s, SLNodeFind(s, 33), 12028);

	SLNodeErase(s, SLNodeFind(s, 355));
	SLNodeErase(s, SLNodeFind(s, 12028));



	

	SLNodePrintf(s);

	SLNodeDestroy(s);

}
int main()
{
	//test01();
	test02();
	return 0;
}