#include <stdio.h>

int main(void)
{
	int arr[11]={30, 24, 71, 41, 43, 86, 70, 68, 78, 86, 98}, sum= 0, i = 0, max= 0, min= 100, ave;
	while(1)
	{
		if(i==11)
			break;
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
		sum+=arr[i];
		i+=1;
	}
	ave=sum/i;
	printf("�ִ밪: %d, �ּҰ�: %d, �հ�: %d, ���: %d", max, min, sum, ave);
	return 0;
}
