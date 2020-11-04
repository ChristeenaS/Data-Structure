#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
}*ptr,*node,*parent,*root=NULL;
int flag,x;
void insert(int key)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->right=NULL;
	newnode->left=NULL;
	if(root==NULL){
		root=newnode;
	}
	else
	{
		ptr=root;
		flag=0;
		while(ptr!=NULL && flag==0)
		{
			if(key<ptr->data)
			{
				parent=ptr;
				ptr=ptr->left;
			}
			else if(key>ptr->data)
                        {
                                parent=ptr;
                                ptr=ptr->right;
                        }
			else
				flag=1;
		}
		if(flag==1){
			printf("key is present");
			exit;
		}
		else{
			if(key>parent->data){
				parent->right=newnode;
			}
			else{
				parent->left=newnode;
			}
		}
	}
}
int search(int y)
{
	ptr=root;
	flag=0;
	while(ptr!=NULL && flag==0)
	{
		if(y<ptr->data){
			ptr=ptr->left;
		}
		else if(y>ptr->data){
			ptr=ptr->right;
		}
		else 
			flag=1;
	}
	if(flag==1){
		printf("y is found");
	}
	else
	{
		printf("y is not found");
	}
}
void delete(int d){
	int x;
	if(!root){
		printf("Tree is empty\n");
		return;
	}
	struct node *ptr=root,*parent=NULL;
	int flag=0;
	while(ptr!=NULL && flag==0){
		if(ptr->data==d){
			flag=1;
		}
		else if(ptr->data>d){
			parent=ptr;
			ptr=ptr->left;
		}
		else{
			parent=ptr;
			ptr=ptr->right;
		}
	}
	if(flag==0){
		printf("Value not found\n");
		return;
	}
	else{
		if(ptr->left==NULL && ptr->right==NULL){
			if(parent->left==ptr){
				parent->left=NULL;
			}
			else{
				parent->right=NULL;
			}
			free(ptr);
		}
		else if(ptr->left!=NULL && ptr->right!=NULL){
			struct node *next=ptr->right;
			while(next->left){
				next=next->left;
			}
			ptr->data=next->data;
			free(next);
		}
		else{
			if(parent->left==ptr){
				if(ptr->left==NULL){
					parent->left=ptr->right;
				}
				else{
					parent->left=ptr->left;
				}
			}
			else{
				if(ptr->left==NULL){
					parent->right=ptr->right;
				}
				else{
					parent->right=ptr->left;
				}
			}
		}
	}
}
void preorder(struct node *root){
	if(root!=NULL){
                  printf("%d  ",root->data);
                  preorder(root->left);
                  preorder(root->right);
	}
	return;
}
void inorder(struct node *root){
	if(root!=NULL){
                  inorder(root->left);
                  printf("%d  ",root->data);
                  inorder(root->right);
	}
	return;
}
void postorder(struct node *root){
	if(root!=NULL){
                    postorder(root->left);
                    postorder(root->right);
                    printf("%d  ",root->data);
	}
	return;
}
void traversal()
{
	int p;
	while(p!=4){
	printf("\n1.PREORDER\n2.INORDER\n3.POSTORDER\n");
	printf("Enter your choice:");
        scanf("%d",&p);

	switch(p){
		case 1:
			preorder(root);
			break;
		case 2:
			inorder(root);
			break;
		case 3:
	                postorder(root);
			break;
		default:
			printf("invalid choice");
			break;
	}
	}
}
void main()
{
	int key,ch,y;
	while(ch!=5){
		printf("\n1.INSERTION\n2.DELETION\n3.TRAVERSAL\n4.SEARCH\n5.EXIT\n");
		printf("Enter your choice: ");
                scanf("%d",&ch);

		switch(ch){
			case 1:
				printf("enter value to insert:");
				scanf("%d",&key);
				insert(key);
				break;
			case 2:
				printf("Enter the value to be deleted:\n");
				scanf("%d",&x);
				delete(x);
				break;
			case 3:
				traversal();
				break;
			case 4:
				printf("enter data to search:");
				scanf("%d",&y);
				search(y);
				break;
			case 5:
				exit(0);
			default:
				printf("wrong choice");
				break;
		}
	}
}

