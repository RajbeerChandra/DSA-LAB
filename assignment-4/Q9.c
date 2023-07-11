#include <stdio.h>
void segregate(int arr[], int n)
{
	int c = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			c++;
for (int i = 0; i < c; i++)
		arr[i] = 0;
	for (int i = c; i < n; i++)
		arr[i] = 1;
}
void print(int arr[], int n)
{
		for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[] = { 0, 1, 0, 1, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	segregate(arr, n);
	print(arr, n);
	return 0;
}

