\\WAP to print the maximum and minimum value in an array entered by the user
#include<stdio.h>
void main()
{
	int a[50],n,max,min;
	printf("Enter number of terms in an array");
	scanf("%d", &n);
	for(int x=1;x<=n;x++)
	{
		printf("Enter an element");
		scanf("%d", &a[x]);
	
	
	max=a[x];
	min=a[x];
	}
	for(int y=1;y<=n;y++)
	{
		
		if(a[y]>max)
		{
			max=a[y];
		}
		else if(a[y]<min)
		{
			min=a[y];
		}
	}
	
	printf("Maximum= %d",max);
	printf("\n Minmimum=%d",min);
}
