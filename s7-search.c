#include<stdio.h>
int main()
{
	int i,n,s,a[10],temp=0;
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
		if(a[i]==s)
		{
				temp=i;
		}
	}
	if(temp>0)
	{
		printf("element found index =%d",temp);
	}
	else
	{
		printf("not found");
	}
	return -1;
}
