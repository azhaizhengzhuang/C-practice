#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//

//int main()//���10�����е����ֵ ���ǲ���ð������
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("������10��������ÿ����һ��������һ�λس���");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <=8; i++)//һ��ð�����򷨼���ʵ��
//	{
//		if (arr[i]>arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	printf("\n���ֵΪ%d\n", arr[9]);
//	return 0;
//}

//

//int main()//1�ӵ�100�ĺ�
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//

//int main()//��һ��ӵ��n��Ԫ�ص�����Ӵ�С���� ���ɴӴ�С���
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)//����ð����������� һ����Ҫsz-1�� ÿ��
//	{
//		int flag = 0;//Ч������������ʣ������Ԫ���Ѿ�ȫ������
//		for (j = 0; j < sz - 1 - i; j++)//����ð��������бȽ�
//		{
//			if (arr[j]>arr[j+1])//����Ԫ�ش�����һ��Ԫ�� �򽻻� ��֤ʣ���Ԫ���д��Ԫ�������ұ�
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;//���н��� ˵��Ŀǰ�����黹δ��ȫ����
//			}
//		}
//		if (0 == flag)//������ð������û�н����κν��� ˵�������Ѿ���ȫ���� ����ѭ��
//		{
//			break;
//		}
//	}
//	for (i = sz-1; i >0; i--)//���±�Ӵ�С���δ�ӡ����Ԫ��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()//�ж�һ�����ܷ�ͬʱ��3��5����
//{
//	int num = 0;
//	printf("������һ������:>");
//	scanf("%d", &num);
//	if ((0 == num % 5) && (0 == num % 3))
//	{
//		printf("�ܱ�3��5ͬʱ����\n");
//	}
//	else
//	{
//		printf("���ܱ�3��5ͬʱ����\n");
//	}
//	return 0;
//}

//int main()//���������α߳�a  b  c����������
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	while (1)//���ж������ߵĺϷ���
//	{
//		printf("���������������߱߳�:>");
//		scanf("%lf%lf%lf", &a, &b, &c);
//		if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
//		{
//			break;
//		}
//		else
//		{
//			printf("�����α߳��Ƿ�������������!\n");
//		}
//	}
//	double p = (a + b + c) / 2;
//	double area = sqrt(p*(p - a)*(p - b)*(p - c));//���׹�ʽ
//	printf("���������Ϊ:>%lf", area);
//	return 0;
//}
//double len(int xa, int ya, int xb, int yb)
//{
//	return sqrt(pow(xa - xb,2)+ pow(ya - yb,2));
//}
//
//int main()//����������3������ ��������(���ú��׹�ʽ)
//{
//	double a, b, c;
//	while (1)//�жϼ�����߳����ж�����Ϸ��� 
//	{
//		int xa = 0;
//		int ya = 0;
//		printf("������a�ĺ�������");
//		scanf("%d%d", &xa, &ya);
//		int xb = 0;
//		int yb = 0;
//		printf("������b�ĺ�������");
//		scanf("%d%d", &xb, &yb);
//		int xc = 0;
//		int yc = 0;
//		printf("������c�ĺ�������");
//		scanf("%d%d", &xc, &yc);
//		 a = len(xa, ya, xb, yb);//������������������
//		 b = len(xb, yb, xc, yc);
//		 c = len(xc, yc, xa, ya);
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			break;
//		}
//		else
//		{
//			printf("����Ƿ�������������\n");
//		}
//	}
//	double p = (a + b + c) / 2;
//	double area = sqrt(p*(p - a)*(p - b)*(p-c));//���׹�ʽ
//	printf("���������Ϊ%lf\n", area);
//	return 0;
//}

//int main()//��������ʽ�����������
//{
//	int x1, x2, x3, y1, y2, y3;
//	printf("����������x1 x2 x3 y1 y2 y3:>");
//	scanf("%d%d%d%d%d%d", &x1, &x2, &x3, &y1, &y2, &y3);
//	double area = ((x3*y1) + (x2*y3) + (x1*y2) - (x1*y3) - (x2*y1) - (x3*y2))/2.0;
//	printf("���Ϊ%lf", area);
//	return 0;
//}

//int main()//����ϵͳ
//{
//	int score = 0;
//	while (1)
//	{
//		printf("���������:>");
//		scanf("%d", &score);
//		if ((score >= 0) && (score <= 100))
//		{
//			break;
//		}
//		else
//		{
//			printf("�������磬����������\n");
//		}
//	}
//	if (score > 90)
//	{
//		printf("A\n");
//	}
//	else if (score >= 80)
//	{
//		printf("B\n");
//	}
//	else if (score >= 70)
//	{
//		printf("C\n");
//	}
//	else if (score >= 60)
//	{
//		printf("D\n");
//	}
//	else
//	{
//		printf("E\n");
//	}
//	return 0;
//}


//int main()//����ϵͳ�ο��� ��switch���򻯴���
//{
//	int num = 0;
//	scanf("%d", &num);
//	swicth(num / 10)
//	{
//		case 10:
//		case 9:
//			printf("A\n");
//			break;
//			case
//
//	}
//	return 0;
//}

//int main()//��2��0���ݵ�2��n����
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	printf("������n:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", sum);
//		sum *= 2;
//	}
//	return 0;
//}
//#define N 19
//int main()//2��N���ݲο���
//{
//	int n;
//	int val = 1;
//
//	printf("\t  n  \t   2^n\n");
//	printf("\t=================\n");
//	for (n = 0; n <= N; n++)
//	{
//		printf("\t%3d \t %6d\n", n, val);
//		val = 2 * val;
//	}
//
//	return 0;
//}

int Is_prime(int num)
{
	int i;
	if (1 == num)
	{
		printf("��������\n");
	}
	else
	{
		for (i = 2; i <= sqrt(num); i++)
		{
			if (0 == num%i)
			{
				return 0;
				break;
			}
		}
		return 1;
	}
}

//int main()//���2��200������
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i <= 200; i++)
//	{
//		if ((2 == i) && (3 == i))
//			printf("%d ", i);
//		else
//		{
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (0 == i%j)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(i))
//			{
//				printf("%d ", i);
//			}
//		}
//
//	}
//	return 0;
//}

//

//int main()//n���׳˵��ۼ�
//{
//	int i = 0;
//	int add = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		add *= i;
//		sum += add;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//��e��ֵ
//{
//	double sum = 1;//ֻ��double���Ͳ��ܴ��С��
//	int i = 0;
//	long long add = 1;//Ҫ��add��ֵ����10��10�η� ��ʹ��int�������������
//	for (i = 1; ; i++)
//	{
//		add *=i;
//		sum +=(1.0/add);
//		if (add > 1e10)
//		{
//			break;
//		}
//	}
//	printf("e=%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	float e = 1.0, n = 1.0;
//	int i = 1;
//	while (1 / n > 1E-10)
//	{
//		e += 1 / n;
//		i++;
//		n = i*n;
//	}
//	printf("e��ֵ�ǣ�%lf\n", e);
//	return 0;
//}
//

//int main()//strcopy������ʹ��
//{
//	char arr1[] = "love your mother";
//	char arr2[] = "fuck you";
//	strcpy(arr1, arr2);//����һΪ�����ַ��� ������Ϊ�������ַ���
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* arr1, char* arr2)//6�ֵĴ���
//{
//	int i = 0;
//	while (arr2[i] != '\0')
//	{
//		arr1[i] = arr2[i];
//		i++;
//	}
//	arr1[i] = arr2[i];
//}

//void my_strcpy(char* arr1,char* arr2)
//{
//
//	while (*arr1++ = *arr2++)//7�ִ��� ���Ӽ��
//	{
//		;
//	}
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//
//	if (arr1 != NULL&&arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)//�����Ż� �����˲���Ϊ��ָ�������
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//		while (*arr1++ = *arr2++)//8�ִ��� ��ָ��Ϊ����ʱ����ᱨ��
//		{
//			;
//		}
//}
//
//int main()//my_strcpy����
//{
//	char arr1[] = "son of bitch";
//	char arr2[] = "hoho";
//	my_strcpy(NULL, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()//��const���εĳ������н����õĽ��
//{
//	const int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);//20 const���εĳ�����û�����Ƶ�ָ��
//	return 0;
//}

//��ô��ζ�����ָ�� �Լ�const����ָ����ʲô��˼

//int main()//const����ָ�������*�����ʱ
//{
//	int num = 10;
//	const int* p = &num;
//	*p = 20;//��ʾ*p���ɱ��޸�
//	return 0;
//}

//int main()////��������
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	return 0;
//}

//int main()//��const����ָ�������*���ұ�ʱ
//{
//	int num = 10;
//	int * const p=&num ;
//	int a = 20;
//	p = &a;//p�Ĳ�����
//	return 0;
//}

//int main()////��������
//{
//	int num = 10;
//	int* p = &num;
//	int a = 20;
//	p = &a;
//	return 0;
//}

//

//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++ )
//	{
//		count++;
//	}
//	return count;
//}
//int main()//ģ��ʵ��һ�����ֵ�strlen
//{
//	char arr[] = "fuck you";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}

//int main()//int const * p��const int* p�ȼ�
//{
//	int a = 10;
//	int const * p = &a;
//	*p = 20;
//	return 0;
//}

//int my_strlen(const char* arr)//my_strlen�Ż��� const��ֹ�������޸�
//{
//	assert(arr != NULL);//�жϲ����Ƿ�Ϊ��ָ��
//	int count = 0;
//	while (*arr++)//��*arr����'\0'ʱ������ѭ�� ��ָ����һ��Ԫ��
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "sb";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* tmp = arr1;
//	assert((arr1 != NULL) && (arr2 != NULL));//���Բ������ǿ�ָ��
//	while (*arr1++ = *arr2++)//��arr2���ַ�����arr1 ����⵽*arr2Ϊ'\0'ʱ ���Ƹ�arr1  ������while
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[] = "fuck your mother";
//	char arr2[] = "i love you";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//void swap(int* arr,const int sz)//ʵ��һ������ ������������������������ǰ�벿�� ż����������ĺ�벿��
//{
//	assert(arr != NULL);//����ָ����Ч��
//	//1.�ȼ���±�Ϊn��Ԫ��Ϊ�Ƿ�Ϊ���� �������� ֱ�Ӽ����һ��Ԫ��
//	//2����������� ��������Ԫ���Ƿ�Ϊ���� ������������ ����жԻ� ��������һ��Ԫ�صļ��
//	//3��һ�ּ�ⶼû�з������� ���������Ѿ�������ǰ�벿�� ����ֹͣ
//	int n = 0;
//	for (n = 0; n < sz-1; n++)//�����׸����Ԫ�ص��±�
//	{
//		if (1==arr[n]%2)//�������� �������κβ��� ֱ�Ӽ����һ��Ԫ��
//		{
//			;
//		}
//		else
//		{
//			int flag = 1;//Ĭ�����б�����Ԫ�ض���ż��
//			int c = 0;//�����������Ƚ�Ԫ�ص��±� 
//			for (c = n + 1; c < sz ; c++)
//			{
//				if (1 == arr[c] % 2)
//				{
//					int tmp = arr[n];
//					arr[n] = arr[c];
//					arr[c] = tmp;
//					flag = 0;
//					break;
//				}
//			}
//			if (1 == flag)
//			{
//				break;
//			}
//		}
//	}
//}

//void swap(int* arr, int sz)//����ʦ���㷨 �������һ��ż�� �ұ���һ������ ���н��� �����Ӿͽ���������Ŀ��Ҫ����˵
//{//���Ӹ�Ч ��Ϊ����Ĵ���������
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//

//int main()//�����洢��������ʽ���������
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}

//

//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	printf("please input 10 numbers:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int s = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (s < a[i])
//		{
//			s = a[i];
//		}
//	}
//	printf("%d is the biggest number!\n",s);
//	return 0;
//}

//int check_system()//�Դ�С�˽��м�⹦�ܵķ�װ
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_system();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()//����������ϰ1
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d\n",a,b,c);//-1 -1 255 �漰���ضϺ�����������֪ʶ��
//	return 0;
//}

//int main()//����������ϰ2
//{
//	char a = -128;
//	char b = 128;
//	printf("%u\n", a);//���޷�����ʽ��ӡ ���4294967168
//	printf("%u\n", b);//���ڽضϺ�a b�Ĳ�������ͬ�� ��˽��������һ��
//	return 0;
//}

//int main()//����������ϰ3
//{
//	unsigned int i = 9;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//���Ϊ��ѭ��
//	}
//	return 0;
//}

//int main()//����������ϰ4
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));
//	return 0;
//}

//int main()//������ȫ1��һ��1��ӵĽ����ʲô
//{
//	int i = 1;
//	int j = -1;
//	int k = i + j;
//	printf("%d\n", k);//��������ֵΪȫ�� �Ʋ���ܶ��������п��ܲ�������չ����λ
//	return 0;
//}

//int main()
//{
//	double a = 1E10;//1��ʮ�η�
//	printf("%lf\n", a);
//	return 0;
//}

//int main()//֤�������ͺ͸��������ڴ��д洢��ʽ�Ĳ�ͬ
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ:%d\n",n);//9
//	printf("*pFloat��ֵΪ:%f\n",*pFloat);//0
//	
//	*pFloat = 9.0;
//	printf("num��ֵΪ:%d\n", n);//�ܴ����
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);//9.0
//	return 0;
//}

//int main()//�鿴���������ڴ��еĴ洢��ʽ
//{
//	float f = 5.5;//0x 00 00 b0 40(С���ֽ���洢ģʽ)
//	return 0;
//}

//int main()//�ַ�ָ��
//{
//	char* p = "abcdef";//�����ַ���  �����ǿ���ֱ�Ӷ����
//	*p = 'c';
//	printf("%c\n", *p);//a  ˵��p��ŵ�����Ԫ�صĵ�ַ
//	printf("%s\n", p);//abcdef
//	return 0;
//}

//

//int main()//��ӡָ�������е�Ԫ����ָ�������
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//
//void printf1(int arr[3][5], int x, int y)//�Ѷ�ά�������Ԫ�ص�ַ����ȥ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr+i)+j));//˵�����ߵȼ� ֻ����ʽ��ͬ 
//		}
//		printf("\n");
//	}
//}
//void printf2(int(*p)[5],int x,int y)//��arr����1ά���� �ѵ�һ�е�����ĵ�ֱַ�Ӵ���ȥ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	printf1(arr,3,5);//�ö�ά������ӽ�ȥ��ӡarr
//	printf2(arr,3,5);//��һά������ӽ�ȥ��ӡarr
//	return 0;
//}

int main()
{
	int i;
	for (i = 10; i < 1000; i++)
	{
		if (Is_prime(i) == 1)
		{
			if (i / 10 == i % 10)
			{
				printf("%5d", i);
			}
			if (i % 5 == 0)
			{
				printf("\n");
			}
		}
		else
		{
			if (i / 100 == i % 10)
			{
				printf("%5d", i);
			}
			if (i % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}