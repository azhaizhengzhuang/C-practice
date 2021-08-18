#include"Slist.h"

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newcode = (SListNode*)malloc(sizeof(SListNode));
	if (!newcode)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	newcode->data = x;
	newcode->next = NULL;
	return newcode;
}
//���ڲ��ı�ͷ���ĵ�ַ ����ʹ�ô�ֵ����
void SListPrint(SListNode* plist)
{
	//����һ��ָ��ǰ����curָ��
	SListNode* cur = plist;
	// ���cur�ǿ�ָ�� ��ӡcur 
	//������� �Ȱѵ�ǰ����data��Ա��ӡ���� Ȼ��ѵ�ǰ����next��Ա����curָ�� ѭ��ֱ����curָ��ΪNULL
	printf("Slist:");
	while (cur)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
//������Ҫ�ı�ͷ�ڵ�ĵ�ַ ��˴�ͷ�ڵ�ĵ�ַ�ĵ�ַ����ַ���ã�
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newcode = BuySListNode(x);
	//��������û�н�� ��ͷ���ĵ�ַ��Ϊ�¿��ٽ��ĵ�ַ
	if (!*pplist)
	{
		*pplist = newcode;
		return;
	}
	//����һ��ָ�� �����ҵ��������һ�����
	SListNode* cur = *pplist;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = newcode;
}
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newcode = BuySListNode(x);
	//��ͷ���ĵ�ַ�����½���next��Ա Ȼ���ٰ��½��ĵ�ַ����ͷ�ڵ�ĵ�ַ
	//���1���������нڵ�ʱ�ӿ��������� 
	//���2������û�н�� �����ڴ�ʱ��ͷ���ĵ�ַΪ��ָ�� �����½ڵ��next��Ա���ú���
		newcode->next = *pplist;
		*pplist = newcode;
}

void SListPopBack(SListNode** pplist)
{
	SListNode* cur = *pplist;
	//�������û��� ֱ�ӷ���
	if (!cur)
	{
		return;
	}
	//���ֻ��һ����� �ѽ���ͷ� ����ָ��ͷ�ڵ�ĵ�ַ�ÿ�
	else if (!cur->next)
	{
		free(cur);
		*pplist = NULL;
		return;
	}
	//����������������
	else
	{
		//����һ����ƨ��ָ�� ������λ�����ڶ���Ԫ��
		SListNode* prev = NULL;
		//curָ��ÿ�λ��Ȱ��Լ���ֵ����prevָ�� Ȼ���Լ���˳������ǰ��һ��
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		//�����һ������ͷ� �����ڶ�������next��Ա�ÿ�
		free(cur);
		prev->next = NULL;
	}
}

void SListPopFront(SListNode** pplist)
{
	SListNode* cur = *pplist;
	//�������û��� ֱ�ӷ���
	if (!cur)
	{
		return;
	}
	//�������һ�����
	//��ͷ����ַ�ĳ�ͷ����next��Ա����ֻ��һ����� ��next��ԱΪ�� ������һ����� ��Ϊ��һ�����ĵ�ַ�� Ȼ���ͷ�ڵ��ͷ�
	else 
	{
		*pplist = cur->next;
		free(cur);
	}
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
	//�������û�ڵ� ֱ�ӷ���һ����ָ��
	if (!cur)
	{
		printf("No such a data.\n");
		return NULL;
	}
	//�������һ����� ��������� �ҵ�Ŀ���㷵��Ŀ�����ַ �Ҳ����ͷ��ؿ�ָ��(��ô�о��߼��е��)
	while (1)
	{
		if (cur->data == x)
		{
			return cur;
		}
		if (cur->next)
		{
			cur = cur->next;
		}
		else
		{
			break;
		}
	}
	return NULL;
}

void SListInsert(SListNode** pplist, SListNode* pos, SLTDateType x)
{
	//����Ǹ�ָ��Ŀ����ĵ�ַ�ǿ�ָ�� ��ʲôҲ����
	if (!pos)
	{
		return;
	}
	//���ָ���Ŀ����Ϊ����ĵ�һ��Ԫ�� ����ͷ��
	else if (pos == *pplist)
	{
		SListPushFront(pplist, x);
	}
	//������� �򿪱�һ���½ڵ� �ҵ�Ŀ�����ǰһ����� �����next��Ա��Ϊ�½��ĵ�ַ ��Ŀ����ĵ�ַ�����½���next��Ա
	else
	{
		SListNode* newcode = BuySListNode(x);
		SListNode* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newcode;
		newcode->next = pos;
	}
}

void SListErase(SListNode** pplist, SListNode* pos)
{
	//����Ǹ�ָ��Ŀ����ĵ�ַ�ǿ�ָ�� ��ʲôҲ����
	if (!pos)
	{
		return;
	}
	//���ָ���Ŀ����Ϊ����ĵ�һ��Ԫ�� ����ͷɾ
	else if (pos == *pplist)
	{
		SListPopFront(pplist);
	}
	//������� ��Ŀ�������һ������next��Ա��ΪĿ�����next��Ա Ȼ��Ŀ�����ÿ�
	else
	{
		SListNode* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}