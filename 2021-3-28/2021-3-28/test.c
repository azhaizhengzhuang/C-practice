#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int is_crime_number(int x)//дһ�������������ж�һ�����ǲ����������Ǿͷ���1�������򷵻�0
//{
//	int i;
//	if (x <= 1)
//	{
//		return 0;
//	}
//	for (i = 2; i <= sqrt(x); i ++)
//	{
//		if (0==x%i)
//		{
//			return 0;//return 0��break�Ķ���������ǿ���������Դ���ѭ��������ֱ�ӽ�������
//		}
//	}
//	return 1;//�������õ���break��䣬����ֱ��return 1����Ϊbreak����֮��������ִ��ѭ����������
//}
//
//int main()
//{
//	int num=0;
//	printf("������һ����Ȼ��>;");
//	scanf("%d", &num);
//	if (is_crime_number(num))
//	{
//		printf("������\n");
//
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	
//	return 0;
//}
//
//int is_leap_year(int x)
//{
//	if (((x % 100 != 0) && (0 == x % 4))||(0==x%400))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year=0;
//	printf("����һ����ݣ�>");
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = add(a, b);
//	prinft("%d", sum);
//}

void add(int* a)
{
	(*a)++; //*a�ƺ�������++����+=�Ϳ��ԣ�����Ϊʲô�أ�   
}     //�����Ϊ++�����ȶȴ���*������++����ִ�У���������p��ֻҪ��*p���������ܱ���++��ִ����

int main()
{
	int num = 0;
	int i = 0;
	int* p = &num;
	for (i = 0; i <= 10; i++)
	{
		printf("num=%d ", num);
		add(p);
	}
	return 0;
}

//int binary_search(int arr[], int x,int sz)//��һ������ʵ�������������Ԫ�ص�ַ�����������ͨ���������Ԫ�ص�ַ�ҵ����飬����ͨ����ַ�ҵ�����������
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <=right)
//	{
//		int mid = (left + right) / 2;
//		if (x > arr[mid])//4��1�Ų��䣬�������ڲ���ֻ��������Ԫ�صĵ�ַ�£���Ȼֱ������������Ԫ�أ�֮ǰ����Ϊ�����ֲ���ֱ��ͨ���±���������Ԫ���Ǵ����
//		{
//			left = mid + 1;//ĿǰΪֹ���������Ԫ�ص�ַ���������ε�����£��ܵ�Ӱ���ֻ��sizeof���������ƺ���û����ģ�Ҳ����Ӱ�쵽���ж�Ԫ�ظ�����������
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = (sizeof(arr) / sizeof(arr[0]));//���ڵ��ú�����ʱ�������������Ϊ��������ȥ������ֻ����������Ԫ�صĵ�ַ��������Ԫ�ص�ַ�޷���������С
//	int ret=binary_search(arr, k,sz);//����ȱ����Ϣ���ں����ڲ��޷���������С����˻���Ҫ�Ѻ�����С��Ϊ��������
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	return 0;
//}