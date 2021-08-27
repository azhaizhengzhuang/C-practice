// ��ͷ+˫��+ѭ��������ɾ���ʵ��
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

typedef int LTDataType;

typedef struct ListNode

{

	LTDataType _data;

	struct ListNode* _next;

	struct ListNode* _prev;

}ListNode;



// ��������������ͷ���.

ListNode* ListCreate();

// ˫����������

void ListDestory(ListNode* pHead);

// ˫��������ӡ

void ListPrint(ListNode* pHead);

// ˫������β��

void ListPushBack(ListNode* pHead, LTDataType x);

// ˫������βɾ

void ListPopBack(ListNode* pHead);

// ˫������ͷ��

void ListPushFront(ListNode* pHead, LTDataType x);

// ˫������ͷɾ

void ListPopFront(ListNode* pHead);

// ˫����������

ListNode* ListFind(ListNode* pHead, LTDataType x);

// ˫��������pos��ǰ����в���

void ListInsert(ListNode* pos, LTDataType x);

// ˫������ɾ��posλ�õĽڵ�

void ListErase(ListNode* pos);