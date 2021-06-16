#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define MAX 10 
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int partition(int[], int, int); 
void quickSort(int[], int, int); 
int main(void){
	int a[7]={5,7,6,3,1,9,8};
	printf("\n排序前："); 
    for(int 
	i = 0; i < 7; i++) {
        printf("%d ", a[i]); 
	}
    printf("\n");
	quickSort(a,0,7-1);
	printf("\n排序後："); 
    for(int 
	i = 0; i < 7; i++) {
        printf("%d ", a[i]); 
	}
    printf("\n"); 

    return 0; 
}
/*int main(void) { 
    srand(time(NULL)); 
    
    int number[MAX] = {0}; 

    printf("排序前："); 
    int i;
    for(i = 0; i < MAX; i++) { 
        number[i] = rand() % 100; 
        printf("%d ", number[i]); 
    } 

    quickSort(number, 0, MAX-1); 

    printf("\n排序後："); 
    for(i = 0; i < MAX; i++) 
        printf("%d ", number[i]); 
    
    printf("\n"); 

    return 0; 
} */
int partition(int number[],int left,int right){
	int i=left-1;//left=0 
	for(int j=left;j<right;j++){
		if(number[j]<=number[right]){//更改大於小於可改變順序 
			i++;
			SWAP(number[i],number[j]);//成立的話都是遇到同個陣列位置 這行用來交換比pviot大的數值 
		}
	}
	SWAP(number[i+1],number[right]);
	//printf("i=%d\n",i);
	return i+1;
}
void quickSort(int number[],int left,int right){
	if(left<right){
		int q=partition(number,left,right);
		//printf("q=%d",q);
		quickSort(number,left,q-1);
		//printf("q=%d",q);
		quickSort(number,q+1,right);
		//printf("qa=%d",number[-1]);
	}
	
}
/*void quickSort(int number[],int left,int right){
	printf("f left=%d\n",left);
	if(left<right){
		int q=partition(number,left,right);
		printf("q=%d	left=%d\n",q,left);
		printf("\n排序中："); 
		for(int i = 0; i < 7; i++) {
        printf("%d ", number[i]); 
		}
		printf("left=%d",left);
		printf("\n");
		
		quickSort(number,left,q-1);
		
		printf("\n排序中："); 
    	for(int i = 0; i < 7; i++) {
        printf("%d ", number[i]); 
		}
		printf("left=%d",left);
    	printf("\n");
    	
		quickSort(number,q+1,right);
		
		printf("\n排序中："); 
    	for(int i = 0; i < 7; i++) {
        printf("%d ", number[i]); 
		}
		printf("left=%d",left);
    	printf("\n");
	}
}*/
