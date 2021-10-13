#include <stdio.h> // program to merge two arrays
#include <stdlib.h>

int main()
{
    int arr[10],arr1[5],i,n,m;
    printf("enter the size of first array \n");
    scanf("%d",&n);

    printf("enter the size of second array \n");
    scanf("%d",&m);
   printf("enter the elements of the first array \n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

   printf("enter the elements of the second array \n");
  for(i=0;i<m;i++)
    scanf("%d",&arr1[i]);
  for(i=0;i<n;i++)
 {

  arr[i+n]=arr1[i];}
  printf("the new array is \n");
  for(i=0;i<m+n;i++)
  printf("%d \n",arr[i]);




    return 0;
}
