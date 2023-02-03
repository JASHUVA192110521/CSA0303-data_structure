#include<stdio.h>
int main()
{
	int i,n,arr[10],even[10],odd[10],e=0,o=0;
	printf("enter the number=");
	scanf("%d",&n);
	printf("enter the  set of number\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    }
    printf("even number=");
    for(i=0;i<n;i++)
    {
    	if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
		
	}
	printf("\nodd number=");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0 )
		{
		      printf("%d ",arr[i]);
			
		}
	}
}
