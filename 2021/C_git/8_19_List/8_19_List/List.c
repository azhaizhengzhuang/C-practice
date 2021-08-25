#include"LIst.h"

ListNode* ListCreate()
{//返回一个一个头尾指针均指向自己的结点
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	if (tmp)
	{
		ListNode* newnode = tmp;
		newnode->_next = newnode;
		newnode->_prev = newnode;
		newnode->_data = 0;
		return newnode;
	}
	else
	{
		printf("malloc is failed\n");
		return NULL;
	}
}

void ListDestory(ListNode* pHead)
{
	//把链表释放
	assert(pHead);
	ListNode* cur = pHead->_next;
	ListNode* prev = NULL;
	while (cur != pHead)
	{
		prev = cur;
		cur=cur->_next;
		free(prev);
		cur = cur->_next;
	}
	free(pHead);
	pHead = NULL;
}

void ListPrint(ListNode* pHead)
{
	//通过遍历的方式打印链表
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		printf("%d ", cur->_data);
		cur = cur->_next;
	}
}

void ListPushBack(ListNode* pHead, LTDataType x)
{
	//尾插
	assert(pHead);
	ListInsert(pHead, x);
}
void ListPopBack(ListNode* pHead)
{
	//尾删 要求链表至少有一个有效结点
	assert(pHead->_prev != pHead);
	ListErase(pHead->_prev);
}
void ListPushFront(ListNode* pHead, LTDataType x)
{
	//头插
	assert(pHead);
	ListInsert(pHead->_next, x);
}
void ListPopFront(ListNode* pHead)
{
	//头删 要求链表至少有一个有效结点
	assert(pHead->_next != pHead);
	ListErase(pHead->_next);
}
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	//在链表中找目标数据 找到返回该结点的指针 找不到返回空指针
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}



void ListInsert(ListNode* pos, LTDataType x)
{
	//在目标结点的前方插入一个结点
	assert(pos);
	ListNode* newnode = ListCreate();
	newnode->_data = x;
	ListNode* prev = pos->_prev;
	newnode->_next = pos;
	pos->_prev = newnode;
	prev->_next = newnode;
	newnode->_prev = prev;
}

void ListErase(ListNode* pos)
{
	//删除目标结点 
	assert(pos);
	pos->_prev->_next = pos->_next;
	pos->_next->_prev = pos->_prev;
	free(pos);
}