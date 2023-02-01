#include<stdio.h>
int main()
{
	int n,i,j,k,m,a[3][3],b[3][3],c[3][3];
	printf("enter the number of rows =");
	scanf("%d",&n);
	
	printf("enter the number of columns =");
	scanf("%d",&m);
	printf("enter first matrix:A\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter the second matrix:B\n");
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=m;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			c[i][j]=0;
			for(k=1;k<=m;k++)
			{
			    c[i][j]=c[i][j]+a[i][k]*b[j][k];
			
			}
		}
	}
	printf("matrix A:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("matrix B:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("output is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	

}
