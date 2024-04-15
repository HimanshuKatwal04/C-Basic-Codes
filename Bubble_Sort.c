//WAP to sort an array using Bubble Sort/Sinking Sort

#include<stdio.h>

int main()
{
  int a[100],n,temp;
printf("Enter the number of elements");
scanf("%d", &n);

for(int x=0;x<n;x++)
  {
    printf("Enter the element");
    scanf("%d", &a[x]);
  }

for(int x=0;x<n;x++)
  {
    for(int y=x+1;y<n;y++)
      {
        if(a[x]>a[y]){
              temp=a[x];
              a[x]=a[y];
              a[y]=temp;
            }
      }
  }
printf("The sorted array is \n ");
for(int x=0;x<n;x++)
  {
    
    printf("%d,", a[x]);
  }
}

        
