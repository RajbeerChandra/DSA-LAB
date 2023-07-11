#include<stdio.h>
int main() 
{
int a[50];
int i;
for (i = 0; i < 50; i++)
{
    printf("Enter a no.");
    scanf("%d",&a[i]);
}
for (i = 0; i < 50; i++)
{
    printf("%d ",a[i]);
}
    return 0;
}