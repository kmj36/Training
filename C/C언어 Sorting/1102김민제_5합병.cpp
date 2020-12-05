#include <stdio.h>

int main(void)
{
	int arr[8]={7,6,5,8,3,5,9,1}, i , j, k, temp, tmp[8];
	for(i=0, j=1; j<8 ; i+=2,j+=2)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]= temp;
		}
	}
	for(i=0,j=2,k=0;k<4;k++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
	}
	for(i=4,j=6,k=0;k<4;k++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
	}
	i=0, j=4, k=0;
	while(k<8)
	{
		if(arr[i]>arr[j])
		{
			tmp[k]=arr[j];
			j++;
		}
		else
		{
			tmp[k]=arr[i];
			i++;
		}
		if(k==7)
			tmp[k]=arr[j];
		k++;
	}
	for(i=0;i<8;i++)
	{
		printf("%d ", tmp[i]);
	}
	return 0;
}
