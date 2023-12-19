//WAP TO PRINT A PYRAMID PATTERN

#include<stdio.h>
void main()
{
	int rows;
	
	printf("Enter the number of rows");
	scanf("%d", &rows);
	
	for(int x=0;x<rows+1;x++)//LOOP FOR THE LOOP
	{
		for(int y=rows;y!=x;y--)//LOOP FOR THE SPACES
		{
			printf("_");
			
		}
		for(int z=0;z<(x*2)-1;z++)//LOOP FOR THE CHARACTER
		{
			
			printf("*");
		}
		printf("\n");
		
	}
}
