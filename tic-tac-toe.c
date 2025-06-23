#include<stdio.h>
void grid(char a[5][5]);
int gridempty(char a[5][5]);
int gridcheck(char a[5][5]);

int main()
{
	printf("  **tic tac toe**");
	printf("\n(Two - player Game)\n\n");
	char a[5][5] = {{' ','|',' ','|',' '},
	                {'-','+','-','+','-'},
			        {' ','|',' ','|',' '},
	                {'-','+','-','+','-'},
			        {' ','|',' ','|',' '}}; 
	char b=' ';
	int m,n;
    grid(a);
	printf("\nChoose the player to make the 1st move(X/O): ");
	scanf("%c",&b);
	if(b=='X' || b=='x')
	{
		printf("\nPlayer X makes the first move");
		while (gridempty(a)) {
            printf("\nPlayer X enter row and column (1-3): ");
            scanf("%d%d", &m, &n);
            if(a[2*(m-1)][2*(n-1)] == ' ') {
                a[2*(m-1)][2*(n-1)] = 'X';
            } else {
                printf("Cell already taken. Try again.\n");
                continue;
            }
            grid(a);
            if(gridcheck(a)) break;
            if(!gridempty(a)) break;

            printf("\nPlayer O enter row and column (1-3): ");
            scanf("%d%d", &m, &n);
            if(a[2*(m-1)][2*(n-1)] == ' ') {
                a[2*(m-1)][2*(n-1)] = 'O';
            } else {
                printf("Cell already taken. Try again.\n");
                continue;
            }
            grid(a);
            if(gridcheck(a)) break;
            if(!gridempty(a)) break;
        }
	}
	else if(b=='O' || b=='o')
	{
		printf("\nPlayer O makes the first move");
		while (gridempty(a)) {
            printf("\nPlayer O enter row and column (1-3): ");
            scanf("%d%d", &m, &n);
            if(a[2*(m-1)][2*(n-1)] == ' ') {
                a[2*(m-1)][2*(n-1)] = 'O';
            } else {
                printf("Cell already taken. Try again.\n");
                continue;
            }
            grid(a);
            if(gridcheck(a)) break;
            if(!gridempty(a)) break;

            printf("\nPlayer X enter row and column (1-3): ");
            scanf("%d%d", &m, &n);
            if (a[2*(m-1)][2*(n-1)] == ' ') {
                a[2*(m-1)][2*(n-1)] = 'X';
            } else {
                printf("Cell already taken. Try again.\n");
                continue;
            }
            grid(a);
            if(gridcheck(a)) break;
            if(!gridempty(a)) break;
        }
	}
	else
	{
		printf("\nInvalid choice");
	}
	return 0;
}
void grid(char a[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
int gridempty(char a[5][5])
{
	int i,j,count=0;
	for(i=0;i<5;i+=2)
	{
		for(j=0;j<5;j+=2)
		{
			if(a[i][j] != ' ')
			{
				count++;
			}
		}
	}
	if(count==9)
	{
		printf("\nNo one wins!!");
		return 0;
	}
	return 1;
}
int gridcheck(char a[5][5])
{
	if((a[0][0]=='X' && a[0][2]=='X' && a[0][4]=='X'))
	{printf("\nPlayer X wins");return 1;}
	else if((a[2][0]=='X' && a[2][2]=='X' && a[2][4]=='X'))
	{printf("\nPlayer X wins");return 1;}
	else if((a[4][0]=='X' && a[4][2]=='X' && a[4][4]=='X'))
	{printf("\nPlayer X wins");return 1;}
	else if((a[0][0]=='X' && a[2][0]=='X' && a[4][0]=='X'))
	{printf("\nPlayer X wins");return 1;}
	else if((a[0][2]=='X' && a[2][2]=='X' && a[4][2]=='X'))
	{printf("\nPlayer X wins");return 1;}
	else if((a[0][4]=='X' && a[2][4]=='X' && a[4][4]=='X'))
	{printf("\nPlayer X wins");return 1;}
	else if((a[0][0]=='X' && a[2][2]=='X' && a[4][4]=='X'))
	{printf("\nPlayer X wins");return 1;}
	else if((a[0][4]=='X' && a[2][2]=='X' && a[4][0]=='X'))
	{printf("\nPlayer X wins");return 1;}
	
	
	else if((a[0][0]=='O' && a[0][2]=='O' && a[0][4]=='O'))
	{printf("\nPlayer O wins");return 1;}
	else if((a[2][0]=='O' && a[2][2]=='O' && a[2][4]=='O'))
	{printf("\nPlayer O wins");return 1;}
	else if((a[4][0]=='O' && a[4][2]=='O' && a[4][4]=='O'))
	{printf("\nPlayer O wins");return 1;}
	else if((a[0][0]=='O' && a[2][0]=='O' && a[4][0]=='O'))
	{printf("\nPlayer O wins");return 1;}
	else if((a[0][2]=='O' && a[2][2]=='O' && a[4][2]=='O'))
	{printf("\nPlayer O wins");return 1;}
	else if((a[0][4]=='O' && a[2][4]=='O' && a[4][4]=='O'))
	{printf("\nPlayer O wins");return 1;}
	else if((a[0][0]=='O' && a[2][2]=='O' && a[4][4]=='O'))
	{printf("\nPlayer O wins");return 1;}
	else if((a[0][4]=='O' && a[2][2]=='O' && a[4][0]=='O'))
	{printf("\nPlayer O wins");return 1;}
	return 0;
	
}
