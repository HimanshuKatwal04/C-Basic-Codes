#include<stdio.h>
#define MAX 50
void main()
{
    int i,j,x,y,k;
    int arows,acolumns,brows,bcolumns;
    int A[MAX][MAX];
    int B[MAX][MAX];
    int P[MAX][MAX];
    int sum;
    
    printf("Enter the rows and columns of Matrrix A\n");
    scanf("%d %d", &arows, &acolumns);
    
    printf("\nEnter the rows and columns of Matrrix B\n");
    scanf("%d %d", &brows, &bcolumns);
    
    if(acolumns!=brows)
    {
        printf("\nSorry Matrices are not campatible");
    }
    else
    {
        printf("Enter the elements of the Matrix A\n");
        for(i=0;i<arows;i++)
        {
            for(j=0;j<acolumns;j++)
            {
                printf("A[%d][%d]");
                scanf("%d", A[x][y]);
            }
        }
        
        printf("Enter the elements of the Matrix B\n");
        for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                printf("\nB[%d][%d]");
                scanf("%d", B[x][y]);
            }
        }
    

    
    for(x=0;x<arows;x++)
    {
        for(y=0;y<bcolumns;y++)
        {
            for(k=0;k<arows;k++)
            {
                sum+=A[x][k]*B[k][y];
            }
            
            P[x][y]=sum;
            sum=0;
        }
    }
    for(x=0;x<arows;x++)
    {
        for(y=0;y<bcolumns;y++)
        {
            printf("%d",P[x][y]);
        }
        printf("\n");
    }
 }
    
 }

