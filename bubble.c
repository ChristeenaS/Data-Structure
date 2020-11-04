#include<stdio.h>
void sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array is:");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
void main()
{
	int i,n,a[20];
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
}
