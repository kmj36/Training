#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int trys=0;
	char s_login[20] = { '\0' }, s_password[30] = { '\0' };
	char in_login[20] = { '\0' }, in_password[30] = { '\0' };
	char P_check[30];
	FILE* fp;
	fp = fopen("admin_database.txt", "r");
	fscanf(fp, "%s %s", s_login, s_password);
	fclose(fp);
	if (s_login[0] == '\0' || s_password[0] == '\0')
	{
		printf("[DB�� ������ �����ϴ�.]\n");
		printf("���ο� ������ ����: ");
		gets_s(in_login, 20);
		printf("���ο� ��й�ȣ: ");
		gets_s(in_password, 30);
		printf("��й�ȣ �� �Է�: ");
		gets_s(P_check, 30);
		if (strcmp(in_password, P_check) != 0)
		{
			printf("\n[��й�ȣ�� Ʋ���ϴ�.]\n");
			while (strcmp(in_password, P_check) != 0)
			{
				printf("���ο� ��й�ȣ: ");
				gets_s(in_password, 30);
				printf("��й�ȣ �� �Է�: ");
				gets_s(P_check, 30);
				if (strcmp(in_password, P_check) != 0)
					printf("\n[��й�ȣ�� Ʋ���ϴ�.]\n");
			}
		}
		fp = fopen("admin_database.txt", "a");
		fprintf(fp, in_login);
		fprintf(fp, " ");
		fprintf(fp, in_password);
		fclose(fp);
	}
	else
	{
		while(trys < 3)
		{
			printf("������ �α���: ");
			scanf("%s", in_login);
			printf("��й�ȣ �Է�: ");
			scanf("%s", in_password);
			if (strcmp(s_login, in_login) != 0 || strcmp(s_password, in_password) != 0)
			{
				printf("���̵� �Ǵ� ��й�ȣ�� Ʋ���ϴ�.\n\n");
				trys++;
			}
			else
				break;
		}
		if (trys == 3)
		{
			printf("�α��� �õ� �ʰ�");
			return 0;
		}
		printf("\n[������ %s�� �α��� �Ͽ����ϴ�.]\n", s_login);
		system("cmd");
		printf("����Ǿ����ϴ�.");
	}
	return 0;
}

//1. �α��� â
//2. ���