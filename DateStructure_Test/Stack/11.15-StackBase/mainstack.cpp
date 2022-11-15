#include"stack.h"

int main()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 88);
	StackPush(&s, 56);
	StackPush(&s, 78);
	StackPush(&s, 99);
	StackPush(&s, 131);

	cout << "ջ�Ĵ�СΪ�� " << StackSize(&s) << endl;
	while (!StackEmpty(&s))
	{
		cout << StackTop(&s) << " ";
		StackPop(&s);
	}




	StackDestroy(&s);
	return 0;
}