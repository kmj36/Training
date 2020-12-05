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
		printf("[DB에 계정이 없습니다.]\n");
		printf("새로운 관리자 계정: ");
		gets_s(in_login, 20);
		printf("새로운 비밀번호: ");
		gets_s(in_password, 30);
		printf("비밀번호 재 입력: ");
		gets_s(P_check, 30);
		if (strcmp(in_password, P_check) != 0)
		{
			printf("\n[비밀번호가 틀립니다.]\n");
			while (strcmp(in_password, P_check) != 0)
			{
				printf("새로운 비밀번호: ");
				gets_s(in_password, 30);
				printf("비밀번호 재 입력: ");
				gets_s(P_check, 30);
				if (strcmp(in_password, P_check) != 0)
					printf("\n[비밀번호가 틀립니다.]\n");
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
			printf("관리자 로그인: ");
			scanf("%s", in_login);
			printf("비밀번호 입력: ");
			scanf("%s", in_password);
			if (strcmp(s_login, in_login) != 0 || strcmp(s_password, in_password) != 0)
			{
				printf("아이디 또는 비밀번호가 틀립니다.\n\n");
				trys++;
			}
			else
				break;
		}
		if (trys == 3)
		{
			printf("로그인 시도 초과");
			return 0;
		}
		printf("\n[관리자 %s로 로그인 하였습니다.]\n", s_login);
		system("cmd");
		printf("종료되었습니다.");
	}
	return 0;
}

//1. 로그인 창
//2. 목록