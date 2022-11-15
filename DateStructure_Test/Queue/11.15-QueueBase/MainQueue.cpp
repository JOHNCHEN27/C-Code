#include"Queue.h"

int main()
{
	Queue s;
	QueueInit(&s);
	QueuePush(&s, 11);
	QueuePush(&s, 23);
	QueuePush(&s, 65);
	QueuePush(&s, 87);

	cout << "��ͷԪ�أ� " << QueueFront(&s) << endl;
	cout << "��βԪ�أ� " << QueueBack(&s) << endl;

	cout << "���еĴ�СΪ�� " << QueueSize(&s) << endl;

	while (!QueueEmpty(&s))
	{
		cout << QueueFront(&s) << " ";
		QueuePop(&s);
	}



	QueueDestroy(&s);
	return 0;
}