#define _CRT_SECURE_NO_WARNINGS 1

//SeqList.c

#include"SeqList.c.h"
void SeqListInit(SeqList* ps)
{
	ps->size = 0;
	ps->capacity = 0;
	ps->a = NULL;
}
void SeqListDestory(SeqList* ps)
{
	free(ps->a);
	ps = NULL;
}

void SeqListPrint(SeqList* ps)
{
	if (!ps->size)
	{
		printf("The SeqList is empty\n");
	}
	printf("SeqList:");
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
//�������
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
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	SeqListInsert(ps, ps->size, x);
}
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	SeqListInsert(ps, 0, x);
}
void SeqListPopFront(SeqList* ps)
{
	SeqListErase(ps,0);
}
void SeqListPopBack(SeqList* ps)
{
	SeqListErase(ps, ps->size-1);
}
// ˳������
int SeqListFind(SeqList* ps, SLDateType x)
{
	for (size_t i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	//�������
	check_capacity(ps);
	//��������λ����Ԫ�� �򱻲����λ���Լ������Ԫ��ȫ������һ��
	//�������λ��ûԪ�� ֱ�Ӱ�Ҫ�����Ԫ����Ϊ���һ��Ԫ��
	if (pos <= ps->size)
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
void SeqListErase(SeqList* ps, size_t pos)
{
	{
		//���ɾ����λ����Ԫ�� ���Լ������Ԫ��ȫ��ǰ��һ��
		//��ɾ����λ��ûԪ�� ֱ�Ӹ�������ʾ
		if (pos >= ps->size)
		{
			printf("The erase position is emtpy\n");
			return;
		}
		else
		{
			//���±�pos��ʼ ����Ԫ����ǰ�ƶ�һ��
			size_t i = 0;
			for (i = pos; i<ps->size; i++)
			{
				ps->a[i] = ps->a[i+1];
			}
			ps->size--;
		}
	}
}



