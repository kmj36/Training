#include <stdio.h>

void radixsort(int arr[], int len)
{
	int i, j, k ,n=len, m=3, temp;
	for(k=3;k>=0;k--)
	{
		for(i=0;i<10;i++)
		{
			for(j=i;j<10;j++)
			{
				if(arr[i]/10*k > arr[j]/10*k)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
}

int main(void)
{
	int arr[10]={211, 221, 231, 341, 351, 461, 471, 481, 91, 101};
	int len= sizeof(arr)/sizeof(int), i;
	radixsort(arr, len);
	printf("[result]: ");
	for(i=0;i<len;i++)
		printf("%d ", arr[i]);
	return 0;
}
