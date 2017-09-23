#include<stdio.h>
#include<stdlib.h>

struct node{
    char c;
    struct node* link;
    }*start=NULL;

    void push(char x){
        struct node* t=malloc(sizeof(struct node));
        t->c=x;
        t->link=NULL;
        if(start==NULL){
            start=t;
            return;
        }
        t->link=start;
        start=t;
        return;

    }

    void pop(){
        struct node *temp=start;
        if(start!=NULL)
            start=start->link;
        free(temp);
        return;
    }
    void display(){
    struct node* temp=start;
    while(temp!=NULL){
        printf("%c",temp->c);
        temp=temp->link;
    }
	printf("\n");
	}

    char top(){
        return(start->c);
    }

    int isempty(){
    if(start==NULL)
        return 1;
        return 0;
    }

void main(){
	char str[40];
	printf("give string");
	scanf("%[^\n]s",str);
	int i=0;
	while(str[i]!=0){
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
          {
              push(str[i]);
              display();
          }
        else if(str[i]==')'||str[i]=='}'||str[i]==']'){
            if(isempty()){
                printf("not matching error here \ncode:balance_parenthesis_stack.c:unpaired symbol '%c' @character %d",str[i],i+1);
                return;
                }
                else{
                if(str[i]==')'&&top()=='('||str[i]=='}'&&top()=='{'||str[i]==']'&&top()=='[')
                  {
                       pop();
                       display();
                  }
                else{
                        printf("not matching error here \ncode:balance_parenthesis_stack.c:unpaired symbol '%c' @character %d\n",str[i],i+1);
                        return;
                }
            }
        }

        i++;
	}

	if(isempty())
        {
            printf("no unpairied brackets\n");
            return;
            }
    printf("not all paired brackets");
	return;
	}
