#include"Slist.h"

int main()
{
	//����ͷ���ĵ�ַ
	SListNode* phead = NULL;
	SListPushBack(&phead,1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPushBack(&phead, 5);
	SListPushBack(&phead, 6);
	SListPrint(phead);
	return 0;
}