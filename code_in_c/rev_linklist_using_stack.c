#include<stdio.h>
#include<stdlib.h>
struct list{
    int data;
    struct list* link;
};
struct list* head=NULL;
    struct node{
        struct list* data;
        struct node* link;
};
struct node* top=NULL;
void push1(int c){
    struct list* temp=malloc(sizeof(struct list));
        temp->data=c;
    if(head==NULL){
            head=temp;
            temp->link=NULL;
        }
        else{
            temp->link=head;
            head=temp;
        }
    }
void push2(struct list* c)
    {
    struct node* temp=malloc(sizeof(struct node));
        temp->data=c;
    if(top==NULL){
            top=temp;
            temp->link=NULL;
        }
        else{
            temp->link=top;
            top=temp;
        }
    }

struct list* rtop(){
    if(top==NULL)
        return NULL;
    return top->data;}

void pop(){
    struct node* temp=top;
    top=temp->link;
    free(temp);}

void display(){
    struct list* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
       temp= temp->link;
    }
}
    int main(){
        int n;
        do{
            printf("enter->\t1.to insert in list \t2.to display\n");
            scanf("%d",&n);
            switch(n){
            case 1:{
                int x;
                printf("give value\t:");
                scanf("%d",&x);
                push1(x);break;}
                case 2:{
                display();break;}
                default:
                    printf("not a correct input\n");
            }
            printf("enter\t1.to continue\t0.to exit\n");
            scanf("%d",&n);
}while(n);
struct list* temp=head;
while(temp!=NULL){
    push2(temp);
    temp=temp->link;
}
printf("pushed sucessfully\n");
temp=head;
head=rtop();
pop();
temp=head;
while(rtop() !=NULL){
    temp->link=rtop();
     pop();
   temp=temp->link;
}
temp->link=NULL;
    printf("poped sucessfully\n");
display();

        }
