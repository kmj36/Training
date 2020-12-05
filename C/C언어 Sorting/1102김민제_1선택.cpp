#include <stdio.h>

int main(void) 
{
	int arr[6]={11,7,3,1,5,9}, i, j, temp;
	for(i=0;i<6;i++) // 기준값 
	{
		for(j=i+1;j<6;j++) //자신을 제외한 모든 배열 요소 비교 
		{
			if(arr[i]>arr[j]) //기준값 보다 제일 작은 최소값 비교 
			{
				temp=arr[i]; // 배열 요소 스왑 
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
		printf("%d ", arr[i]); //모든 배열 요소 출력 
	return 0;
}
