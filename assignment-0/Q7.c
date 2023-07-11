#include<stdio.h>
void main()
{
    int a[12][12];
    int i,j,r,c,s=0;
    printf("Enter  number of rows and columns");
    scanf("%d%d",&r,&c);
    printf("Enter no.\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
       for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("The sum of diagonal elements=%d",s);
}