#include<stdio.h>
#define MAX 15
int a[MAX];
int partition(int start, int end){
	int pivot=a[end];
	int pi=start; //partition index
	int i;
	for(i=start;i<end;i++){
		if(a[i]<=pivot){
			swap(&a[i],&a[pi]);
			pi++;
		}
	}
	swap(&a[end],&a[pi]);
	return pi;
}
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t;
	return;
}
void quicksort(int start, int end){
	if(start<end){
		int pi=partition(start,end);
		quicksort(start,pi-1);
		quicksort(pi+1,end);
	}
}
int main(){
	printf("give size of array not more than MAX:");
	int n;
	scanf("%d",&n);
	printf("give elements\t:");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

    for(i=0;i<n;i++)
		printf("%d ",a[i]);

	quicksort(0,n-1);

	printf("after sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
