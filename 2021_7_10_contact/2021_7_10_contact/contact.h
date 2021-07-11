#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_CON 1000

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
//个人信息结构体
struct PeoInFo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//通讯录结构体
struct Contact
{
	struct PeoInFo data[MAX_CON];//结构体数组
	int size;//记录目前的有效信息个数
};

void InitContact(struct Contact* con);//初始化通讯录
void AddContact(struct Contact* con);//添加个人信息
void ShowContact(const struct Contact* con);//展示通讯录
void DelContact(struct Contact* con);//删除指定人的信息
void SearchContact(const struct Contact* con);//查找指定人的信息 并打印
void ModifyContact(struct Contact* con);//修改指定人的信息