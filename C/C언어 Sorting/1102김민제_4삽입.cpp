#include <stdio.h>

int main(void)
{
	int arr[6]={5,1,3,7,2,9}, i, j, k, key;
	for(i=1;i<6;i++)
	{
		key=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>key)
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = key;
	}
	for(i=0;i<6;i++)
		printf("%d ", arr[i]);
	return 0;
}
