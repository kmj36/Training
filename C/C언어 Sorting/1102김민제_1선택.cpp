#include <stdio.h>

int main(void) 
{
	int arr[6]={11,7,3,1,5,9}, i, j, temp;
	for(i=0;i<6;i++) // ���ذ� 
	{
		for(j=i+1;j<6;j++) //�ڽ��� ������ ��� �迭 ��� �� 
		{
			if(arr[i]>arr[j]) //���ذ� ���� ���� ���� �ּҰ� �� 
			{
				temp=arr[i]; // �迭 ��� ���� 
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
		printf("%d ", arr[i]); //��� �迭 ��� ��� 
	return 0;
}
