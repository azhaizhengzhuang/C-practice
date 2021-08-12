#pragma once

//便于修改定长数组的元素个数
#define N 100
//便于修改定长数组的元素类型
typedef int SQDataTpye;
//定长数组
struct SeqList
{
	SQDataTpye a[N];
	int size;
};