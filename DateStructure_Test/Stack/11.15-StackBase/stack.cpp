#include"stack.h"

//��ʼ��ջ
void StackInit(Stack* s)
{
	s->elem = NULL;
	s->top = s->capacity = 0;
	cout << "��ʼ���ɹ�" << endl;

}

//����ջ
void StackDestroy(Stack* s)
{
	delete s->elem;
	s->elem = NULL;
	s->top = s->capacity = 0;
	cout << "ջ���ٳɹ�" << endl;
}

//��ջ
void StackPush(Stack* s, Elemtype x)
{
   //��ջ��ʱ�� ��Ҫ�ж�ջ�ռ��Ƿ��㹻��û���򿪱�
	if (s->top == s->capacity)
	{
	     //��Ϊջ��ָ���0��ʼ�� ָ��ջ��Ԫ�صĺ�һ��λ�ã����е�ջ��ָ��Ϊ0 ���ҵ�������ʱ����ʾ�ռ䲻��
		int newcapacity = s->capacity == 0 ? 4 : s->capacity * 2;
		//��Ŀ����� �ж�
		Elemtype* temp = new Elemtype[newcapacity]; // ���¿���һ����ʱ����ռ�������ֵ
		if (temp == NULL)
		{
		   //���Ϊ�գ��򿪱�ʧ�� �˳�����
			cout << "���ٿռ�ʧ��" << endl;
			exit(-1);
		}

		s->capacity = newcapacity;
		for (int i = 0; i < s->top; i++)
		{
			temp[i] = s->elem[i];
		}

		s->elem = temp;
	}
	s->elem[s->top] = x;
	s->top++;
}

//��ջ
void StackPop(Stack* s)
{
	assert(s->top > 0); //�����ж�ջ��Ϊ��
	s->top--;
}

//��ȡջ��Ԫ��
Elemtype StackTop(Stack* s)
{
	assert(s->top > 0);
	return s->elem[s->top - 1]; // ��Ϊջ��ָ��ָ�����ջ��Ԫ�صĺ�һλ��������Ҫ��ջ��ָ���1 ����ջ��Ԫ��
}

//�ж�ջ��
bool StackEmpty(Stack* s)
{
	return s->top == 0; //ֱ�ӷ���ջ��ָ���Ƿ�Ϊ�գ� ���Ϊ�� ˵��ջ��
}

//ջ�Ĵ�С
int StackSize(Stack* s)
{
	return s->top; //����ջ��ָ��
}