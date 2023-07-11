#include<stdio.h>
int digi(int n)
{
    int d,c=0;
    while (n>0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    return c;
}
int main() 
{
    int n,c=0;
    printf("Enter a number ");
    scanf("%d",&n);
    c=digi(n);
    printf("Total digits in number %d is: %d",n,c);
    return 0;
}