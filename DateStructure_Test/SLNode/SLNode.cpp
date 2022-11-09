#include"SLNode.h"

SLNode* SLNodeInit()
{
	SLNode* p = new SLNode;
	p->next = NULL;
	return p;
}

void SLNodePushFront(SLNode*& p, Elemtype x)
{
	//创建结点
	SLNode* newnode = SLNodeCreate(x);
	if (p->next == NULL)
	{
		p->next = newnode;
	}
	else
	{
		newnode->next = p->next;
		p->next = newnode;
	}

}

void SLNodePopFront(SLNode*& p)
{
	assert(p->next != NULL);
	SLNode* temp = p->next;
	p->next = temp->next;
	delete temp;
	temp = NULL;
}

void SLNodePushBack(SLNode*& p, Elemtype x)
{
	SLNode* newnode = SLNodeCreate(x);
	if (p->next == NULL)
	{
		p->next = newnode;
	}
	else
	{
		SLNode* end = p->next;
		while (end->next)
		{
			end = end->next;
		}
		end->next = newnode;
	}

}

void SLNodePopBack(SLNode*& p)
{
	assert(p->next != NULL);
	SLNode* tail = p->next;
	SLNode* pretail = NULL;
	while (tail->next)
	{
		pretail= tail;
		tail = tail->next;
	}

	delete tail;
	tail = NULL;
	pretail->next = NULL;
}

void SLNodeDestroy(SLNode*& p)
{
	assert(p != NULL);
	SLNode* cur = p->next;
	while (cur)
	{
		SLNode* pre = cur->next;
		delete cur;
		cur = pre;
	}

	p->next = NULL;
	cout << "销毁成功" << endl;

}

SLNode * SLNodeFind(SLNode*& p, Elemtype x)
{
	assert(p->next != NULL);
	SLNode* temp = p->next;
	while (temp)
	{
		if (temp->elem == x)
		{
			return temp;
		}
		else
		{
			temp = temp->next;
		}
	}
}

void SLNodeInsert(SLNode*& p, SLNode* pos, Elemtype x)
{
	SLNode* newnode = SLNodeCreate(x);
	SLNode* pre = p->next;
	if (pos == p->next)
	{
		newnode->next = pos;
		p->next = newnode;
	}
	else
	{
		while (pre->next != pos)
		{
			pre = pre->next;
		}
		newnode->next = pos;
		pre->next = newnode;
	}
}

void SLNodeErase(SLNode*& p,SLNode *pos)
{
	SLNode* pre = p->next;
	if (pos == p->next)
	{
		p->next = pos->next;
		delete pos;
		pos = NULL;
	}
	else
	{
		while (pre->next != pos)
		{
			pre = pre->next;
		}
		pre->next = pos->next;
		delete pos;
		pos = NULL;
	}
}

SLNode* SLNodeCreate(Elemtype x)
{
	SLNode* newnode = new SLNode;
	newnode->elem = x;
	newnode->next = NULL;
	return newnode;
}

void SLNodePrintf(SLNode* p)
{
	assert(p->next != NULL);
	SLNode* cur = p->next;
	while (cur)
	{
		cout << cur->elem << "->";
		cur = cur->next;
	}
	cout << endl;
}