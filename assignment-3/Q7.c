#include <stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int sumArrayElements(int arr[], const int N)
{
    if (N <= 0)
    {
        return 0;
    }
    return (sumArrayElements(arr, N - 1) + arr[N - 1]);
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    const int N = ARRAY_SIZE(arr);
    printf("%d\n", sumArrayElements(arr, N));
    return 0;
}
