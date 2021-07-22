#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//int main()//测试代码 用代码创建一个二进制文件  
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		Sleep(1000);
//		printf("hehe");
//	}
//	FILE
//	return 0;
//}
#include<string.h>
#include<errno.h>
//int main()//打开和关闭文件
//{
//	FILE* pf=fopen("test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//文件读写
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}

//顺序读写

//int main()//字符输出函数
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (!pfWrite)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//顺序put
//	fputc('s', pfWrite);
//	fputc('h', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	 pfWrite) = NULL;
//	return 0;
//
//}

//int main()//字符输入函数（文件输入输出流）
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (!pfRead)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//顺序get
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//
//}

//int main()//字符输入输出函数（标准输入输出流）
//{
//	int ch = fgetc(stdin);//键盘向内存输入字符
//	fputc(ch, stdout);//将内存中的ch字符输出到屏幕上
//	return 0;
//}

//int main()//fgets的使用
//{
//	char buf[1024] = { 0 };//用于接受fget函数的返回值
//	//用只读模式打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读三行
//	//注：puts打印时自带换行
//	puts(fgets(buf, 1024, pf));
//	puts(fgets(buf, 1024, pf));
//	puts(fgets(buf, 1024, pf));
//    //关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()//fputs的使用
//{
//	char buf[1024] = { 0 };//用于接受fget函数的返回值
//	//用只写模式打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件 写的时候得自己换行
//	fputs("I am sorry.\n", pf);
//	fputs("I love you.\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//把fgets和fputs应用于标准输入输出流
//int main()
//{
//	char buf[1024] = { 0 };
//	/*fgets(buf, 1024, stdin);
//	fputs(buf,stdout);*/
//    //等价与
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//格式化输入输出函数（fscanf和fprintf）

//fprintf
struct S
{
	char c;
	int i;
	float f;
};

//int main()
//{
//	struct S s = { 'a', 10000, 3.14f };//浮点数默认为double型 因此使用了f把其转为float
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//格式化输出到文件流
//	fprintf(pf, "%c %d %f",s.c,s.i,s.f );
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = {0};//浮点数默认为double型 因此使用了f把其转为float
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//格式化输入
//	fscanf(pf, "%c %d %f", &(s.c), &(s.i), &(s.f));
//	printf("%c %d %f", s.c, s.i, s.f);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

typedef struct Stu
{
	char name[20];
	int age;
	char sex[6];
}Stu;
//sprintf和sscanf(与文件操作无直接关系 为了和前面的函数区分)
//int main()
//{
//	Stu s1 = { "xiaoming", 8, "male" };
//	Stu s2 = { 0 };
//	char buf[1024] = { 0 };
//	sprintf(buf, "%s %d %s", s1.name, s1.age, s1.sex);//把内存中的数据按格式化存储到指定字符串 （因为一切输入输出以内存为主语）
//	sscanf(buf, "%s %d %s", s2.name, &(s2.age), s2.sex);//把字符串中的数据按格式化存储到内存指定位置
//	printf("%s %d %s", s2.name, s2.age, s2.sex);
//	return 0;
//}

//fread和fwrite的使用（二进制输入输出函数）
//fwrite
//int main()
//{
//	Stu s1 = { "小明", 18, "male" };
//	FILE* pf=fopen("test.txt", "wb");//写二进制格式
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fwrite(&s1, sizeof(Stu), 1, pf);//把Stu结构体按二进制形式输出到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//fread
int main()
{
	//Stu s1 = { "小明", 18, "male" };
	Stu s2 = { 0 };
	FILE* pf = fopen("test.txt", "rb");//读二进制文件
	if (!pf)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fread(&s2, sizeof(Stu), 1, pf);//把Stu结构体按二进制形式输入到文件中
	printf("%s %d %s", s2.name, s2.age, s2.sex);
	fclose(pf);
	pf = NULL;
	return 0;
}