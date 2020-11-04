#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 10
char stack[size];

void push(char x) {
	 stack[++top] = x;
}

char pop() {
	 return (arr[top--];
			 }
		 
infixposfix(int stack[i]){
 	while ((ch = stack[i++]) != '\n') {
	 if (ch == '(')
	 push(ch);
	 else if (isalnum(ch))
	 postfix[i++] = ch;
	 else if (ch == ')') {
	 	while (s[top] != '(')
	 		postfix[i++] = pop();
	 		x= pop();
}
}
}
			
int main()
{
	int ch,n,i;
	while(ch!=3){
		printf("Enter your choice:");
		scanf("%d",&ch);
		printf("1.Infix to postfix\n\t2.Evaluate expression\t\n");
		switch(ch){
			case 1:
				printf("enter your expression: ");
				for(i=0;i<n;i++){
				scanf("%d",&qarr [i]);
				infixposfix(qarr[]);
				break;
				}
			case 2:
				printf("enter your expression: ");
				for(i=0;i<n;i++){
				scanf("%d",&qarr[i]);
				evaluate(qarr[]);
				break;
				}
			case 3:
				printf("EXIT\n");
				break;
			defult:
				printf("Invalid choice\n");
		}
	}
	return 0;
}				
