#include "Queue.h"

//���г�ʼ��
void QueueInit(Queue* q)
{
	q->head = q->tail =  NULL;
	cout << "��ʼ���ɹ�" << endl;
	//��ͷָ���βָ����Ϊ��
}

//���ٶ���
void QueueDestroy(Queue* q)
{
	//��ͷ��㿪ʼ�����ͷŶ����е�ÿ�����
	if (q->head != NULL)
	{
		QueueNode* cur = q->head; //����һ���������ָ��ͷ�ڵ�
		while (cur)
		{
			cur = cur->next;
			delete q->head;
			q->head = cur;
		}
		//ȫ��ɾ��֮�� ��βָ����Ϊ��
		q->tail = NULL;
		cout << "���ٶ���" << endl;

	}
}

//����
void QueuePush(Queue* q, Elemtype x)
{
	//��Ϊ���е������� ֻ�ܴӶ�ͷ�������´���һ������������
	QueueNode* newnode = new QueueNode;
	newnode->elem = x;
	newnode->next = NULL;

	//���������û�н����Ѵ˽����Ϊ��һ�����
	if (q->head == NULL)
	{
		q->head = q->tail = newnode;
		//��ͷָ���βָ��ָ��˽��
	}
	else
	{
		//ʣ�µ�Ԫ�ؽ��ŵ�һ��Ԫ�صĺ���
		q->tail->next = newnode;
		q->tail = newnode;
		//��βָ��ָ������һ������nextָ��ָ���½�㣬�ٽ�βָ��ָ���½ڵ㣬����βָ��ָ����е����һ��Ԫ��
	}
}

//����
void QueuePop(Queue* q)
{
	//���ӵ�ʱ����Ҫ�ж϶����Ƿ�Ϊ��
	assert(q->head != NULL);
	//����ֻ�ܴӶ�ͷ��������һ����ָ�����ƶ�ͷָ��
	QueueNode* cur = q->head->next;
	
	delete q->head;
	q->head = cur;
	if (q->head == NULL)
	{
		//����������һ��Ԫ�ر�ɾ���� �����е�βָ����Ϊ��
		q->tail = NULL;
	}
}

//�ӵĴ�С
int QueueSize(Queue* q)
{
	//����һ����������ӵĴ�С�� ��һ���½��������
	QueueNode* cur = q->head;
	int n = 0;
	while (cur)
	{
		++n;
		cur = cur->next;
	}
	return n;
}

//�ӿ�
bool QueueEmpty(Queue* q)
{
	return q->head == NULL;
}

//��ȡ��ͷԪ��
Elemtype QueueFront(Queue* q)
{
	assert(q->head != NULL);
	return q->head->elem;
}

//��ȡ��βԪ��
Elemtype QueueBack(Queue* q)
{
	assert(q->tail != NULL);
	return q->tail->elem;
}