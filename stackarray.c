#include<stdio.h>
int stack[15],ch,n,top,x,i;
void push(int n)
{
    if(top>=n-1)
    {
        printf("STACK is over flow");
    }
    else
    {
        printf(" insert value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf(" Stack is under flow");
    }
    else
    {
        printf("\n The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf(" The elements are: \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\n STACK is empty");
    }
    
}

int main()
{
    top=-1;
    while(ch!=4)
    {
        printf("\n Enter your Choice:");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push(15);
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
