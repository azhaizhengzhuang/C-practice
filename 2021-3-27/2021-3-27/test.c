#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//void menu()
//{
//	printf("\n******************************************************\n");
//	printf("****        1.play                   0.exit       ****\n");
//	printf("******************************************************\n");
//
//}
//void game()
//{
//	int number = rand()%100+1;//number��ֵ1��100���������
//	int guess = 0;
//	printf("������:");
//	while (1)
//	{
//		printf("������һ��1��100֮������֣�\n");//��cscanf����ѭ���⣬������޴εĴ�ӡ���´��ˡ��򡰲�С�ˡ���ԭ����û��scanf()������ѭ����ͣ����
//		scanf("%d", &guess);
//		if (guess > number)
//		{
//			printf("�´���\n");
//
//		}
//		else if (guess < number)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�����¶���!");
//				break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ���������α�����������㣬�������������Ҫ����һ�����ʱ�����
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����������ѡ��");
//			break;
//			
//		}
//	} while (input);
//	printf("��Ϸ����\n");
//	return 0;
//}

//int main()
//{
//	goto again;//����again���
//	printf("hehe\n");
//again:
//	printf("haha\n");
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t ");60 //�õ�����60s�ڹػ�
//again:
//	printf("���������һ����֮�ڹػ������������������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������" == 0))
//	{
//		system("shutdown -a");//ȡ���ػ�����
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//�����½�


//int main()//�⺯��strcpy����������
//{
//	char arr1[20] = { "hehehehehehehehe" };
//	char arr2[20] = { "hahahahaha" };
//	strcpy(arr1, arr2);//��������0����arr2���ַ�����arr1
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world" ;
//	memset(arr, '*', 5);//���ַ���arr��ǰ����ַ��滻��*
//	printf("%s\n", arr);
//	return 0;
//}

//int getmax(int x, int y)//���ú���ȥʵ�ַ����������νϴ�ֵ
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a, b,large;
//	large = getmax(11,getmax(1,13));
//	printf("%d", large);
//	return 0;
//}

//void swap1(int x, int y)//���ڼ�������x,y�����������ڴ�ռ䣬�����ڲ�ʵ����ʵ�ֵ���x y��ַ���ŵ�ֵ�ý�������ab�޹أ���������������������ڵ��͵Ĵ�ֵ����
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//int main()//ͨ������ʵ��ab��ֵ�����Ĺ���
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("%d %d\n",a,b);
//	return 0;
//}

//int main()//ָ��عˣ�
//{
//	int a = 10;
//	int* pa = &a;//&a:��a����ȡ��ַ����32λƽ̨�У��κα����ĵ�ַ����һ��16�����������32�����������е�ֵ��paָ�����������ŵ�ַ��int*��pa�ı�������
//	*pa = 20;//��a���н����ò�������ͨ��pa������ŵĵ�ַ�ҵ�pa��ָ���a�������ò����󣬸�a��ֵ20�����仰˵��֪����ҵ�ַ�ˣ����ϵ�����ſ�
//	printf("a=%d\n", a);
//	return 0;
//}

//void swap2(int* x, int* y)//����������swap1���Ż�,���͵Ĵ�ַ����
//{
//	int tmp = 0;
//	tmp = *x;//�����ò�������򵥵Ļ�˵���ǣ����ϵ�����ſ�
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	swap2(pa, pb);
//	printf("a=%d,b=%d\n", a,b);
//	return 0;
//}