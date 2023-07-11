#include <stdio.h>
#include <stdlib.h>
int fun(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int kthSmallest(int arr[], int n, int k)
{
    qsort(arr, n, sizeof(int), fun);
	return arr[k - 1];
}
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 2;
	printf("K'th smallest element is %d",
    kthSmallest(arr, n, k));
	return 0;
}

