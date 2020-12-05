#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void panprint(int (*arr)[19])
{
	int i, j;
	printf("  ");
	for (i = 0; i < 19; i++)
		printf("%2d", i);
	printf("\n");
	for (i = 0; i < 19; i++)
	{
		printf("%2d", i);
		for (j = 0; j < 19; j++)
			if (arr[i][j] == 0)
			{
				if (i == 0 && j == 0)
				{
					printf("┌ ");
				}
				else if (i == 0 && j == 18)
				{
					printf("┐ ");
				}
				else if (i == 18 && j == 0)
				{
					printf("└ ");
				}
				else if (i == 18 && j == 18)
				{
					printf("┘ ");
				}
				else if (i == 0)
				{
					printf("┬ ");
				}
				else if (i == 18)
				{
					printf("┴ ");
				}
				else if (j == 0)
				{
					printf("├ ");
				}
				else if (j == 18)
				{
					printf("┤ ");
				}
				else
				{
					printf("┼ ");
				}
			}
			else if (arr[i][j] == 1)
				printf("●");
			else
				printf("○");
		printf("\n");
	}
}

int Cond(int (*arr)[19], int turn)
{
	int i, j;
	if (turn % 2 == 0)
		{
			for (i = 0; i < 19; i++)
			{
				for (j = 0; j < 19; j++)
				{
					if (arr[i][j] == 1 && arr[i][j + 1] == 1 && arr[i][j + 2] == 1 && arr[i][j + 3] == 1 && arr[i][j + 4] == 1)
					{
						printf("흰돌 승!\n");
						return 0;
					}
					else if (arr[i][j] == 1 && arr[i + 1][j + 1] == 1 && arr[i + 2][j + 2] == 1 && arr[i + 3][j + 3] == 1 && arr[i + 4][j + 4] == 1)
					{
						printf("흰돌 승!\n");
						return 0;
					}
					else if (arr[i][j] == 1 && arr[i + 1][j] == 1 && arr[i + 2][j] == 1 && arr[i + 3][j] == 1 && arr[i + 4][j] == 1)
					{
						printf("흰돌 승!\n");
						return 0;
					}
					else if (arr[i][j] == 1 && arr[i + 1][j - 1] == 1 && arr[i + 2][j - 2] == 1 && arr[i + 3][j - 3] == 1 && arr[i + 4][j - 4] == 1)
					{
						printf("흰돌 승!\n");
						return 0;
					}
				}
			}
			return 1;
		}
		else
		{
			for (i = 0; i < 19; i++)
			{
				for (j = 0; j < 19; j++)
				{
					if (arr[i][j] == 2 && arr[i][j + 1] == 2 && arr[i][j + 2] == 2 && arr[i][j + 3] == 2 && arr[i][j + 4] == 2)
					{
						printf("검은돌 승!\n");
						return 0;
					}
					else if (arr[i][j] == 2 && arr[i + 1][j + 1] == 2 && arr[i + 2][j + 2] == 2 && arr[i + 3][j + 3] == 2 && arr[i + 4][j + 4] == 2)
					{
						printf("검은돌 승!\n");
						return 0;
					}
					else if (arr[i][j] == 2 && arr[i + 1][j] == 2 && arr[i + 2][j] == 2 && arr[i + 3][j] == 2 && arr[i + 4][j] == 2)
					{
						printf("검은돌 승!\n");
						return 0;
					}
					else if (arr[i][j] == 2 && arr[i + 1][j - 1] == 2 && arr[i + 2][j - 2] == 2 && arr[i + 3][j - 3] == 2 && arr[i + 4][j - 4] == 2)
					{
						printf("검은돌 승!\n");
						return 0;
					}
				}
			}
			return 1;
		}
}

void panplace(int (*arr)[19], int turn)
{
	int x, y;
	if (turn % 2 == 0) //흰 바둑돌
	{
		printf("[흰 바둑돌 차례](x, y)를 입력해주세요: ");
		scanf_s("%d %d", &x, &y);
		if ((x > 18 || y > 18) || (x < 0 || y < 0) || (arr[y][x] == 1 || arr[y][x] == 2)) // 에러 방지
		{
			while (1)
			{
				printf("[흰 바둑돌 차례](x, y)를 입력해주세요(좌표가 18 초과이거나, 바둑돌이 겹치거나, 0 미만일 수 없습니다.): ");
				scanf_s("%d %d", &x, &y);
				if (x > 18 || y > 18)
					continue;
				if (x < 0 || y < 0)
					continue;
				if (arr[y][x] == 1 || arr[y][x] == 2)
					continue;
				break;
			}
		}
		arr[y][x] = 1; //흰 바둑돌
	}
	else //검은 바둑돌
	{
		printf("[검은 바둑돌 차례](x, y)를 입력해주세요: ");
		scanf_s("%d %d", &x, &y);
		if ((x > 18 || y > 18) || (x < 0 || y < 0) || (arr[y][x] == 1 || arr[y][x] == 2)) // 에러 방지
		{
			while (1)
			{
				printf("[검은 바둑돌 차례](x, y)를 입력해주세요(좌표가 18 초과이거나, 바둑돌이 겹치거나, 0 미만일 수 없습니다.): ");
				scanf_s("%d %d", &x, &y);
				if (x > 18 || y > 18)
					continue;
				if (x < 0 || y < 0)
					continue;
				if (arr[y][x] == 1 || arr[y][x] == 2)
					continue;
				break;
			}
		}
		arr[y][x] = 2; //검은 바둑돌
	}
}

int Cond2(int (*arr)[19])
{
	int i, j, che=0;
	for (i = 0; i < 19; i++)
		for (j = 0; j < 19; j++)
			if (arr[i][j] == 0)
				che++;
	if (che == 0)
	{
		printf("모든 판이 차서 무승부 입니다.");
		return 0;
	}
	else
	{
		return 1;
	}
}

void starting_print(int turn)
{
	char time[50];
	FILE* fp = fopen("Timeline.txt", "r");
	fgets(time, 50, fp);
	printf("__________________________________________________\n");
	printf("_________________  [오목 v1.0]   _________________\n");
	printf("__________________________________________________\n");
	if (turn % 2 == 0)
		printf("___________시작은 검은돌부터 시작입니다.__________");
	else
		printf("____________시작은 흰돌부터 시작입니다.___________");
	printf("__________________________________________________\n");
	printf("_____________마지막으로 플레이 한 시간____________\n             %s", time);
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	printf("__________________________________________________\n");
	system("pause");
}

void savetime(void)
{
	time_t t = time(NULL); // 시간 받아오기 
	char* arr = ctime(&t);
	FILE* fp = fopen("Timeline.txt", "wt");
	fprintf(fp, arr);
	fclose(fp);
	printf("\n 시간이 저장되었습니다. %s", arr);
}
int main(void)
{
	system("mode con: cols=50 lines=28");
	srand(time(NULL));
	int arr[19][19] = { 0 }, turn = rand() % 2;
	int result=1, result2=1;
	starting_print(turn);
	while (1)
	{
		system("cls");
		panprint(arr); // 판 출력
		result = Cond(arr, turn); // 승리 조건 검사
		if (result == 0)
		{
			system("pause");
			savetime();
			return 0;
		}
		turn++;
		panplace(arr, turn);
		result2 = Cond2(arr);
		if (result2 == 0)
		{
			system("pause");
			savetime();
			return 0;
		}
	}
	return 0;
}