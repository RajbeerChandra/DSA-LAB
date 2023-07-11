#include<stdio.h>
int digit(int n);
int main() 
{
    int n,digi;
    printf("Enter a number ");
    scanf("%d",&n);
    digi= digit(n);
    printf("First digit in number %d is: %d",n,digi);
    return 0;
}
int digit(int n)
{
    while (n>=10)
    {
        n=n/10;
    }
    return n;
}
