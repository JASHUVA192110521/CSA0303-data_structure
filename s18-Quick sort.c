#include<stdio.h>
#include<stdlib.h>
void quick(int a[20],int f,int l){
	int i,j,p,n,temp;
	if(l<j)
	{
		p,i=f,f;
		j=l;
		while(i<j)
		{
			while(a[i]<=a[p]&& a[i]<l){
				i++;
			}
			while(a[j]>a[p]){
				j--;
			}
			if(i<j){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[p];
		a[p]=a[j];
		a[j]=temp;
		quick(a,f,j-1);
		quick(a,j+1,l);
	}
	printf("\n Quick sorting:\nshow result=\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
int main()
{
	int i,j,p,n,temp,a[10];
	printf("enter the number u want=");
	scanf("%d",&n);
	printf("enter the %d element=\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
    }
    quick(a,0,n-1);
}
