#include<stdio.h>

struct node{
	int data;
	struct node *left,*right;
}*root=NULL;
struct stack{
    struct node* link;
    struct stack* next;
} *sstart=NULL;

void push(struct node* t){
    struct stack* temp=malloc(sizeof(struct stack));
    temp->next=NULL;
    temp->link=t;
    if(sstart==NULL){
            sstart=temp;
            return;
    }
    temp->next=sstart;
    sstart=temp;
    return;
}
short isempty(){
    if(sstart=NULL)
        return 1;
        return 0;
    }
struct node* pop(){
    struct node* temp=sstart->link;
    sstart=sstart->next;
    return temp;
};
struct node* getmemory(int x){
	struct node* temp=malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->data=x;
	return temp;
}


void insert(int x){
    if(root==NULL)
		{
			root=getmemory(x);
			return;
		}
    struct node* pt=root;
    printf("\n*\n");
    while(1)
        {
			if(x>pt->data){
                    if(pt->right==NULL){
                            pt->right=getmemory(x);
                            return;
                    }
                    printf("%d",pt->data);
                    pt=pt->right;
            }
			else{
                    if(pt->left==NULL){
                        pt->left=getmemory(x);
                        return;
                    }
                    printf("%d",pt->data);
                    pt=pt->left;
            }
	}
}
void ax(struct node* base){
    printf("%d",base->data);
    if(base->right==NULL){
        if(isempty())
            return;
        base=pop();
        return ax(base);
    }
    base=base->right;
    return inorder(base);
}

void inorder( struct node* base){
    if(root==NULL)
        {
            printf("\nempty");
            return;
        }
    if(base->left==NULL){
        printf("%d",base->data);
        if(base->right==NULL){
            if(!isempty())
                {
                    base=pop();
                    return ax(base);
                }
                printf("");
                return;
        }
        base=base->right;
        return inorder(base);
    }
    push(base);
    base=base->left;
    return inorder(base);
}

char lookup(struct node* base ,int target){
    if(base==NULL)
		return 'f';
	if(base->data==target)
			return 't';
	if(target<base->data)
		return lookup(base->left,target);
		return lookup(base ->right,target);
	}

int main(){
    int sw;
    while(1){
        printf("\n1 insert\n2 find\n3 display:\n4 quit\t");
        scanf("%d",&sw);
        switch(sw){
        case 1:
            printf("element");
            scanf("%d",&sw);
            insert(sw);
            break;
        case 2:
            printf("give value:\t");
            scanf("%d",&sw);
            printf("%c",lookup(root,sw));
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            return 0;
        default:
            printf("not a valid choice");
        }
    }
}
