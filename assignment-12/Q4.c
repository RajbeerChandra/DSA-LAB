#include<stdio.h>
void display( int *a,int n)
{
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
}
void insertion(int *a,int n)
{
    int k,j,i;
    for(i=0;i<=n-1;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
}
int main() 
{
    int a[]={12,54,65,7,23,9};
    int n=6;
    display(a,n);
    insertion(a,n);
    display(a,n);
    return 0;
}