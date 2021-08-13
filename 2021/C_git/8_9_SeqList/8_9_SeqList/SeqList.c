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
		//��ԭ����Ϊ�� ��Ϊ1 ��ԭ������Ϊ0 ��Ϊ˫������
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
	//�������
	check_capacity(ps);
	//��������λ����Ԫ�� �򱻲����λ���Լ������Ԫ��ȫ������һ��
	//�������λ��ûԪ�� ֱ�Ӱ�Ҫ�����Ԫ����Ϊ���һ��Ԫ��
	if (pos < ps->size)
	{
		//���±�pos��ʼ ����Ԫ�������ƶ�һ��
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