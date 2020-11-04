#include<stdio.h>
void main(){
int a[20],temp,j,i,n,first,last,mid,key;
printf("enter size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
if(a[j]>a[j+1]){
for(i=0;i<n;i++){
	for(j=0;j<n-1;j++){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
}
printf("enter element to be searched:");
scanf("%d",&key);
first=0;
last=n;
for(i=0;i<n;i++){
	mid=(first+last)/2;
}
	if(a[mid]==key){
		printf("element found");
	}
	if(a[mid]<n){
		first=mid+1;
		printf("element found");
	}
	else{
		last=mid-1;
		printf("element found");
	}
}

