
#include<stdio.h>
void main()
{
 int arr1[50],arr2[50],arr3[100],m,n,i,j,k=0;
 clrscr();
 printf("\nEnter the size of array1:");
 scanf("%d",&m);
 printf("\nEnter the sorted elements of array1:\n");
 for(i=0;i<m;i++)
 {
  scanf("%d",&arr1[i]);
  }
 printf("\nEnter the size of array2:");
 scanf("%d",&n);
 printf("\nenter the sorted elements of the array2:\n");
for(i=0;i<n;i++)
  {
   scanf("%d",&arr2[i]);
  }
 i=0;
 j=0;
 while(i<m&&j<n)
  {
   if (arr1[i]<arr2[j])
   {
    arr3[k]=arr1[i];i++;
   }
   else
   {
    arr3[k]=arr2[j];j++;
   }
   k++;
  }
   if(i>=m)
   {
    while(j<n)
     {
      arr3[k]=arr2[j];j++;
      k++;
     }
   }
  if(j>=n)
  {
  while(i<m)
   {
    arr3[k]=arr1[i];
    i++;
    k++;
   }
  }
  printf("\nAfter merging:\n");
  for(i=0;i<m+n;i++)
  {
  printf("%d",arr3[i]);
  }
 getch();
 }