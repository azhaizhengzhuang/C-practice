#include "contact.h"

//��̬ͨѶ¼ �ڳ��򱻹ر�֮��ͨѶ¼�������
//�������ܣ����Դ�����1000�˵������Ϣ �������� �Ա� ���� �绰 סַ
//���칦��1.�� 2.ɾ 3.�� 4.�� 5.��ӡ 6.���� 

void menu()
{
	printf("**************************************\n");
	printf("***   1.add               2.del    ***\n");
	printf("***   3.search            4.modify ***\n");
	printf("***   5.show              6.sort   ***\n");
	printf("**************************************\n");
}

int main()
{
	struct CON con;//����ͨѶ¼
	InitContact(&con);//��ʼ��ͨѶ¼ ����ϵ�˵�������Ϣ��Ϊ0 size��Ϊ0
	int input;
	do//����ѡ��
	{
		menu();
		printf("��ѡ����;>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case EXIT://�˳�
			printf("�˳�ͨѶ¼\n");
			break;
		case ADD://�����ϵ��
			AddContact(&con);
			break;
		case DEL://ɾ��ָ����ϵ��
			DelContact(&con);
			break;
		case SEARCH://����ָ����ϵ��
			SearchContact(&con);
			break;
		case MODIFY://�޸�ָ����ϵ��
			ModifyContact(&con);
			break;
		case SHOW://��ӡͨѶ¼
			ShowContact(&con);
			break;
		case SORT://��ͨѶ¼��������
			SortContact(&con);
			break;
		default:
			printf("ѡ����� ������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}