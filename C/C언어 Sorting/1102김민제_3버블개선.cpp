#include <stdio.h>

int main(void)
{
	int arr[6]={4,3,2,9,8,7}, i, j, temp;
	int flag=1; 
	for(i=0;flag&&i<6;i++) //0~5
	{
		flag=0;
		for(j=0;j<6-i;j++) //0~(5-i)i=5
		{
			if(arr[j]>arr[j+1]) // 옆과 비교 후 스왑 
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
	}
	for(i=0;i<6;i++) // 요소 출력
	{
		printf("%d ", arr[i]);
	}
	return 0;
} 
