#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,i,j,t;
    printf("Enter length ");
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter numbers", n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",(a+i));
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<=i;j++)
    {
        if(*(a+i)<*(a+j))
    {
        t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
    }
    }
    }
    printf("sorted array\n");
    for (i=0;i<n;i++)
        printf("%d ",*(a+i));
    return 0;
}