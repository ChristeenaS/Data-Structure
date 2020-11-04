#include<stdio.h>
int a[5],lb,ub,mid;
int mergesort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
merge(int a,int lb,int mid,int ub)
{
	int k=0,i=0,j=mid+1,temp;
	while(i<mid && j<ub){
		if(a[i]>a[j]){
			temp[k]=a[j];
			i++;
			k++;
		}
		else{
			temp[k]=a[j];
			i++;
			k++;
		}
		while(i<=mid){
			temp[k]=a[i];
			k++;
			i++;
		}
		while(j<=ub){
			temp=k;
			k++;
			j++;
		}
	}
}

int main()
{
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements to be sorted:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a[],lb,mid,ub);
	printf("sorted array is:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

