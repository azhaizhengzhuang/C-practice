#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_PEO 1000
#define MAX_NAME 20
#define MAX_SEX 6
#define MAX_TEL 11
#define MAX_ADDR 20

#include<stdio.h>
#include<string.h>
#include<stdlib.h>




struct PeoInFo//������Ϣ�ṹ��
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};

struct CON
{
	struct PeoInFo data[MAX_PEO];//���ڴ�Ŷ���˵���Ϣ
	int size;//�����Ч��Ϣ������
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