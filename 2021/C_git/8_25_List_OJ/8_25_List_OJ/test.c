#define _CRT_SECURE_NO_WARNINGS 1
//1链表翻转
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

//typedef struct ListNode Node;
//struct ListNode* reverseList(struct ListNode* head)
//{
//	//无结点
//	if (!head)
//	{
//		return NULL;
//	}
//	else
//	{
//		//单节点
//		if (!head->next)
//		{
//			return head;
//		}
//		//至少双节点
//		else
//		{
//			Node* dest = head;
//			Node* cur = head->next;
//			head->next = NULL;
//			while (cur)
//			{
//				Node* next = cur->next;
//				cur->next = dest;
//				dest = cur;
//				cur = next;
//			}
//			return dest;
//		}
//	}
//}

//合并有序链表
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

//typedef struct ListNode Node;
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if ((!l1) && (!l2))
//	{
//		return NULL;
//	}
//	else if ((!l1) && (l2))
//	{
//		return l2;
//	}
//	else if ((!l2) && (l1))
//	{
//		return l1;
//	}
//	else
//	{
//		Node* head = NULL, *cur = NULL;
//		if ((l1->val)>(l2->val))
//		{
//			head = l2;
//			cur = head;
//			l2 = l2->next;
//		}
//		else
//		{
//			head = l1;
//			cur = head;
//			l1 = l1->next;
//		}
//		while (l1&&l2)
//		{
//			if (l1->val>l2->val)
//			{
//				cur->next = l2;
//				cur = cur->next;
//				l2 = l2->next;
//			}
//			else
//			{
//				cur->next = l1;
//				cur = cur->next;
//				l1 = l1->next;
//			}
//		}
//		if (l1)
//		{
//			cur->next = l1;
//		}
//		else if (l2)
//		{
//			cur->next = l2;
//		}
//		return head;
//	}
//}

//返回链表的中间结点（若有两个 返回后一个）
//typedef struct ListNode Node;
//struct ListNode* middleNode(struct ListNode* head){
//	if (!head)
//	{
//		return NULL;
//	}
//	if (!head->next)
//	{
//		return head;
//	}
//	Node* slow = head, *fast = head->next;
//	while (fast)
//	{
//		slow = slow->next;
//		fast = fast->next;
//		if (fast)
//			fast = fast->next;
//	}
//	return slow;
//}
//检查链表是否有环
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//typedef struct ListNode Node;
//bool hasCycle(struct ListNode *head) {
//	if (!head)
//	{
//		return 0;
//	}
//	Node* slow = head;
//	Node* fast = head;
//	while (fast&&fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (fast == slow)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}