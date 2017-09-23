#include<stdio.h>
#include<stdlib.h>
	char t[]="true";
	char f[]="false";
struct node{
	int data ;
	struct node* link;
};
struct node *top=NULL;
void display(){
    struct node *pt=top;
    while(pt!=NULL) {
        printf("%d->",pt->data);
        pt=pt->link;}
    }
void push(int x){
	struct node* temp=malloc(sizeof(struct node));
	temp->data=x;
	if(top==NULL)
		{
			top=temp;
			temp->link=NULL;
		}
	else{
		temp->link=top;
		top=temp;
		}
	}
void pop(){
	if(top==NULL){
		printf("Stack is Empty\n");
		return;
	}
	struct node* temp=top;
	top=top->link;
	free(temp);
	return;
}

int isempty(){
	if(top==NULL){
		return t;
	}
	return f;
}

void topv(){
	if(top==NULL)
		printf("stack is empty\n");
	else
		printf("%d\n",top->data);
}

int main(){
    int n;
    do  {
    printf("1.push\t2.pop\t3.isempty\t4.topvalue\t5.to display\n");
    printf("enter your choice\n");

    scanf("%d",&n);
    switch(n){
        case 1:{
            int x;
            printf("give data\t:");
            scanf("%d",&x);
            push(x);
            break;
            }
        case 2:{
        pop();
        break;}
        case 3:{
            printf("%s\n",isempty());
            break;}
        case 4:{
            topv();
            break;
        }
        case 5:display();break;
        default:
            printf("not a valid choice");
                    }
        printf("1. to continue\t0. to leave:\t");
        scanf("%d",&n);
        }while(n);
return 0;
}
