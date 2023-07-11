#include<stdio.h>
int palin(int n)
{
    int t,d,s=0;
    t=n;
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    return s;
}
int main() 
{
    int t,n,pallin,s;
    printf("Enter vale of n");
    scanf("%d",&n);
    pallin=palin(n);
    t=n;
    if(s==t)
    printf("palindrome no.");
    else
    printf("not palindrome no.");
    return 0;
}