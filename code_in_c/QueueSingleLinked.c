#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node* link;
	}*start=NULL,*end = NULL;
void enqueue(int x){
	struct node* temp=malloc(sizeof(struct node));
	temp->info=x;
	temp->link=NULL;
	if(start==NULL){ 
		start=end=temp;
	}
	else {
		end->link=temp;
		end=temp;
	}
}
void display(){
	if(start==NULL){
		printf("\nno element\n");
	}
	else{
		struct node* t=start;
		while(t!=NULL){
			printf("%d->",t->info);
			t=t->link;
		}
	}
}
void dequeue(){
	if(start==end){
		start=end=NULL;
	}
	else{
		struct node* t=start;
		start=start->link;
		free(t);
	}
}
int top(){
	if(start!=NULL)
		return start->info;
	return -1;
}
int isempty(){
	int x=0;
	if(start==NULL)
		x=1;
	return x;
	}
void main(){
	int n=1;
	while(n){
		printf("1.enqueue\t2.Dequeue\t3.front\t\t4.isEmpty()\t5.Display()\t6.Exit().\n");
		scanf("%d",&n);
		switch(n){
			case 1:{
				printf("give data");
				scanf("%d",&n);
				enqueue(n);
				break;
			}
			case 2:{
				dequeue();
				break;
			}
			case 3:{
				int x=top();
				if(x!=-1)
					printf("%d\n",x);
				break;
			}
			case 4:{
				int x=isempty();
				if(x==1)
					printf("yes\n");
				else
					printf("no\n");
				   break;
			}
			case 5:{
				display();
				break;
			}
			case 6:{
				n=0;
				exit(0);
			}
			default:
				printf("\n not a valid choice\n");
			n=1;
		}
	}
}