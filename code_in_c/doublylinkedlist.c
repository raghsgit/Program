#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* back;}*start=NULL,*end=NULL;
void insert(int x){
    struct node* t=malloc(sizeof(struct node));
        t->data=x;
        t->next=NULL;
    if(start==NULL){
        start=t;
        start->back=NULL;
        end=t;
    }
    else{
            t->next=start;
            t->next->back=t;
            start=t;
            t->back=NULL;
        }
}
    void displaySt(){
        struct node*t=start;
        while(t!=NULL)
        {
            printf("%d->",t->data);
            t=t->next;
        }
        printf("\n");
    }
    void displEn(){
        struct node* t =end;
        while(t!=NULL){
            printf("%d->",t->data);
            t=t->back;
        }
        printf("\n");
    }
int main(){
    while(1){
        int n;
        printf("1.to insert\t2.display from starting\t\t3.display from end\t4.To Exit\n");
        scanf("%d",&n);
        switch(n){
        case 1:{
            int x;
            printf("\ngive data \t:");
            scanf("%d",&x);
            insert(x);
            break;
            }
        case 2:{
            displaySt();
            break;
        }
        case 3:{
            displEn();
            break;
            }
        case 4:
            exit(0);
        default:
            printf("\nïnvalid choice");
        }
    }
}
