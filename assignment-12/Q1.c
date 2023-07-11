#include<stdio.h>
void display( int *a,int n)
{
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void bubble(int *a,int n)
{
    int t;
    for (int i = 0; i <n-1; i++)
    {
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
        }
    }
}
void GoodBubble(int *a,int n)
{
    int t;
    int s=0;
for (int i = 0; i <n-1; i++)
{
    printf("passes=%d\n",i+1);
    s=1;
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];    
            a[j+1]=t;
            s=0;
        }
    }
    if(s)return;
    }    
}
int main() 
{
    // int a[]={5,4,3,2,1,0};
    int a[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int n=11;
    // scanf("%d"&a[5]);
    printf("unsorted Array");
    display(a,n);
    printf("Sorted Array");
    bubble(a,n);
    GoodBubble(a,n);
    display(a,n);
    display(a,n);
    return 0;
}