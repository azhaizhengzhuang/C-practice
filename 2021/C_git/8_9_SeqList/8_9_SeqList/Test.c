#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.c.h"

int main()
{
	//����˳���
	SeqList sl;
	//��ʼ�����Ա�
	SeqListInit(&sl);
	SeqListInsert(&sl,0,1);
	SeqListInsert(&sl,0, 2);
	SeqListInsert(&sl, 0, 3);
	SeqListInsert(&sl, 0, 4);
	SeqListInsert(&sl, 0, 5);
	SeqListInsert(&sl, 0, 6);
	SeqListPrint(&sl);
	return 0;
}