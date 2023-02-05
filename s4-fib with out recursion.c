#include<stdio.h>
void fib(n)
{
	static int i,c,a=0,b=1;
	if(i<n)
	{
		c=a+b;
		a=b;
		b=c;
		
		printf("%d ",c);
		fib(n-1);
	
	}
}
int main()
{
	int n,a=0,b=1,c;
	printf("enter the fibonacci number=");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	fib(n-2);
	
}
