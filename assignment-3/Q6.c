#include <stdio.h>
#include <stdbool.h>
bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s * s == x);
}
bool isFibonacci(int n)
{
	return isPerfectSquare(5 * n * n + 4)|| isPerfectSquare(5 * n * n - 4);
}
int main()
{
	for (int i = 1; i <= 10; i++) {
		if (isFibonacci(i))
			printf("%d is a Fibonacci Number \n", i);
		else
			printf("%d is a not Fibonacci Number \n", i);
	}
	return 0;
}
