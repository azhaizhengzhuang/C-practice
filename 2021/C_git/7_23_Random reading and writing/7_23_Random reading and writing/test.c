#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//随机读写文件
//feek ftell rewind
//int main()
//{
//	//1打开文件 
//	FILE*  pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//随机读写
//	//2.1指针偏移
//	fseek(pf, -2, SEEK_END);
//	//2.2读写
//	printf("pos=%d\n", ftell(pf));
//	char ch=fgetc(pf);
//	printf("ch=%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("(rewind)ch=%c", ch);
//	//3关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件结束判定
//EOF的存在证明
//int main()
//{
//	//1打开文件 
//	FILE*  pf = fopen("test.txt", "r");//该文件没有内容
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读写
//	printf("%d\n", fgetc(pf));//读取文件中的字符 打印-1
//	//3关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//perror的使用 比strerror使用更方便

//int main()
//{
//	//1打开文件 
//	FILE*  pf = fopen("皇帝的新衣.txt", "r");
//	if (!pf)
//	{
//		perror("sb:");
//		return 0;
//	}
//	//读写
//	printf("%d\n", fgetc(pf));
//	//3关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//feof的使用

//perror的使用 比strerror使用更方便

int main()
{
	//1打开文件 
	FILE*  pf = fopen("test.txt", "r"); 
	char ch;
	if (!pf)
	{
		perror("open test.txt:");
		return 0;
	}
	//读写
	//读取文件直到读取结束
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);//文件为空 所以没有输出
	}
	//判断读取结束的原因
	if (ferror(pf))
	{
		puts("error when reading");
	}
	else if (feof(pf))
	{
		puts("end of file reached sucessfully");
	}
	//3关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}