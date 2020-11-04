#include<stdio.h>
#include<malloc.h>
struct node{
	int x;
	struct node *head;
};
/*void insert;
void delete;
void search;*/
void traversal;
void main()
{
	char ch;
	while(i<5){
		switch(ch){
			printf("enter your choice:
				1.insertion
				2.deletion
				3.search
				4.traversal
				5.exit
				");
			printf("%d",&ch);
			switch(ch){
				case1:
				      insert();
				      break;
				case2:
				      delete();
				      break;
				case3:
				      search();
				      break;
				case4:
				      traversal();
				      break;
			        default;
				      break;
			}
		}
	}
}

/*void insert(int x,int pos,struct node *head){
	printf("enter position to insert");
	scanf("%d",&pos);
	printf("enter value to insert");
	scanf("%d",&x);
	struct node*newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(head==NULL){
		printf("out of memory");
		exit;
	}
}*/

void traversal(struct node *temp){
	if(head==NULL)
	{
		printf("empty list");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("data=%d\n",temp->data);
		temp=temp->next;
	}
}









