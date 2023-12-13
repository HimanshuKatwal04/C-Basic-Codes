//WAP to check Armstorng without using math.h
#include<stdio.h>
void main()
{
	int a,d,s=0,k=1,r,x,y;
	printf("Enter the number you want to check  ");
	scanf("%d", &a);

	// create two duplicate values of 'a' since a will terminate in the further program
	int temp=a;
	int flag=a;

	//Use while loop to count the number of digits in the number
	int c=0;
	while(a!=0)
	{
		d=a%10;
		c+=1;    //c is taken as a counter here
		a=a/10;
	}

	//1st loop runs till the number of digits that is counted
	for(x=1;x<=c;x++)
	{
	r=temp%10;

		//2nd loop is used to multiply the digits without using math lib
	for(y=1;y<=x;y++)
	{
		
		k*=r;
	}
	s=s+k; 
	temp=temp/10;
	}

	//check if the sum 's' matches with the duplicate value flag since 'temp' and 'a' are already terminated
	if(s==flag)
	{
		printf("The number is armstrong");
	}
	else
	{
		printf("Thee number is not Armstrong");
	}
}
