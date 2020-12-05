#include <stdio.h>

int main(void)
{
	int arr[7] = {30, 24, 71, 41, 43, 86, 70}, s = 0, i = 0, max = 0, min = 100, ave;
	while(1)
	{
		if(i==7)
			break;
		if(max < arr[i])
			max=arr[i];
		if(min > arr[i])
			min=arr[i];
		s+=arr[i];
		i+=1;
	}
	ave=s/i;
	printf("최대값: %d, 최소값: %d, 합계: %d, 평균: %d", max, min, s, ave);
	return 0;
}
