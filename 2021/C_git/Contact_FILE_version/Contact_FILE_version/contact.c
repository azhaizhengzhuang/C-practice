#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

static void CheckCapa(struct CON* pc)//���ͨѶ¼���� ������ ����������������� 
{
	if (pc->capa == pc->size)
	{
		struct PeoInFo* ptr = realloc(pc->data, (pc->capa + ADD_CAPA)*sizeof(struct PeoInFo));
		if (!ptr)
		{
			printf("����ʧ��\n");
		}
		else
		{
			pc->data = ptr;
			pc->capa += ADD_CAPA;
			printf("���ݳɹ�\n");
		}

	}

}

static  int FindName(const struct CON* pc, char name[MAX_NAME])
{
	int i;
	for (i = 0; i < pc->size; i++)
	{
		if (!(strcmp(pc->data[i].name, name)))
		{
			return i;
		}
	}
	return -1;
}


void InitContact(struct CON* pc)
{
	struct PeoInFo* ptr = malloc(DEFAULT_PEO*sizeof(struct PeoInFo));
	if (!ptr)
	{
		return;
	}
	pc->data = ptr;
	pc->size = 0;
	pc->capa = DEFAULT_PEO;
	//��ȡ�ļ��е�ͨѶ¼
	LoadContact(pc);
}

void LoadContact(struct CON* pc)
{
   //���ļ�
	//������ʱ���� ���ڽ��ܶ�ȡ��ֵ
	struct PeoInFo tmp = { 0 };
	FILE* pfr=fopen("contact.dat", "rb");
	if (!pfr)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//��ȡ�ļ�
	//��������fread�ķ���ֵ
	while (fread(&tmp, sizeof(tmp), 1, pfr))
	{
		CheckCapa(pc);
		pc->data[pc->size] = tmp;
		pc->size++;
	}
	//�ر��ļ�
	printf("ͨѶ¼���سɹ�\n");
	fclose(pfr);
	pfr = NULL;
}


void AddContact(struct CON* pc)
{
	CheckCapa(pc);
	printf("����������:>");
	scanf("%s", pc->data[pc->size].name);
	system("cls");
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->size].sex);
	system("cls");
	printf("����������:>");
	scanf("%d", &pc->data[pc->size].age);
	system("cls");
	printf("������绰:>");
	scanf("%s", pc->data[pc->size].tel);
	system("cls");
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->size].addr);
	system("cls");
	pc->size++;
	printf("��ӳɹ�\n");

}

void ShowContact(const struct CON* pc)
{
	if (!(pc->size))
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		printf("%-20s\t%-6s\t%-3s\t%-11s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		int i;
		for (i = 0; i < pc->size; i++)
		{
			printf("%-20s\t%-6s\t%-3d\t%-11s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].sex,
				pc->data[i].age,
				pc->data[i].tel,
				pc->data[i].addr);
		}
	}
}

void DelContact(struct CON* pc)
{
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ��:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		int i;
		for (i = pos; i < pc->size - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct CON* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ��:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-6s\t%-3s\t%-11s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");

		printf("%-20s\t%-6s\t%-3d\t%-11s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].sex,
			pc->data[pos].age,
			pc->data[pos].tel,
			pc->data[pos].addr);
	}
}

void ModifyContact(struct CON* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ��:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("�������޸ĺ������:>");
		scanf("%s", pc->data[pos].name);
		system("cls");
		printf("�������޸ĺ���Ա�:>");
		scanf("%s", pc->data[pos].sex);
		system("cls");
		printf("�������޸ĺ������:>");
		scanf("%d", &pc->data[pos].age);
		system("cls");
		printf("�������޸ĺ�ĵ绰:>");
		scanf("%s", pc->data[pos].tel);
		system("cls");
		printf("�������޸ĺ�ĵ�ַ:>");
		scanf("%s", pc->data[pos].addr);
		system("cls");
		printf("�޸ĳɹ�\n");
	}
}

static int PeoInFo_compare(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInFo*)e1)->name, ((struct PeoInFo*)e2)->name);
}

void SortContact(struct CON* pc)
{
	if (!(pc->size))
	{
		printf("ͨѶ¼Ϊ�գ�ȡ������\n");
	}
	else
	{
		qsort(pc->data, pc->size, sizeof(pc->data[0]), PeoInFo_compare);
		printf("����ɹ�\n");
	}
}

void Destory(struct CON* pc)
{
	free(pc->data);
	pc->data = NULL;
}

void SaveContact(struct CON* pc)
{
	//���ļ�
	int i=0;
	FILE* fpw=fopen("contact.dat", "wb");
	if (!fpw)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//д�ļ�
	if (!pc->size)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	for (i = 0; i < pc->size; i++)
	{
		fwrite(&(pc->data[i]), sizeof(struct PeoInFo), 1, fpw);
	}

	printf("����ɹ�\n");
	//�ر��ļ�
	fclose(fpw);
	fpw = NULL;
}