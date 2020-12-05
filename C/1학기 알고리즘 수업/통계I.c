#include <stdio.h>

int main(void)
{
	int sum=0, cnt=0;
	int a,b, n;
	printf("A, B를 입력해 주세요: ");
	scanf("%d %d", &a, &b);
	if(a>b)
		for(n=b; n<=a; n++)
		{
			sum += n;
			cnt+=1;
		}
	else
		for(n=a;n<=b; n++)
		{
			sum += n;
			cnt+=1;
		}
	printf("합계: %d, 평균: %d", sum, sum/cnt);
	return 0;
}

