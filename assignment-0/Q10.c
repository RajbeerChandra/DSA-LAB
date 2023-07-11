#include <stdio.h>
int main()
{
    int a;
    long f, fact();
    printf(" Enter a Number : ");
    scanf("%d", &a);
    f = fact(a);
    printf(" The Factorial of %d is : %ld", a, f);
    return 0;
}
long fact(int b)
{
    int i;
    long f = 1;
    for (i = 1; i <= b; i++)
        f = f * i;
    return (f);
}