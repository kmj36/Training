#include <stdio.h>

int main(void)
{
	int totEven=0, totOdd=0, tot10Su=0, num=99;
	while(1)
	{
		num += 1;
		if(num > 500)
		{
			printf("¦�� �հ�: %d, Ȧ�� �հ�: %d, ¦�� 10�� ��� �հ�: %d", totEven, totOdd, tot10Su);
			break;
		}else if(num % 2 != 1)
		{
			totEven += num;
			if(num % 10 == 0)
				tot10Su += num;
		}else
		{
			totOdd += num;
		}
	}
	return 0;
}
