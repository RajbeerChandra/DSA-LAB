#include<stdio.h>
void display( int *a,int n)
{
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
}
void selectionSort(int *A, int n){
    int min, temp;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[min]){
                min= j;
            }
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}
int main()
{
    
 int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    display(A, n);
    selectionSort(A, n);
    display(A, n);
    return 0;
}