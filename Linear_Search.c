//Program to find an element from a collection of elements i.e. an array using linear search technique

#include<stdio.h>

int main()
{
  int arr[6]={2,5,8,9,10,34};
  int key,c,flag;
  printf("Enter the element you want to find");
  scanf("%d",&key);

  for(int x=0;x<6;x++)
     {
        if(arr[x]==key){
            flag=1;
            c=x;
            break;
        }
     }
if(flag==1)
    {
      printf("The element is found at index %d",c);
    }
else{
      printf("No such element is found");
    }
}
