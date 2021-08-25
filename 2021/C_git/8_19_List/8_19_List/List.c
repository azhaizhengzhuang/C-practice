#include"LIst.h"

ListNode* ListCreate()
{//����һ��һ��ͷβָ���ָ���Լ��Ľ��
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
	//�������ͷ�
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
	//ͨ�������ķ�ʽ��ӡ����
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
	//β��
	assert(pHead);
	ListInsert(pHead, x);
}
void ListPopBack(ListNode* pHead)
{
	//βɾ Ҫ������������һ����Ч���
	assert(pHead->_prev != pHead);
	ListErase(pHead->_prev);
}
void ListPushFront(ListNode* pHead, LTDataType x)
{
	//ͷ��
	assert(pHead);
	ListInsert(pHead->_next, x);
}
void ListPopFront(ListNode* pHead)
{
	//ͷɾ Ҫ������������һ����Ч���
	assert(pHead->_next != pHead);
	ListErase(pHead->_next);
}
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	//����������Ŀ������ �ҵ����ظý���ָ�� �Ҳ������ؿ�ָ��
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
	//��Ŀ�����ǰ������һ�����
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
	//ɾ��Ŀ���� 
	assert(pos);
	pos->_prev->_next = pos->_next;
	pos->_next->_prev = pos->_prev;
	free(pos);
}