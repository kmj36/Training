#include <stdio.h>

int main(void)
{
	int n, p=0, min=10000, max=0, jum, hap=0, avg=0;
	scanf("%d", &n);
	do
	{
		scanf("%d", &jum);
		p+=1;
		hap+=jum;
		if(max < jum)
			max = jum;
		if(min > jum)
			min = jum;
	}while(p < n);
	hap-=max+min;
	avg = hap / (n-2);
	printf("최대값과 최소값을 제외한 평균: %d", avg);
	return 0;
}
