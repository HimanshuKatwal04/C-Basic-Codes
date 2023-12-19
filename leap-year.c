/*A year is a leap year if the following conditions are satisfied: 
The end of century year is multiple of 400 for eg.2000.
The year is a multiple of 4 and not a multiple of 100.*/

#include<stdio.h>
void main()
{
    int year;
    printf("Ënter the year \t");
    scanf("%d", &year);
    
    if(year%400==0)
    {
        printf("Ïts a leap year");
    }
    else if(year%100!=0 && year%4==0)
    {
        printf("Its a leap year");
    }
    else
    {
        printf("Ïts not a leap year");
    }
    
}
