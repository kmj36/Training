#include <stdio.h>
#define N 5

int main(void)
{
	int arr[N]={87,65,66,57,95}, j=0, k=0, min=100, max=0, hap=0, aver;
	for(;k<N;k++)
	{
		if(arr[k]<min)
			min=arr[k];
		else if(arr[k]>max)
			max=arr[k];
		hap+=arr[k];
	}
	aver = (hap-max-min)/(N-2);
	printf("Æò±Õ: %d ÇÕ°è:%d", aver, hap);
	return 0;
}
