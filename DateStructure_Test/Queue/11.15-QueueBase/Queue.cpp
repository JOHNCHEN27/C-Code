#include "Queue.h"

//队列初始化
void QueueInit(Queue* q)
{
	q->head = q->tail =  NULL;
	cout << "初始化成功" << endl;
	//将头指针和尾指针置为空
}

//销毁队列
void QueueDestroy(Queue* q)
{
	//从头结点开始依次释放队列中的每个结点
	if (q->head != NULL)
	{
		QueueNode* cur = q->head; //设置一个结点用来指向头节点
		while (cur)
		{
			cur = cur->next;
			delete q->head;
			q->head = cur;
		}
		//全部删除之后 将尾指针置为空
		q->tail = NULL;
		cout << "销毁队列" << endl;

	}
}

//进队
void QueuePush(Queue* q, Elemtype x)
{
	//因为队列的特殊性 只能从队头进，重新创建一个结点让其进队
	QueueNode* newnode = new QueueNode;
	newnode->elem = x;
	newnode->next = NULL;

	//如果队列中没有结点则把此结点作为第一个结点
	if (q->head == NULL)
	{
		q->head = q->tail = newnode;
		//将头指针和尾指针指向此结点
	}
	else
	{
		//剩下的元素接着第一个元素的后面
		q->tail->next = newnode;
		q->tail = newnode;
		//将尾指针指向的最后一个结点的next指针指向新结点，再将尾指针指向新节点，保持尾指针指向队列的最后一个元素
	}
}

//出队
void QueuePop(Queue* q)
{
	//出队的时候需要判断队列是否为空
	assert(q->head != NULL);
	//出队只能从队头出，设置一个新指针来移动头指针
	QueueNode* cur = q->head->next;
	
	delete q->head;
	q->head = cur;
	if (q->head == NULL)
	{
		//如果队列最后一个元素被删除了 将队列的尾指针置为空
		q->tail = NULL;
	}
}

//队的大小
int QueueSize(Queue* q)
{
	//设置一个数来计算队的大小， 用一个新结点来遍历
	QueueNode* cur = q->head;
	int n = 0;
	while (cur)
	{
		++n;
		cur = cur->next;
	}
	return n;
}

//队空
bool QueueEmpty(Queue* q)
{
	return q->head == NULL;
}

//获取队头元素
Elemtype QueueFront(Queue* q)
{
	assert(q->head != NULL);
	return q->head->elem;
}

//获取队尾元素
Elemtype QueueBack(Queue* q)
{
	assert(q->tail != NULL);
	return q->tail->elem;
}