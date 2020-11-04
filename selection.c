#include<stdio.h>
void select(int a[20],int n);
void main()
{
	int a[20],n,i;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	select(a,n);
}
void select(int a[20],int n)
{
	int temp,min,i,j;
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
		printf("sorted array is: ");
		for(i=0;i<n;i++){
			printf("\n%d",a[i]);
		}
	}

	

