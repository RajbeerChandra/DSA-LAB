#include <stdio.h>
int main() 
{
   int n, i, ele, arr[30];
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("Enter the array elements: ");
   for (i = 0; i < n; i++)
    {
    scanf("%d", &arr[i]);
   }
   printf("Enter the item to be searched: ");
   scanf("%d", &ele);
   i = 0;
for (i=0;i<n;i++)
{
    if(arr[i]==ele)
    {
        break;
    }
}
   if (i < n)
    {
    printf("The element is found in the position = %d", i + 1);
   } 
   else
   {
    printf("Element not found!");
   }
    return 0;
}