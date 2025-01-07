#include<stdio.h>
void main()
{
	int i,j,n=5,c=1;
	for(i=1;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			printf("  ");
		}
		for(j=0;j<=n-i;j++)
		{
			printf("%d   ",c++);
		}
		printf("\n");
	}
	c--;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d   ",--c);
		}
		printf("\n");
	}
}
