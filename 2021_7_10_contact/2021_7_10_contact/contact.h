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
//������Ϣ�ṹ��
struct PeoInFo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//ͨѶ¼�ṹ��
struct Contact
{
	struct PeoInFo data[MAX_CON];//�ṹ������
	int size;//��¼Ŀǰ����Ч��Ϣ����
};

void InitContact(struct Contact* con);//��ʼ��ͨѶ¼
void AddContact(struct Contact* con);//��Ӹ�����Ϣ
void ShowContact(const struct Contact* con);//չʾͨѶ¼
void DelContact(struct Contact* con);//ɾ��ָ���˵���Ϣ
void SearchContact(const struct Contact* con);//����ָ���˵���Ϣ ����ӡ
void ModifyContact(struct Contact* con);//�޸�ָ���˵���Ϣ