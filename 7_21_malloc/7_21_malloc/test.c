#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()//malloc������
//{
//	int* p = (int*)malloc(10 * sizeof(int));//���������10�����οռ� �ռ��е�����Ϊ���ֵ
//	//int* p = (int*)malloc(INT_MAX);//��������뼫��Ŀռ�
//	if (NULL == p)
//	{
//		//����ʧ�ܵ����
//		printf("%s\n", strerror(errno));//�����Not enough space
//	}
//	else
//	{
//		//�������ٵ����
//		//Ϊ���ٵĶ�̬�ռ���и�ֵ
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//������Ϊ0����9
//		}
//	}
//	//��ʹ����Ķ�̬�ռ�����ͷ� ������Ч�Ŀռ�ռ��
//	free(p);
//	//�ͷ���ָ����ָ��Ķ�̬�ڴ�� ��ָ�벢û�б�ɿ�ָ�� Ϊ�˱����Ұָ��Ľ����� ��ָ����Ϊ��ָ��
//	p = NULL;
//	return 0;
//}

//int main()//calloc������
//{
//	int* p = (int*)calloc(10, sizeof(int));//���������10�����ζ�̬�ڴ�ռ� �������е�ֵ��ʼ��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else//������ʼ�� ֱ�ӶԿ��ٵĶ�̬�ڴ�ռ��������������ʽ���д�ӡ
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//���Ϊ10��0
//		}
//		printf("\n");
//	}
//	//��ʹ���꿪�ٵĶ�̬�ڴ�ռ�� �ͷŸÿռ� ����ָ��̬�ڴ�ռ��ָ����Ϊ��
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()//realloc������
//{
//	int* p = (int*)calloc(10, sizeof(int));//���������10�����ζ�̬�ڴ�ռ� �������е�ֵ��ʼ��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else//������ʼ�� ֱ�ӶԿ��ٵĶ�̬�ڴ�ռ��������������ʽ���д�ӡ
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//���Ϊ10��0
//		}
//		printf("\n");
//	}
//	//reallocʵ������ʱ�������������
//	//���һ ��ԭ�ڴ����ڴ��㹻׷�� realloc��ֱ����ԭ�ڴ��׷���ڴ� �����ؾ��ڴ��ַ
//    //����� ���ڴ�����Ŀռ䲻��ʱ realloc��������һ���µ��ڴ棬���Ѿ��ڴ��е����ݿ��������ڴ��У��ͷž��ڴ棬 ��󷵻����ڴ��ָ��
//	//����� ����ָ����׷�ӵ��ֽڳ����ڴ������ ����ʧ�� �򷵻ؿ�ָ��
//    //��� �������Ϊ����һ���µı�������realloc�ķ���ֵ ��ֹ���ڴ��ַ������
//	int* ptr=(int*)ealloc(p, INT_MAX);
//	if (!ptr)
//	{
//		p = ptr;
//		//׷�ӳɹ����һϵ�в���
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	while (1)//�����ٵĶ�̬�ڴ治���� �ᵼ���ڴ�й©���ڴ�������ռ�� ֱ�������������
//	{
//		malloc(1);
//	}
//	return 0;
//}

//��̬�ڴ������������1
//�ʣ�ִ�н����
//�𣺽��Ϊ�������
//��������1���ڴ�й©��û�жԶ�̬���ٵ��ڴ�����ͷ� ���Ҳ�����̬�����ڴ��λ���ˣ�
//��������2���Կ�ָ��Ľ����ã�GetMemoryʹ�õ��Ǵ�ֵ���� �ڳ��˺���֮����ʽ���������� û��ֱ�����õ�ʵ�ʲ���str�� ����str��Ȼ��NULL ֮���strʹ����strcpy�����ͶԿ�ָ������˽����� �����˳���ı�����
//�����������GetMemory�ĵ��÷�ʽ��Ϊ��ַ����

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello mother");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}

//�Ľ�����1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello mother");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//�Ľ�����2
//char* GetMemory(char* p)
//{
//	return p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char *str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello mother");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory()
//{
//	char p[] = "abc";//���򱨴� ������ʱ������ֵ ��ѡ�������Ϊ��static���α���
//	return p;
//}
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//

//��������
//д��1 ����ʽ
//struct S 
//{
//	int a;
//	int arr[0];
//};
//
//int main()
//{
//	struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	return 0;
//}

//д��2 ����ʽ
struct S
{
	int a;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5 * sizeof(int));
	int i;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);//������Ϊ0��4
	}
	printf("\n");
	//������������Ĵ�С
	realloc(ps->arr, sizeof(int) * 10);
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);//������Ϊ0��9
	}
	printf("\n");
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}