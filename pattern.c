#include<stdio.h>
void main()
{
	int rows;
	
	printf("Enter the number of rows");
	scanf("%d", &rows);
	
	for(int x=0;x<rows+1;x++)
	{
		for(int y=rows;y!=x;y--)
		{
			printf("_");
			
		}
		for(int z=0;z<(x*2)-1;z++)
		{
			
			printf("*");
		}
		printf("\n");
		
	}
}
