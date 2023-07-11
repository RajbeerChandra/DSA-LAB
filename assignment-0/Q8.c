#include<stdio.h>
int main()
{
 	int i,j, r,s=0, c, a[10][10];
    printf("Enter Number of rows and columns  :  ");
 	scanf("%d %d", &r, &c);
  	printf("Enter no.");
    for(i=0;i<r;i++)
          for(j=0;j<c;j++)
          {
            scanf("%d",&a[i][j]);
          }
     printf("\n%d*%d Matrix : \n\n",r,c);
     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
          {
               printf("%2d ",a[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<r;i++)
          for(j=0;j<c;j++)
               s=s+a[i][j];
     printf("\nSum of All Elements in Matrix = %d",s);   
 	return 0;
}