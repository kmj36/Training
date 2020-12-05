#include <stdio.h>
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int pi = arr[(left + right) / 2];
      int temp;
      do
      {
        while (arr[i] < pi)
            i++;
        while (arr[j] > pi)
            j--;
        if (i<= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
      } while (i<= j);
    if (left < j)
        quickSort(arr, left, j);

    if (i < right)
        quickSort(arr, i, right);
}

int main(void)
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0}, i;
	quickSort(arr, 0, 9);
	for(i=0;i<10;i++)
		printf("%d ", arr[i]);
	return 0;
}
