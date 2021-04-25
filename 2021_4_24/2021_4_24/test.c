#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��ϰqsort����ͬ���͵����ݣ�
//1����һ���������飻
//2����һ����������;
//3.���ṹ����������γ�Ա����ṹ��
//4.���ṹ��������ַ�����Ա����ṹ��

struct Stu
{
	char name[20];
	int age;
};
int compare_int(const void *a, const void* b)//�������ε�compare�ص�����
{
	return *(int*)a - *(int*)b;//���ܶ�������ָ������� ��������Ҫ�Ƚϵ�����������Ԫ�ص�ֵ ����������ָ��ǿ��ת��Ϊ����ָ��
}

void test1()
{
	int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	qsort(a, sz, sizeof(a[0]), compare_int);
	int i = 0;
	for (i = 0; i < sz;i++)//��ӡ����鿴�����Ƿ�����
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");

}

int compare_float(const void* a, const void* b)
{
	return(int)(*(float*)a - *(float*)b);
}

void test2()
{
	float f[9] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]),compare_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n\n");
}

int compare_stu_by_age(const void* a, const void* b)
{
	return (((struct Stu*)a)->age - ((struct Stu*)b)->age);
}

void test3()//���ݽṹ���е�����Ԫ�ضԽṹ���������
{
	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compare_stu_by_age);
}

int compare_stu_by_name(const void* a,const void* b)
{
	return strcmp(((struct Stu*)a)->name,((struct Stu*)b)->name);//�������Ԫ���ǽṹ�壬��Ӧǿ��ת��Ϊ�ṹ��ָ�������ٽ�����
}

void test4()
{
	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compare_stu_by_name);
}

void Swap(char*num1, char*num2, int width)
{
	int i = 0;
	for (i = 0; i < width;i++)//һ���ֽ�һ���ֽڵĽ���
	{
		char tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
		num1++;
		num2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*compare)(const void* e1,const  void* e2))//ð�ݺ������Ż��� ���������������͵ı���
{
	//ʵ��ð�ݺ����Ĳ���
	//1ȷ��ð�����������
	//2ȷ��ÿ��ð������ȽϵĴ���
	//2.1��λҪ�Ƚϵ�����Ԫ�� //��������ָ��ת��Ϊchar*�������Ϻ��ʵ�����
	//2.2�ж��Ƿ�Ҫ����  //��װһ��������������Ԫ�صĵ�ַ��Ԫ���ֽڴ���ȥ��һ���ֽ�һ���ֽڵĽ���

	//���µ��ܽ᣺
	//1����void*�Ĳ���Ϊ1�ֽ��������
	//2�ص�����
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)//֮ǰ��ѭ������д��i<sz-1-i������ѭ�������������j����++������Խ����ʳ��������
		{//��������ͨ���ϵ��ҵ��� �ϵ��Ǹ��ö�����
			if (compare((char*)base + j*width, (char*)base + (j + 1)*width) > 0)//Ϊ�������Ԫ�أ�Ҫ������Ԫ�ص�ָ�봫��compare�������Ȱ�������Ԫ��baseת��Ϊchar*���ټ��Ϻ��ʵ�ֵ����������Ԫ�ص�ָ����
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);//��ǰ���Ԫ�ش��ں��棬Swap������Ԫ�ؽ��н���
			}
		}
	}
}
void test5()//��һ������������Ը������ð������
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9.10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
     bubble_sort(arr,sz,sizeof(arr[0]),compare_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//test1();//qsort������������
	//test2();//qsort���򸡵�����
	//test3();//qsort���ݽṹ�����γ�Ա����ṹ��
	//test4();//qsort���ݽṹ���ַ�����Ա����ṹ��
	test5();
	return 0;
}