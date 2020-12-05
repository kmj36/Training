#include <stdio.h>

int main(void)
{
	int arr[10], i, j, max, min, ave, sum;
	for(i=0;i<10;i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	sum = arr[0];
	for(j=0;j<10;j++)
	{
		if(arr[j]>max)
			max = arr[j];
		sum += arr[j];
	}
	sum -= max;
	ave = sum / 9 ;
	printf("«’∞Ë¿« ∆Ú±’: %d", ave);
	return 0;
}
