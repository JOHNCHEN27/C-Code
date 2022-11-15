#include"Queue.h"

int main()
{
	Queue s;
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



	QueueDestroy(&s);
	return 0;
}