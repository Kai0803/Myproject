#include<stdio.h>
void swap(int a[],int i,int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void heapify(int tree[],int n,int i){//確認父節點是否比子節點大 
	if(i>=n){
		return;
	}
	int cl=2*i+1;
	int cr=2*i+2;
	int max=i;
	if(cl<n&&tree[cl]>tree[max]){
		max=cl;
	}
	if(cr<n&&tree[cr]>tree[max]){
		max=cr;
	}
	if(max!=i){
		swap(tree,max,i);
		heapify(tree,n,max);
	}
} 
void build_heap(int tree[],int n){//把陣列轉成堆 
	int last_node=n-1;
	int parent=(last_node-1)/2;
	for(int i=parent;i>=0;i--){
		heapify(tree,n,i);
	}
}
void heapsort(int tree[],int n){
	build_heap(tree,n);
	for(int i=n-1;i>=0;i--){
		swap(tree,i,0);
		heapify(tree,i,0);
	}
}
int main(){
	int tree[]={2,5,3,1,10,4};
	int n=6;
	heapsort(tree,n);
	for(int i=0;i<n;i++){
		printf("%d\n",tree[i]);
	}
	return 0;
}
