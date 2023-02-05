#include<stdio.h>
void fac(n)
{
	
	int i,temp=1;
	for(i=n ;i>0;i--)
	{
		temp=temp*n;
		n=n-1;
	} 
	printf("%d",temp);
	
}
int main()
{
	int i=0,n,temp;
	printf("enter the factorial number =");
	scanf("%d",&n);
	fac(n);
}
