#include<stdio.h>
int reverse(int n)
{
    int s=0,d;
    while (n>0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    return s;
}
int removeeven(int n)
{
    int s=0,d;
    n=reverse(n);
    while (n>0) 
    {
        d=n%10;
        s=s*10+d; 
        n=n/100; 
    }
    return s;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    n = removeeven(n);
    printf("Number after removing even no.: %d", n);
}