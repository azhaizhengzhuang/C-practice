#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int dest=m+n-1;
//	while (end1>=0 && end2 >=0)
//	{
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[dest--] = nums1[end1];
//			end1--;
//		}
//		else
//		{
//			nums1[dest--] = nums2[end2];
//			end2--;
//		}
//	}
//	while (end2>=0)
//	{
//		nums1[dest--] = nums2[end2--];
//	}
//}
//
//int main()
//{
//	int nums1[] = { 4,5,6, 0, 0, 0 };
//	int m = 3;
//	int nums2[] = { 1,2,3 };
//	int	n = 3;
//	merge(nums1, m , m, nums2, n, n);
//	for (int i = 0; i < m + n; i++)
//	{
//		printf("%d ", nums1[i]);
//	}
//	return 0;
//}

int removeElement(int* nums, int numsSize, int val)
{
	//定义两个数组下标 一个走得慢 一个走得快
    //1.先检测quick下标的元素 若值是不是val 把quick下标的值赋给slow 下标 slow和quick都++
	//2.若quick下标的元素是val 则quick
	//重复1——2 直到quick走到数组尽头为止 返回slow
	int slow = 0;
	int quick = 0;
	while (quick < numsSize)
	{
		if (nums[quick] != val)
		{
			nums[slow++] = nums[quick++];
		}
		else
		{
			quick++;
		}
	}
	return slow;
}

//输入：nums = [3, 2, 2, 3], val = 3
//输出：2, nums = [2, 2]

int main()
{
	int nums[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int size=removeElement(nums, sizeof(nums) / sizeof(nums[0]), 2);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}
