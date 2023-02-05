#include<stdio.h>
int main()
{
	int i,j,n,s,t,temp,a[10],b[10];
	printf("enter the number of element=");
	scanf("%d",&n);
	printf("enter elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter searching elements=");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	int low=0,high=n,mid=0;
	printf("AScending order:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		mid=(low+high)/2;
		
		if(a[mid]==s)
		{
			printf("\nelement found index is %d",mid);
			break;
		}
		else if(a[mid]>s)
		{
			low=0;
			high=mid;		
		}
		else
		{
			low=mid;
			high=n;
		}
	}
}
