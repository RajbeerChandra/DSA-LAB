#include<stdio.h>
int main() 
{
int a[5];
int i,s=0;
for (i = 0; i < 5; i++)
{
    printf("Enter a no.");
    scanf("%d",&a[i]);
}
for (i = 0; i < 5; i++)
{
    s=s+a[i];
}
    printf("%d ",s);
    return 0;
}