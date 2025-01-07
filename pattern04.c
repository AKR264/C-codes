#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
