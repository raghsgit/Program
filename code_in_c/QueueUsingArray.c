#include<stdio.h>
#define MAX 15
int a[MAX];
int start=-1;
int end=-1;
void insert(){
    printf("give value");
    int m;
    scanf("%d",&m);
    if(start==-1&&end==-1){
        end=0;
        start=0;
        a[end]=m;
    }
    else{
        if((end+1)%MAX==start){
            printf("\nQueue is full");
        }
        else{
            a[(end+1)%MAX]=m;
            end=(end+1)%MAX;
        }
    }
}
void top(){
    if(start==-1)
        printf("\nEmpty");
    else printf("\n%d",a[start]);

}
void isEmpty(){
    if(start==-1&&end==-1){
        printf("empty\n");}
    else
        printf("not empty\n");
}
void isFull(){
    if((end+1)%MAX==start){
            printf("Queue is full\n");}
    else
            printf("Queue is not full\n");
}
void rmove(){
    if(start==-1&&end==-1)
          printf("Queue is already empty\n");
    else if(start==end){
            start=-1;
            end=-1;
    }
    else{
     start=(start+1     )%MAX;
    }
}
void display(){
   if(start==-1&&end==-1){
        printf("no element to show\n");
    }
    else{
        int t=start;
        while(1){
            printf("%d->",a[t]);

        if(t==end)
            break;
         t=(t+1)%MAX;
        }
    }
}
void main(){
    while(1){
    int x;
    printf("\n1.insert 2.top 3.remove 4.display\n 5.isempty 6.isfull 7.exit\n");
    scanf("%d",&x);
    switch(x){
        case 1:insert();break;
        case 2:top();break;
        case 3:rmove();break;
        case 4:display();break;
        case 5:isEmpty();break;
        case 6:isFull();break;
        case 7:return;
        default:printf("not a valid choice");
    }
    }
}
