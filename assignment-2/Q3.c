#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *p,n,i,ele;
    printf("Enter length");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter number in array");
    for (i=0;i<=n;i++)
    {
        scanf("%d",&p+i);
    }
    for (i=0;i<=n;i++)
    {
        scanf("%d",&p+i);
    }
    printf("Enter the item to be searched: ");
   scanf("%d", &ele);
   
    for (i=0;i<n;i++)
    {
    if((*p+i)==ele)
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
