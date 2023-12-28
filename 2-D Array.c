//WAP to print the sum of each row and each column of a 2D array
#include<stdio.h>
void main()
{
    int sum1,sum2,i,j;
  //lets declare the 2D array
    int array[2][3]={
                    {1,2,3},
                    {4,5,6}
                    };

    //Calculate sum of rows
    printf("Sum of rows:");
    for(i=0;i<2;i++)
    {
        sum1=0;
        for(j=0;j<3;j++)
        {
            sum1=sum1+array[i][j];
        }
        printf("\n%d",sum1);
    }

   //calculate sum of columns
     printf("\nSum of columns:");
    for(j=0;j<3;j++)
    {
        sum2=0;
        for(i=0;i<2;i++)
        {
            sum2=sum2+array[i][j];
        }
        printf("\n%d",sum2);
    }
        
}
