#include<stdio.h>
#include<stdlib.h>
struct node{
    char x;
    struct node* link ;};
struct node* top=NULL;
void push(char c){
    struct node* temp=malloc(sizeof(struct node));
        temp->x=c;
    if(top==NULL){
            top=temp;
            temp->link=NULL;
        }
        else{
            temp->link=top;
            top=temp;
        }
    }
void pop(){
    struct node* temp=top;
    top=temp->link;
    free(temp);}
char rtop(){
    return top->x;}
int main(){
printf("give string\n");
char x[100];
scanf("%s",x);
int l=strlen(x);
int i;
for(i=0;i<l;i++){
    push(x[i]);
}
for(i=0;i<l;i++){
        x[i]=rtop();
        pop();
}
printf("%s",x);
return 0;}
