#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//消失的数字
//int missingNumber(int* nums, int numsSize){
//	int sum = 0;
//	for (int i = 0; i<numsSize; i++)
//	{
//		sum += nums[i];
//	}
//	int target = (numsSize+1)*numsSize / 2;
//	return target-sum;
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 3 };
//	printf("%d\n", missingNumber(arr, (sizeof(arr) / sizeof(arr[0]))));
//	return 0;
//}
//三步翻转法
void reverse(int* nums, int numsSize){
	int left = 0;
	int right = numsSize - 1;
	while (right>left)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		right--;
		left++;
	}

}

void rotate(int* nums, int numsSize, int k){
	reverse(nums,numsSize-k);
	reverse(nums+numsSize-k, k);
	reverse(nums,numsSize );
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*reverse(arr, sz);*/
	rotate(arr, sz, 3);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}