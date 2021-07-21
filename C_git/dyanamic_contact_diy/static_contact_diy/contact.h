#define _CRT_SECURE_NO_WARNINGS 1
//#define MAX_PEO 1000
#define DEFAULT_PEO 3
#define ADD_CAPA 2
#define MAX_NAME 20
#define MAX_SEX 6
#define MAX_TEL 11
#define MAX_ADDR 20

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>




struct PeoInFo//个人信息结构体
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};

struct CON
{
	struct PeoInFo* data;//用于存放多个人的信息
	int size;//存放有效信息的条数
	int capa;//通讯录总容量
};

enum Op
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

void InitContact(struct CON* pc);
void AddContact(struct CON* pc);
void ShowContact(const struct CON* pc);
void DelContact(struct CON* pc);
void SearchContact(const struct CON* pc);
void ModifyContact(struct CON* pc);
void SortContact(struct CON* pc);
void Destory(struct CON* pc);
void SortContact(struct CON* pc);