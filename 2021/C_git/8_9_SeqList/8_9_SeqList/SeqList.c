#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.c.h"
void SeqListInit(SeqList* ps)
{
	ps->size = 0;
	ps->capacity = 0;
	ps->a = NULL;
}

static void check_capacity(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{
		//若原容量为零 置为1 若原容量不为0 置为双倍容量
		int new_capacity = ps->capacity == 0 ? 1:ps->capacity*2;
		SLDateType* tmp = (SLDateType*)realloc(ps->a, sizeof(SLDateType)*new_capacity);
		if (!tmp)
		{
			printf("realloc is failed");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = new_capacity;
	}
}
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	//检查容量
	check_capacity(ps);
	//如果插入的位置有元素 则被插入的位置以及后面的元素全部后移一格
	//若插入的位置没元素 直接把要插入的元素置为最后一个元素
	if (pos < ps->size)
	{
		//从下标pos开始 所有元素往后移动一格
		size_t i = 0;
		for ( i = ps->size;i>pos; i--)
		{
			ps->a[i] = ps->a[i-1];
		}
		ps->a[pos] = x;
		ps->size++;
	}
	else
	{
		ps->a[ps->size] = x;
		ps->size++;
	}
}

void SeqListPrint(SeqList* ps)
{
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}