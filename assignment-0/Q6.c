#include<stdio.h>
int main()
{
 	int i, j, r, c, a[10][10], b[10][10];
 	int arr[10][10];
   	printf("Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
  	printf("Enter no.");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		scanf("%d", &a[r][c]);
    	}
  	}
   	printf("Enter the Second Elements\n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		scanf("%d", &b[r][c]);
    	}
  	}
   	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		arr[r][c] = a[r][c] * b[r][c];    
   	 	}
  	}
  	printf(" The Sum of Two matrice \n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		printf("%d \t ", arr[r][c]);
    	}
    	printf("\n");
  	}
 	return 0;
}