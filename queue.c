#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int ch,n,val,x,i;
struct node{
	int data;
	struct node *next;
}*rear=NULL,*front=NULL,*temp;
void enqueu(){
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=n;
	new->next=NULL;
	if(rear==NULL){
		front=new;
		rear=new;
	}
	else{
	    rear->next=new;
	    rear=new;
	}
}
void dequeu(){
	if(rear==NULL){
		printf("empty");
	}
	else
	{
		printf("%d is the deleted element",n);
		temp=rear;
		rear=rear->next;
		temp->next=NULL;
		free(temp);
	}
}
void display(){
	temp=front;
	if(front==NULL){
		printf("empty");
	}
	else{
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
    while(ch!=4)
    {
        printf("\n Enter your Choice:");
        printf("\n\t 1.enqueu\n\t 2.dequeu\n\t 3.DISPLAY\n\t 4.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {   printf("enter value to insert");
		scanf("%d",&n);
                enqueu( n);
                break;
            }
            case 2:
            {
                dequeu();
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

