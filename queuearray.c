#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAX 3
int ch;
int arr[MAX];
int front=-1;
int rear=-1;
void enqueu(int x)
{
	if(rear==MAX-1){
		printf("queue is full");
	}
 
       	else if(rear==-1){
		    front=0;
		    rear=0;
                    arr[rear]=x;

	}
	else{
		rear=rear+1;
		arr[rear]=x;
	}
}
void dequeue(){
	int x;
	if(front==-1){
		printf("empty");
	}
	else if (front==rear){
		printf("deleted element is %d",arr[front]);
		front=rear=-1;
	}
	else{
	
		x=arr[front];
		printf("deleted element is %d",x);
		front++;

	}
}
void display(){
	if(rear==-1){
		printf("empty");
	}
	else
	{
		printf("queue is:");
		for(int i=front;i<=rear;i++){
			printf("%d",arr[i]);
		}
	}
}


int main()
{
	int n;
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
                dequeue();
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

