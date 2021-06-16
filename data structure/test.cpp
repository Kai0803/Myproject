#include<stdio.h>
#include<stdlib.h>

/*void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	//return a,b;
}*/
void BubbleSort(int arr[], int len) 
{
	int i, j, temp;
	for (i = 0; i < len - 1; ++i)          //循環N-1次
		for (j = 0; j < len - 1 - i; ++j)  //每次循環要比較的次數
			if (arr[j] > arr[j + 1])       //比大小後交換
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main() 
{
    int i;
	int arr[] = {5,4,3,6,7,8,14,11,12,1,2,9,10,13};
	BubbleSort(arr, 14);
	
	for (i = 0; i < 14; ++i)
		printf("%d ", arr[i]);
		
		printf("\narray=%d",sizeof(arr) / sizeof(arr[0]) );
		
	return 0;
}
