#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1,&num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int n = 10;
//	int arr[n] = { 0 };
//	return 0;
//}
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	return 0;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex a = MALE;
//	a = SECRET;
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'A', 'B', 'C','\0' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//
#include <string.h>
//int main()
//{
//	int input = 0;
//	printf("���빫˾��\n�ϰ壺��Ҫ996��(1/0��>:");
//	scanf("%d", &input);
//	if (input == 1)
//     printf("��996��������ĸ�����\n");
//	else
//	 printf("�ڶ�����Ϊ�ҽ���̤��칫�ұ���͡�\n");
//	return 0;
//}
//int main()
//{
//	int day = 1;
//	  while (day < 20001)
//	 {
//		printf("ʱ�䣺��%d��\n",day);
//		day++;
//	  }
//	 if (day >= 20001)
//		printf("������\n");
//	 return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int num3 = 30;
//	int num4 = 40;
//	int sum1 = 0;
//	int sum2 = 0;
//	sum1 = Add(num1, num2);
//	sum2 = Add(num3, num4);
//	printf("sum1=%d\n", sum1);
//	printf("sum2=%d\n", sum2);
//	return 0;
//}
//int main()
//{
//	int sz = 0;
//	int arr[10] = { 0 };
//	printf("sizeof(arr)=%d\n", sizeof(arr));
//	printf("sizeof(int)=%d\n", sizeof(int));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("Ԫ�ظ���Ϊ%d\n", sz);
//	return 0;
//}
//int compare(int a,int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int biger = 0;
//	scanf("%d%d", &num1, &num2);
//	biger = compare(num1, num2);
//	printf("�ϴ������%d\n", biger);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = 0;
//	c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	unsigned int a = 1;
//	unsigned int b = ~a;
//	printf("b=%d\n", b);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	printf("%d\n", a);
//	a++;
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int globe;
//	printf("globe=%d\n", globe);
//	return 0;
//}
//extern int Add(int, int);
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 40;
//	int b = 20;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}
int main()
{
	char ch='w';
	char* p = &ch;
	*p = 'a';
	printf("%d\n",sizeof(p) );
	return 0;
}