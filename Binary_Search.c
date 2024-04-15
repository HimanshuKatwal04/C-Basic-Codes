/*WAP to enter an array and apply binary search technique to find a key element
*Here we are asking for an array and the key element to search from the user 
*We sort the array in an ascending order first to prepare for binary search
*/


#include<stdio.h>

int main()
{
  int a[10];
  int temp,n,mid,key;
printf("Enter the number of elements\n");
scanf("%d", &n);
//asking the array elements from the user
  for(int x=0;x<n;x++)
    {
      printf("Enter the element: ");
      scanf("%d", &a[x]);
    }
//Sorting the array in ascending order
  for(int x=0;x<n;x++)
    {
      for(int y=x+1;y<n;y++){
        if(a[x]<a[x+1])
            {
                temp=a[x];
                a[x]=a[x+1];
                a[x+1]=temp;
            }
        }
    }

printf("Enter the key elemt you want to search");
scanf("%d", &key);
  
int flag=0;
int low=0;
int high=n-1;
  
//Applying Binary Search
while(low<high)
{
  mid=(low+high)/2;
if(key==a[mid]){
  flag=1;
  break;
}
else if(key<a[mid]){
  high=mid-1;
}
else if(key>a[mid]){
low=mid+1;
}
}
if(flag==1)
{
  printf("Key is found " );
}
else{
  printf("Key element is not found");
}
}







