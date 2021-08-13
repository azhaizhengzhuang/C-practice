#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.c.h"

int main()
{
	//创建顺序表
	SeqList sl;
	//初始化线性表
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