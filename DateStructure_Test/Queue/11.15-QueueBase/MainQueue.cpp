#include"Queue.h"

int main()
{
	/*Queue s;
	QueueInit(&s);
	QueuePush(&s, 11);
	QueuePush(&s, 23);
	QueuePush(&s, 65);
	QueuePush(&s, 87);

	cout << "队头元素： " << QueueFront(&s) << endl;
	cout << "队尾元素： " << QueueBack(&s) << endl;

	cout << "队列的大小为： " << QueueSize(&s) << endl;

	while (!QueueEmpty(&s))
	{
		cout << QueueFront(&s) << " ";
		QueuePop(&s);
	}



	QueueDestroy(&s);*/

	int arr[] = { 2,35,64,23,653,123 };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j >= 0; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}