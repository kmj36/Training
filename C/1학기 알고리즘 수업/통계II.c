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
	printf("�ִ밪: %d, �ּҰ�: %d, �հ�: %d, ���: %d", max, min, s, ave);
	return 0;
}
