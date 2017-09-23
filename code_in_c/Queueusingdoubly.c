
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* back;}*start=NULL,*end=NULL;
void enqueue(int x){
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
void dequeue(){

    if(end==NULL){
            printf("queue is already empty\n");
    }
    else if(end->back==NULL){
        end=NULL;
        start=NULL;
    }
    else{
            struct node* t=end;
            end=end->back;
            end->next=NULL;
            free(t);
    }
}
    void display(){
        struct node*t=start;
        while(t!=NULL)
        {
            printf("%d->",t->data);
            t=t->next;
        }
        printf("\n");
    }
  void top(){
      if(start==NULL){
            printf("queue is empty\n");
        return;
      }
    printf("%d\n",start->data);
    }
    void isEmpty(){
    if(start==NULL){
        printf("queue is empty\n");
        }
    else

        printf("not empty\n");

    return;}
int main(){
    while(1){
        int n;
        printf("1.to insert\t2.to display\t\t3.to dequeue\t4.top()\t.5isEmpty()\t6.To Exit\n");
        scanf("%d",&n);
        switch(n){
        case 1:{
            int x;
            printf("\ngive data \t:");
            scanf("%d",&x);
            enqueue(x);
            break;
            }
        case 2:{
            display();
            break;
        }
        case 3:{
            dequeue();
            break;
            }
        case 4:
            top();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            exit(0);

        default:
            printf("\nïnvalid choice");
        }
    }
}

