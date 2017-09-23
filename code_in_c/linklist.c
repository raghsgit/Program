  #include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
	};
	struct node* start=NULL;
	void delete(int x){
		struct node* temp=start;
		if(temp->data==x){
			start=temp->link;
			free(temp);
			return;
		}
        while(temp->link!=NULL&&temp->link->data!=x)
				{
					temp=temp->link;
				}
				if(temp->link==NULL)
                    { printf("value not found\n");
                    return;}
                temp->link=temp->link->link;
                return;
			}


	void insertS(int x)
	{
		struct node* temp = malloc(sizeof(struct node));
		temp->data=x;
		temp->link=NULL;
		if(start==NULL){
                start=temp;
                return;
		}
		temp->link=start;
		start=temp;
		return;
	}
	void insertM(int x,int y){
	    struct node* temp=start;
	    struct node* t=malloc(sizeof(struct node));
	    t->data=y;
	    t->link=NULL;
        while(temp->data!=x&&temp->link!=NULL)
            temp=temp->link;
            if(temp->data==x){
                t->link=temp->link;
                temp->link=t;
                return;}
                printf("data not found , Consequently not added\n");
                return;
			}
	void insertE(int x){
		struct node* temp=start;
		struct node* t=malloc(sizeof(struct node));
		t->data=x;
		t->link=NULL;
		if(start==NULL){
			start=t;
			return;
		}
		while(temp->link!=NULL)
            temp=temp->link;
		temp->link=t;
		return;
	}
	void display(){
		struct node* temp=start;
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->link;
		}
		printf("\n");

	}
	int main(){
		int n;
		do{
			printf("enter \t1.insertBegining\t2.InsertEnd\t3.insertinbetween\t4.delete\t5.display\n");
			scanf("%d",&n);
			switch(n){
				case 1:{
					int x;
					printf("give data\t");
					scanf("%d",&x);
					insertS(x);
					break;
				}
				case 2:{
					int x;
					printf("give data\t");
					scanf("%d",&x);
					insertE(x);
					break;
				}
				case 3:{
					int x,y;
					printf("give data after which node to be added\t");
					scanf("%d",&x);
					printf("data to be added\t");
					scanf("%d",&y);
					insertM(x,y);
					break;
				}
				case 4:{
					int x;
					printf("give datra to be deleted\t");
					scanf("%d",&x);
					delete(x);
					break;
				}
				case 5:{
					display();
					break;
				}
				default:
					printf("not a valid choice\n");
			}
			printf("do you want to continue 1.yes\t0.no");
			scanf("%d",&n);
		}while(n);
		return 0;

}
