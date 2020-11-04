#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int ch,n,val,x,i;
struct node
{
	int data;
	struct node *next;
}*temp,*top=NULL;
void push(int n)
{
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
	if(top==NULL){
		new->data=n;
		new->next=NULL;
		top=new;
	}
	else{
		new->data=n;
		new->next=top;
		top=new;
	}
}
void pop()
{
	if(top==NULL){
		printf("Empty");
	}
	else
	{
		temp=top;
		val=top->data;
		printf("deleted is %d",top->data);
		top=top->next;
		temp->next=NULL;
		free(temp);
	}
}
void display()
{
	if(top==NULL){
		printf("empty");
	}
	else
	{
		temp=top;
		while(temp!=NULL){
			printf(" %d",temp->data);
			temp=temp->next;
		}
	}
}

int main()
{
    while(ch!=4)
    {
        printf("\n Enter your Choice:");
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {   printf("enter value to insert");
		scanf("%d",&n);
                push(n);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:            {
                printf("EXIT");
                break;
            }
            default:
            {
                printf ("invalid choice");
            }

        }
    }
    return 0;
}

