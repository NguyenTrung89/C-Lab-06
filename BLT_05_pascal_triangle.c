//BLT 05. Dung mang 2 chieu 10x10 de hien thi tam giac Pascal.
#include<stdio.h>

int main()
{
	int pascalTriangle[10][10];
	int i, j, space;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j <= i; j++)
		{
			if(j == 0 || j == i)
			{
				pascalTriangle[i][j] = 1;
			}
			else
			{
				pascalTriangle[i][j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
			}
		}
	}
	
	//Display
	for(i = 0; i < 10; i++)
	{
		for(space = 10; space >= i; space--)
		{
			printf("  ");
		}
		
		printf("%d", pascalTriangle[i][0]);
		
		for(j = 1; j <= i; j++)
		{
			printf(" . %d", pascalTriangle[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
