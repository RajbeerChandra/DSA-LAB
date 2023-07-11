#include<stdio.h>
void display( int *a,int n)
{
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void MergeSort(int a[],int mid,int low,int high)
{   
    int i,j,k,b[100];
    i=low;
    k=low;
    j=mid+1;
     while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
        while (i <= mid)
        {
            b[k] = a[i];
            k++;
            i++;
        }
        while (j <= high)
        {
            b[k] = a[j];
            k++;
            j++;
        }
        for (int i = low; i <= high; i++)
        {
            a[i] = b[i];
        }
    }
void MS(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        MS(a,low,mid);
        MS(a,mid+1,high);
        MergeSort(a,mid,low,high);
    }
}
int main()
{
    // int a[] = {3, 5, 2, 13, 12};
    int a[] = {10,9,8,7,6,5,4,3,2,1,0};
    int n =11 ;
    display(a, n);
    MS(a,0,10);
    display(a, n);
    return 0;
}