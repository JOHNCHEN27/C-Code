#include"SList.h"

void SListInit(SList* p)
{
	p->capacity = p->size = 0;
	p->elem = NULL;
	cout << "初始化成功" << endl;
}

void SListDestroy(SList* p)
{
	p->capacity = p->size = 0;
	delete p->elem;
	p->elem = NULL;
	cout << "销毁成功" << endl;
}

void CheckCapacity(SList* p)
{
	if (p->capacity == p->size)
	{
		int newcapacity = p->capacity == 0 ? 4 : p->capacity * 2;
		Elemtype* temp = new Elemtype[newcapacity];
		if (temp == NULL)
		{
			cout << "开辟空间失败" << endl;
			exit(0);
		}

		for (int i = 0; i < p->size; i++)
		{
			temp[i] = p->elem[i];
		}
		p->capacity = newcapacity;
		p->elem = temp;
		
	}
}

void Printf(SList* p)
{
	assert(p->size != 0);
	for (int i = 0; i < p->size; i++)
	{
		cout << p->elem[i] << " ";
	}
	cout << endl;
}

void SListPushFront(SList* p, Elemtype x)
{
	//头插时需要开辟空间
	if (p->capacity == p->size)
	{
		int newcapacity = p->capacity == 0 ? 4 : p->capacity * 2;
		Elemtype* temp = new Elemtype[newcapacity];
		if (temp == NULL)
		{
			cout << "开辟空间失败" << endl;
			exit(-1); //退出程序
		}

		p->capacity = newcapacity;
		p->elem = temp;
	}
	if (p->size == 0)
	{
		p->elem[p->size] = x;
		p->size++;
	}
	else
	{
		int end = p->size;
		while (end>0)
		{
			p->elem[end] = p->elem[end - 1];
			end--;
		}
		p->elem[end] = x;
		p->size++;
	}
}

void SListPopFront(SList* p)
{
	assert(p->size != 0);
	if (p->size == 1)
	{
		p->size--;
	}
	else
	{
		int begin = 0;
		while (begin < p->size -1)
		{
			p->elem[begin] = p->elem[begin + 1];
			begin++;
		}
		p->size--;
	}

}

void SListPushBack(SList* p, Elemtype x)
{
	//判断容量
	CheckCapacity(p);

	p->elem[p->size] = x;
	p->size++;
}

void SListPopBack(SList* p)
{
	assert(p->size != 0);
	p->size--;
}

int SListFind(SList* p, Elemtype x)
{
	assert(p->size != 0);
	for (int i = 0; i < p->size; i++)
	{
		if (p->elem[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SListErase(SList* p, Elemtype pos)
{
	assert(p->size != 0);
	for (int i = pos; i < p->size; i++)
	{
		if (pos == p->size - 1)
		{
			p->size--;
			return;
		}
		else
		{
			p->elem[i] = p->elem[i + 1];
		}
	}
	p->size--;
}

void SListInsert(SList* p, Elemtype pos, Elemtype x)
{
	CheckCapacity(p);

	assert(pos >= 0 && pos <= p->size);
	if (pos == p->size)
	{
		p->elem[pos] = x;
		p->size++;
	}
	else
	{
		int end = p->size;
		while (end != pos)
		{
			p->elem[end] = p->elem[end - 1];
			end--;

		}
		p->elem[pos] = x;
		p->size++;
	}
}