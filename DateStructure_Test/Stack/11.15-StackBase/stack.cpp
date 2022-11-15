#include"stack.h"

//初始化栈
void StackInit(Stack* s)
{
	s->elem = NULL;
	s->top = s->capacity = 0;
	cout << "初始化成功" << endl;

}

//销毁栈
void StackDestroy(Stack* s)
{
	delete s->elem;
	s->elem = NULL;
	s->top = s->capacity = 0;
	cout << "栈销毁成功" << endl;
}

//进栈
void StackPush(Stack* s, Elemtype x)
{
   //进栈的时候 需要判断栈空间是否足够，没有则开辟
	if (s->top == s->capacity)
	{
	     //因为栈顶指针从0开始， 指向栈顶元素的后一个位置，所有当栈顶指针为0 并且等于容量时，表示空间不够
		int newcapacity = s->capacity == 0 ? 4 : s->capacity * 2;
		//三目运算符 判断
		Elemtype* temp = new Elemtype[newcapacity]; // 重新开辟一个临时数组空间用来赋值
		if (temp == NULL)
		{
		   //如果为空，则开辟失败 退出程序
			cout << "开辟空间失败" << endl;
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

//出栈
void StackPop(Stack* s)
{
	assert(s->top > 0); //断言判断栈不为空
	s->top--;
}

//获取栈顶元素
Elemtype StackTop(Stack* s)
{
	assert(s->top > 0);
	return s->elem[s->top - 1]; // 因为栈顶指针指向的是栈顶元素的后一位，所有需要把栈顶指针减1 才是栈顶元素
}

//判断栈空
bool StackEmpty(Stack* s)
{
	return s->top == 0; //直接返回栈顶指针是否为空， 如果为真 说明栈空
}

//栈的大小
int StackSize(Stack* s)
{
	return s->top; //返回栈顶指针
}