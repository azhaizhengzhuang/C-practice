#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//sizeof���Դ���
//{
//	short a = 0;
//	int b = 10;
//	printf("%d\n", sizeof(a = 5 + b));
//	printf("%d\n", a);//2 0
//	return 0;//1.��ֵ��ѭ�������� 2.sizeof��ı��ʽ���ᷢ����ʵ����
//}

//int main()//��Ŀ��������λȡ��~���Դ���
//{
//	int a = 0;
//	printf("%d\n", ~a);//�����һ�����ڰ�λȡ���󣬷���λΪ1�����벻��һ��
//}

//

//int main()//������ǰ��++�ͺ���++
//{
//	int a = 10;
//	int b = 10;
//	printf("a=%d\n", ++a);
//	printf("b=%d\n", a++);
//	return 0;
//}

//

//int main()//�߼���������� �߼������������� ����ߵ�ֵΪ0���ұ߱㲻���ټ�����
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("%d %d %d %d ", a, b, c, d);//���Ϊ1 2 3 4
//	return 0;
//}

//int main()//�����ǵ�������ı����� �߼��������������� �����㵽ֵΪ1��ʽ�Ӻ� �㲻�ټ���
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("%d %d %d %d", a, b, c, d);//���Ϊ2 2 3 4
//	return 0;
//}

//

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = (a = a + b, a - b, b -= 10);
//	printf("%d\n", c);
//	return 0;
//}

//

//int main()//��ʽ����ת�����Դ���(�ضϺ���������)
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);//���Ϊ-126 Ϊ�Σ�
//	return 0;
//}

//int main()//֤�����������Ĵ���
//{
//	char a = 0xb6;//0x��ʮ�����Ƶ������ı����ʽ
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)//���Ϊc
//		printf("c");
//	return 0;
//}

//int main()//����������ʲô��������ֵĲ��Դ���
//{
//	char a = 0;
//	char b = 0;
//	printf("%u\n", sizeof(a));
//	printf("%u\n", sizeof(+a));
//	printf("%u\n", sizeof(-a));
//	printf("%u\n", sizeof(a*b));
//	printf("%u\n", sizeof(a%b));
//	printf("%u\n", sizeof(a/b));
//	printf("%u\n", sizeof(++a));
//	printf("%u\n", sizeof(a+=1));
//	printf("%u\n", sizeof(a=1));
//	printf("%u\n", sizeof(a&b));
//	printf("%u\n", sizeof(!a));
//	printf("%u\n", sizeof(~a));
//	printf("%u\n", sizeof(a>>1));
//	printf("%u\n", sizeof(a>b));
//	printf("%d\n", !a);
//	return 0;
//
//}

//int main()//��ͬ���͵�ָ�붼����ָ��ͬһ����ַ
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pc);//ָ�����Ͳ����ݣ��ᱨ���棨�ӡ�int *������char *�������Ͳ����ݣ�
//	return 0;
//}

//int main()//�Բ�ͬ��ָ�����ͽ��н����ò���
//{
//	int a = 0x11223344;
//	//int* pa = &a;//��intָ����н����ò�����Ŀ��ֵ�ı���4���ֽ�
//	//char* pa = &a;//charָ�������֮��Ŀ��ֵֻ�ı���һ���ֽ�
//	//*pa = 0;
//	return 0;
//}

//int main()//ָ������;�����ָ��Ĳ���
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//����ָ���һ��Ϊ4����ַ��һ����ַռһ���ڴ棬һ���ڴ�ռ1�ֽڣ�������ָ��Ĳ���Ϊ4�ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//�ַ�ָ��Ĳ���Ϊ1���ֽ�
//	return 0;
//}

//

//int main()//ָ��δ��ʼ����Ұָ��
//{
//	int* p;
//	*p = 10;
//	return 0;
//}

int main()//�±�Խ���Ұָ�� �������
{
	int a[10] = { 0 };
	int i = 0;
	int* p = &a;
	for (i = 0; i < 12; i++)
	{
		*p = 1;
		p++;
	}
	return 0;
}
