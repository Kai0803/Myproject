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
	for (i = 0; i < len - 1; ++i)          //�`��N-1��
		for (j = 0; j < len - 1 - i; ++j)  //�C���`���n���������
			if (arr[j] > arr[j + 1])       //��j�p��洫
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
