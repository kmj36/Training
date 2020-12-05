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
					printf("�� ");
				}
				else if (i == 0 && j == 18)
				{
					printf("�� ");
				}
				else if (i == 18 && j == 0)
				{
					printf("�� ");
				}
				else if (i == 18 && j == 18)
				{
					printf("�� ");
				}
				else if (i == 0)
				{
					printf("�� ");
				}
				else if (i == 18)
				{
					printf("�� ");
				}
				else if (j == 0)
				{
					printf("�� ");
				}
				else if (j == 18)
				{
					printf("�� ");
				}
				else
				{
					printf("�� ");
				}
			}
			else if (arr[i][j] == 1)
				printf("��");
			else
				printf("��");
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
						printf("�� ��!\n");
						return 0;
					}
					else if (arr[i][j] == 1 && arr[i + 1][j + 1] == 1 && arr[i + 2][j + 2] == 1 && arr[i + 3][j + 3] == 1 && arr[i + 4][j + 4] == 1)
					{
						printf("�� ��!\n");
						return 0;
					}
					else if (arr[i][j] == 1 && arr[i + 1][j] == 1 && arr[i + 2][j] == 1 && arr[i + 3][j] == 1 && arr[i + 4][j] == 1)
					{
						printf("�� ��!\n");
						return 0;
					}
					else if (arr[i][j] == 1 && arr[i + 1][j - 1] == 1 && arr[i + 2][j - 2] == 1 && arr[i + 3][j - 3] == 1 && arr[i + 4][j - 4] == 1)
					{
						printf("�� ��!\n");
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
						printf("������ ��!\n");
						return 0;
					}
					else if (arr[i][j] == 2 && arr[i + 1][j + 1] == 2 && arr[i + 2][j + 2] == 2 && arr[i + 3][j + 3] == 2 && arr[i + 4][j + 4] == 2)
					{
						printf("������ ��!\n");
						return 0;
					}
					else if (arr[i][j] == 2 && arr[i + 1][j] == 2 && arr[i + 2][j] == 2 && arr[i + 3][j] == 2 && arr[i + 4][j] == 2)
					{
						printf("������ ��!\n");
						return 0;
					}
					else if (arr[i][j] == 2 && arr[i + 1][j - 1] == 2 && arr[i + 2][j - 2] == 2 && arr[i + 3][j - 3] == 2 && arr[i + 4][j - 4] == 2)
					{
						printf("������ ��!\n");
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
	if (turn % 2 == 0) //�� �ٵϵ�
	{
		printf("[�� �ٵϵ� ����](x, y)�� �Է����ּ���: ");
		scanf_s("%d %d", &x, &y);
		if ((x > 18 || y > 18) || (x < 0 || y < 0) || (arr[y][x] == 1 || arr[y][x] == 2)) // ���� ����
		{
			while (1)
			{
				printf("[�� �ٵϵ� ����](x, y)�� �Է����ּ���(��ǥ�� 18 �ʰ��̰ų�, �ٵϵ��� ��ġ�ų�, 0 �̸��� �� �����ϴ�.): ");
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
		arr[y][x] = 1; //�� �ٵϵ�
	}
	else //���� �ٵϵ�
	{
		printf("[���� �ٵϵ� ����](x, y)�� �Է����ּ���: ");
		scanf_s("%d %d", &x, &y);
		if ((x > 18 || y > 18) || (x < 0 || y < 0) || (arr[y][x] == 1 || arr[y][x] == 2)) // ���� ����
		{
			while (1)
			{
				printf("[���� �ٵϵ� ����](x, y)�� �Է����ּ���(��ǥ�� 18 �ʰ��̰ų�, �ٵϵ��� ��ġ�ų�, 0 �̸��� �� �����ϴ�.): ");
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
		arr[y][x] = 2; //���� �ٵϵ�
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
		printf("��� ���� ���� ���º� �Դϴ�.");
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
	printf("_________________  [���� v1.0]   _________________\n");
	printf("__________________________________________________\n");
	if (turn % 2 == 0)
		printf("___________������ ���������� �����Դϴ�.__________");
	else
		printf("____________������ �򵹺��� �����Դϴ�.___________");
	printf("__________________________________________________\n");
	printf("_____________���������� �÷��� �� �ð�____________\n             %s", time);
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
	time_t t = time(NULL); // �ð� �޾ƿ��� 
	char* arr = ctime(&t);
	FILE* fp = fopen("Timeline.txt", "wt");
	fprintf(fp, arr);
	fclose(fp);
	printf("\n �ð��� ����Ǿ����ϴ�. %s", arr);
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
		panprint(arr); // �� ���
		result = Cond(arr, turn); // �¸� ���� �˻�
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