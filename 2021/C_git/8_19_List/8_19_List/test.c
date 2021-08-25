#include"LIst.h"

void Test1()
{
	ListNode* phead = ListCreate();
	for (int i = 0; i < 10; i++)
	{
		ListPushBack(phead,i);
	}
	ListPrint(phead);
	ListDestory(phead);
}

int main()
{
	
	Test1();
	return 0;
}