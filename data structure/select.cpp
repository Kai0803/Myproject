#include<stdio.h>
#include<stdlib.h>
void select(int a[],int b){
	int minindex;
	for(int i=0;i<b;i++){
		minindex=i;
		for(int j=i+1;j<b;j++){
			if(a[j]<a[minindex]){
				minindex=j;
			}
		}
		if(minindex!=i){
			int temp=a[i];
			a[i]=a[minindex];
			a[minindex]=temp;
		}
	}
	
} 
/* ´¡¤J±Æ§Çªk */
void insertion_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
}
int main(void){
	int a[]={6,3,1,8,4,9,2,7,5};
	int b[]={8,2,6,4,9,3,1};
	int len2=sizeof(b)/sizeof(b[0]);
	int len=sizeof(a)/sizeof(a[0]);
	select(a,len);
	insertion_sort(b,len2);
	for(int i=0;i<len;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	for(int j=0;j<len2;j++){
		printf("%d",b[j]);
	} 
} 
