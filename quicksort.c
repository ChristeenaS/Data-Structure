#include<stdio.h>
int left,right,pivot,a[10];
int partition(int a[],int lb,int ub)
{
	int temp;
	pivot=a[lb];
	left=lb;
        right=ub;
	while(left<right){
	while(a[left]<=pivot && left<right)
	{
		left++;
	}
	while(a[right]>pivot && left<right)
	{
		right--;
	}

		temp=a[left];
		a[left]=a[right];
		a[right]=temp;
}
	if(right<left)
	{
		temp=a[lb];
		a[lb]=a[right];
		a[right]=temp;
	}
	return right;
}
void quicksort(int a[],int left,int right)
{
        if(left<right)
        {
                int p;
                p=partition(a,left,right);
                quicksort(a,left,p-1);
                quicksort(a,p+1,right);
        }
}

void main()
{
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements to be sorted:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	left=a[0];
	right=a[n-1];
	quicksort(a,left,right);
	printf("sorted array is:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}



