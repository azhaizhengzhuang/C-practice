#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//void print_prime(int num)//һ���жϲ���������ĺ���
//{
//	int i = 0;
//	if (num < 5)
//	{
//		if ((num == 2) || (num == 3))
//
//		{
//			printf("%d ", num);
//		}
//	}
//	else
//	{
//		for (i = 2; i <= sqrt(num); i++)
//		{
//			if (0 == num%i)
//			{
//				break;
//			}
//		}
//		if (i > sqrt(num))
//		{
//			printf("%d ", num);
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 199; i+=2)
//	{
//		print_prime(i);
//	}
//	return 0;
//}


//int Is_leap_year(int num)//�ж������ǲ�������ĺ��� 
//{
//	if (num < 0)
//	{
//		num = -num;
//	}
//	if (((0 == num % 4) && (num % 100 != 0)) || (0 == num % 400))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int i = 0;
//	printf("������һ����ݣ�>");
//	scanf("%d", &year);
//	int flag=Is_leap_year(year);
//	if (flag)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//

//void print_mul_table(int i)//���һ�����Կ������еĳ˷���
//{
//	int j = 0;
//	int k = 0;
//	for (j = 1; j <= i; j++)
//	{
//		for (k = 1; k <= j; k++)
//		{
//			int mul = j*k;
//			printf("%2d *%2d =%3d ", j, k, mul);
//		}
//		printf("\n\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	printf("������һ����λ���ĳ˷��������:>");
//	scanf("%d", &i);//����������ȡ��ַ
//	print_mul_table(i);
//	return 0;
//}

//void print(int num)//�õݹ鷽ʽ��ӡ�����е�ÿһλ
//{
//	if (num < 0)
//	{
//		num = -num;
//	}
//	if (num)
//	{
//		print(num / 10);
//		printf("%d ", num % 10);
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int fac(int num)//�÷ǵݹ�ķ�ʽ��׳�
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= num; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}

//

int my_strlen(char* arr)//�÷ǵݹ�ʵ��strlen
{
	int i = 0;
	while (*(arr + i) != '\0')
	{
		i++;
	}
	return i ;
}

//int DigitSum(int num)//��һ����������λ���ĺ�
//{
//	
//	if (num)
//	{
//		return num % 10 + DigitSum(num/10);
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum=DigitSum(num);
//	printf("%d\n",sum);
//	return 0;
//}

//

//int feb(int a)//�÷ǵݹ�ķ�ʽ���n��쳲������� Ч�ʽϸ�
//{
//	int x = 1;
//	int y = 1;
//	int z = 2;
//	int i = 0;
//	for (i = 1; i < a; i++)
//	{
//		x = y;
//		y = z;
//		z = x + y;
//
//	}
//	return x;
//}

//int feb(int a)//�ݹ�ķ�ʽʵ��쳲�������
//{
//	if (a == 1 || a == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return feb(a - 1) + feb(a - 2);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	printf("�ڼ���쳲���������:>");
//	scanf("%d", &i);
//	int num=feb(i);
//	printf("%d\n", num);
//	return 0;
//}

//void reverse_string(char* string)//��߿���ͨ���±�ֱ�ӷ��ʵ� ����������
//{
//	int sz = my_strlen(string)-1;
//	char temp = *(string);
//	*(string) = *(string + sz);
//	*(string + sz) = '\0';//�ٶ�������sz-1�������һ���ݹ飬�Ա��ڶ�����Ԫ��
//	if (*(string + 1) != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	*(string+sz) = temp;//����ֵ����Ԫ��
//}
//
//int main()
//{
//	char string[] = "haha";
//	reverse_string(string);
//	int sz = sizeof(string) / sizeof(string[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", string[i]);
//	}
//	return 0;
//}

int power(int x, int y)
{

	if (y <= 0)
	{
		return 1/x*power(x,y+1);

	}
	if (y > 1)
	{
		return x*power(x, y - 1);
	}
	return x;

}
//
//int main()//֮ǰд��n��k�η�û�п���kС�ڵ���0����� ������дһ��
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret=power(n, k);
//	printf("%fl\n", ret);
//	return 0;
//}

//void reverse_string(char* arr)//��дһ���ַ���������
//{
//	int len = my_strlen(arr)-1;
//	char tmp = arr[0];
//	arr[0] = arr[len];
//	arr[len] = '\0';
//	if (len >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len] = tmp;
//}
//
//int main()
//{
//	char arr[256];
//	//gets(arr);//�����ַ��� Ҫ����ͷ�ļ�<stdio.h> �����ո�ֹͣ
//	scanf("%s", arr);//�����ո��ֹͣ
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()//Sn=a+aa+aaa+aaaa+aaaaa;a��һ������
//{
//	int a = 0;
//	int i = 1;
//	while (1)
//	{
//		printf("������һ��1��9֮�������:>");
//		scanf("%d", &a);
//		if (a > 0 && a < 10)
//		{
//			break;
//		}
//		printf("�������\n");
//	}
//	int sum = a;
//	int num = a;
//	for (i = 1; i < 5; i++)
//	{
//		num += (a*pow(10,i));
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()//��껭ʦ
//{
//	printf("            *            \n\n");
//	printf("          * * *          \n\n");
//	printf("        * * * * *        \n\n");
//	printf("      * * * * * * *      \n\n");
//	printf("    * * * * * * * * *    \n\n");
//	printf("  * * * * * * * * * * *  \n\n");
//	printf("* * * * * * * * * * * * *\n\n");
//	printf("  * * * * * * * * * * *  \n\n");
//	printf("    * * * * * * * * *    \n\n");
//	printf("      * * * * * * *      \n\n");
//	printf("        * * * * *        \n\n");
//	printf("          * * *          \n\n");
//	printf("            *            \n\n");
//	return 0;
//
//}

//int main()//��껭ʦ���� ����һ�����������Զ���ӡ
//{
//	int line = 0;//����ͼ�ε�����
//	printf("�붨��ͼ�ε�������>");
//	scanf("%d", &line);
//	printf("ͼ�Σ�\n\n\n\n\n");
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int half = line / 2;
//	for (i = half; i > 0; i--)//�ϰ벿�ִ�ӡ
//	{
//		for (j = i; j > 0; j--)//��ӡ�ո�
//		{
//			printf("  ");
//		}
//		printf("* ");//��ӡ������
//		for (j=i;j<half;j++)//ѭ��ֻ�����ظ������� ���ֻ�Ѹı�Ĳ��ַ���ѭ���弴�� �ı�Ĳ���Ϊÿһ�ж��ӡ* *//�����forд�����ұո��������һ��
//		{
//			printf("* * ");
//		}
//		printf("\n\n");
//	}
//	for (i = 0; i < line; i++)//��ӡ�м��ֵ
//	{
//		printf("* ");
//	}
//	printf("\n\n");
//	for (i = half; i > 0; i--)//�°벿�ִ�ӡ
//	{
//		for (j = i-1; j <half; j++)//��ӡ�ո�
//		{
//			printf("  ");
//		}
//		printf("* ");//��ӡ������
//		for (j = i-1; j>0; j--)//ѭ��ֻ�����ظ������� ���ֻ�Ѹı�Ĳ��ַ���ѭ���弴�� �ı�Ĳ���Ϊÿһ���ٴ�ӡ* *
//		{
//			printf("* * ");
//		}
//		printf("\n\n");
//	}
//	printf("\n\n\n\n\n\n");
//	return 0;
//}

//int digit(int num)//������һ����������ʮ����λ��
//{
//	int digit = 0;
//	if (0 == num)
//	{
//		return 1;
//	}
//	else
//	{
//		while (num)
//		{
//			num /= 10;
//			digit++;
//		}
//	}
//	return digit;
//
//}
//
//int main()//0��10���ˮ�ɻ��� ʹ����ģ����֮�� ����Ҳ���Ǻ���
//{
//	printf("0��10��ˮ�ɻ�����>");
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int j=i;//�ñ������洢i��ֵ�������������
//		int sum = 0;
//		int dig = digit(i);
//		while (j)
//		{
//			sum += pow(j%10, dig);
//			j /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("%d\n", sizeof(++i));//����sizeof���ֵ�᲻�ᷢ����ʵ����
//	printf("%d\n", i);//���Ϊ0 sizeof���ֵȷʵ��������ʵ����
//	return 0;
//}

//int main()//����һ�����ұյ�for�����ʦ���õĴ�ӡ������ҵ ����һ��ܺõ�ѭ��ѵ���� �������������ұյ���Ҫ�� Խ�Ǹ��ӵ���Ŀ ��Щ�����Ķ���Խ����
//{
//	//1.��ӡ�ϰ벿��
//	int row = 0;
//	printf("����������������:");// ż������ʲô�����Ϊʲô�� ���һ�� ��������6 ��ӡ7 ԭ�����ϰ벿�ֻ����ģ����һ ���ԭ����һ�� ��ʦ��ֻ�����ϰ벿���򲻻���̫������
//	scanf("%d", &row);
//	int h = (row / 2)+1;
//	int i = 0;
//	for (i = 0; i < h; i++)
//	{
//		//1.1��ӡ�ո񲿷�
//		int j = 0;
//		for (j = 0; j <h-i-1; j++)//�����ұ�дfor��������
//		{
//			printf(" ");
//		}
//		//1.2��ӡ���ǲ���
//		for (j = 0; j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <h-1; i++)
//	{
//		//2.��ӡ�°벿��
//		//2.1��ӡ�ո񲿷�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//2.2��ӡ���ǲ���
//		for (j = 0; j <row-2-i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//typedef struct Stu
//{
//	char name[10];
//	short age;
//}Stu;//��typedef���¶���ṹ���������
//
//struct S
//{
//	char arr[20];//�����Ա
//	Stu s;//�ṹ����Ϊ�ṹ���Ա���������
//	char* p;//ָ���Ա
//};
//
//int main()
//{
//	struct Stu s1 = {"����",19};//��ԭ��������ʼ������
//	Stu s2 = {"����",20};//���ض������������ʼ��
//	char arr[] = "fuck you";
//	struct S s11= { "1122", { "duck", 19 }, arr };//�ṹ���Ƕ�׳�ʼ����
//	printf("%s\n", s11.s.name);//Ƕ�׷��ʽṹ���Ա duck
//	return 0;
//}

//typedef struct Stu//�ṹ��Ҫ������ǰ��
//{
//	char name[20];
//	short age;
//}Stu;
//
//void print_Stu1(Stu tmp)
//{
//	printf("name:%s\nage:%d\n", tmp.name, tmp.age);
//}
//
//void print_Stu2(Stu* tmp)//����ѡ��ַ���ýṹ�� ϵͳ������С
//{
//	printf("name:%s\nage:%d\n", tmp->name, tmp->age);//���ü�ͷ������
//}
//
//int main()
//{
//	Stu s1 = { "����", 10 };
//	print_Stu1(s1);//���ڴ�ӡStu��Ա�ĺ��� ʹ�ýṹ��������Ϊ��������
//	print_Stu2(&s1);//��ַ���� �ṹ��ָ����Ϊ����
//	return 0;
//}