#include <stdio.h>

int main(void)
{
	int sum=0, max=0, min=0, avg=0, i, j=0, num, arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
	max= arr[9];
	min= arr[9];
	for(;j<10;j++)
	{
		sum += arr[j];
		if(arr[j] > max)
			max = arr[j];
	}
	sum -= max;
	avg = sum/9;
	printf("최대값을 제외한 9개의 평균: %d", avg);
	return 0;
}
