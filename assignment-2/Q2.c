#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *p,n,i;
      printf("Enter length of array");
      scanf("%d",&n);
      p=(int*)malloc(n*sizeof(int));
      printf("Enter %d Numbers:",n);
      for(i=0;i<n;i++)
      {
        scanf("%d",p+i);
      }
      printf("Array in Reverse Order\n");
      for(i=n-1;i>=0;i--)
      {
        printf(" %d",*(p+i));
      }
      return 0;
}
