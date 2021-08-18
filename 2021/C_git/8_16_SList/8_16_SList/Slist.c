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
//由于不改变头结点的地址 所以使用传值调用
void SListPrint(SListNode* plist)
{
	//定义一个指向当前结点的cur指针
	SListNode* cur = plist;
	// 如果cur是空指针 打印cur 
	//如果不是 先把当前结点的data成员打印出来 然后把当前结点的next成员赋给cur指针 循环直到该cur指针为NULL
	printf("Slist:");
	while (cur)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
//由于需要改变头节点的地址 因此传头节点的地址的地址（传址调用）
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newcode = BuySListNode(x);
	//若链表中没有结点 把头结点的地址改为新开辟结点的地址
	if (!*pplist)
	{
		*pplist = newcode;
		return;
	}
	//定义一个指针 让其找到链表最后一个结点
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
	//把头结点的地址付给新结点的next成员 然后再把新结点的地址赋给头节点的地址
	//情况1：链表已有节点时接口正常运行 
	//情况2：链表还没有结点 则由于此时的头结点的地址为空指针 赋给新节点的next成员正好合适
		newcode->next = *pplist;
		*pplist = newcode;
}

void SListPopBack(SListNode** pplist)
{
	SListNode* cur = *pplist;
	//如果链表没结点 直接返回
	if (!cur)
	{
		return;
	}
	//如果只有一个结点 把结点释放 并把指向头节点的地址置空
	else if (!cur->next)
	{
		free(cur);
		*pplist = NULL;
		return;
	}
	//如果有至少两个结点
	else
	{
		//定义一个跟屁虫指针 用来定位倒数第二个元素
		SListNode* prev = NULL;
		//cur指针每次会先把自己的值赋给prev指针 然后自己再顺着链表前进一步
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		//把最后一个结点释放 倒数第二个结点的next成员置空
		free(cur);
		prev->next = NULL;
	}
}

void SListPopFront(SListNode** pplist)
{
	SListNode* cur = *pplist;
	//如果链表没结点 直接返回
	if (!cur)
	{
		return;
	}
	//如果至少一个结点
	//把头结点地址改成头结点的next成员（若只有一个结点 则next成员为空 若超过一个结点 则为下一个结点的地址） 然后把头节点释放
	else 
	{
		*pplist = cur->next;
		free(cur);
	}
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
	//如果链表没节点 直接返回一个空指针
	if (!cur)
	{
		printf("No such a data.\n");
		return NULL;
	}
	//如果至少一个结点 则遍历链表 找到目标结点返回目标结点地址 找不到就返回空指针(怎么感觉逻辑有点搓)
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
	//如果是个指向目标结点的地址是空指针 则什么也不做
	if (!pos)
	{
		return;
	}
	//如果指向的目标结点为链表的第一个元素 复用头插
	else if (pos == *pplist)
	{
		SListPushFront(pplist, x);
	}
	//其他情况 则开辟一个新节点 找到目标结点的前一个结点 把其的next成员改为新结点的地址 把目标结点的地址赋给新结点的next成员
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
	//如果是个指向目标结点的地址是空指针 则什么也不做
	if (!pos)
	{
		return;
	}
	//如果指向的目标结点为链表的第一个元素 复用头删
	else if (pos == *pplist)
	{
		SListPopFront(pplist);
	}
	//其他情况 将目标结点的上一个结点的next成员置为目标结点的next成员 然后将目标结点置空
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