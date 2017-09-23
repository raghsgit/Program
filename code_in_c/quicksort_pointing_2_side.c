#include<stdio.h>
#include<stdlib.h>
#define max 25
#define SWAP {swap(&a[i],&a[p]);swap(&i,&p);}

void swap(int *a, int *b){
	static int i=0;
	int t=(*a);
	(*a)=(*b);
	(*b)=t;
	return;
	}
void quicksort(int* a,int s,int e){
	if(s<e){
		int pivot=a[s];
		int p=s,i=e;
		while(i!=p){
			if(i<p){
                if(a[i]>pivot)
                    SWAP
                else
                    i++;
			}else{
                if(a[i]>pivot)
                    i--;
                else
                   SWAP
            }

		}
		printf("%d\n",a[p]);
		for(i=s;i<=e;i++)
			printf("%d ",a[i]);
		printf("\n");

		quicksort(a,s,p-1);
		quicksort(a,p+1,e);
		}
	}
int main(){
	int a[max];
	int n;
	int i;
	printf("give no. of element\n");
	scanf("%d",&n);
	printf("give element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	printf("\nafter sorting\n");
	quicksort(a,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);}
	return 0;
	}
