#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

static int FindName(const struct Contact* con,char name[20])//�����ڲ����ܾ���ʹ�õ����ҹ��� ��˶Բ��ҹ��ܽ����˷�װ ���ҵ���Ӧ���ֵ���ϵ�˷��������±� �Ҳ����򷵻�-1
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (!(strcmp(name, con->data[i].name)))
		{
			return i;
		}
	}
	return -1;
}

void InitContact(struct Contact* con)
{
	memset(con->data, 0, sizeof(con->data));
	con->size = 0;
}

void AddContact(struct Contact* con)//�����Ϣ
{
	if (con->size == MAX_CON)
	{
		printf("ͨѶ¼���� �޷��������\n");
	}
	else
	{
		printf("����������;>");
		scanf("%s", con->data[con->size].name);
		printf("�������Ա�;>");
		scanf("%s", con->data[con->size].sex);
		printf("����������;>");
		scanf("%d", &(con->data[con->size].age));
		printf("������绰;>");
		scanf("%s", con->data[con->size].tele);
		printf("�������ַ;>");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* con)
{
	if (!(con->size))
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-3s\t%-12s\t%-30s\n","����","�Ա�","����","�绰","��ַ");//��ӡ������
		int i = 0;
		for (i = 0; i < con->size; i++)
		{
			printf("%-20s\t%-5s\t%-3d\t%-12s\t%-30s\n", con->data[i].name, con->data[i].sex, con->data[i].age, con->data[i].tele, con->data[i].addr);
		}

	}
}

void DelContact(struct Contact* con)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int pos = FindName(con, name);
	if (-1 == pos)
	{
		printf("δ�ҵ�����ϵ��\n");
	}
	else
	{
		int i;
		for (i = pos; i < con->size - 1; i++)
		{
			con->data[i] = con->data[i + 1];//�ṹ��Ҳ����ֱ�Ӹ�ֵ
		}
		con->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* con)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindName(con, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-3s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-20s\t%-5s\t%-3d\t%-12s\t%-30s\n", con->data[pos].name, con->data[pos].sex, con->data[pos].age, con->data[pos].tele, con->data[pos].addr);
	}
}

void ModifyContact(struct Contact* con)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindName(con, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������;>");
		scanf("%s", con->data[pos].name);
		printf("�������Ա�;>");
		scanf("%s", con->data[pos].sex);
		printf("����������;>");
		scanf("%d", &(con->data[pos].age));
		printf("������绰;>");
		scanf("%s", con->data[pos].tele);
		printf("�������ַ;>");
		scanf("%s", con->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}