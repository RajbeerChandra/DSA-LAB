#include<stdio.h>
int get_max(int *A,int n)
{
    int max;
    for (int i=0;i<=n;i++)
    {
       int t=i+1;
        if(t>i)
        max=t;
    }
        return max;
}
void radix_sort(int *A,int n)
{
    int pos,max;
    int max1=get_max(*A,n);
    for (pos =1;(max/pos)>0;pos*10)
    {
        count_sort(A,n,pos);
    }
}
count_sort(int *A,int n,int pos)
{
    int count[5]=0;int k,i;int b[5+1];
    for(i=0;i<n;i++)
    {
    ++count[(A[i]/pos)%10];
    }
    for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[count((A[i]/pos)%10)]=A[i];
    }
    for(i=0;i<n;i++)
    {
        A[i]=b[i];
    }
}
void printArray(int A[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
}
int main() 
{
    int n=5;
    int A={1,2,3,4,5};
    
    return 0;
}