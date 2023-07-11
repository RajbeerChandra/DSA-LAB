#include<stdio.h> 
void PrevNext(int a[], int n) 
{ 
    if (n <= 1) 
      return ; 
    int ele= a[0]; 
    a[0] = a[0] * a[1]; 
    for (int i=1; i<n-1; i++) 
    { 
        int cur_elem = a[i]; 
        a[i] =ele * a[i+1]; 
    ele = cur_elem; 
    } 
    a[n-1] =ele * a[n-1]; 
} 
int main() 
{ 
    int a[] = {1,2, 3, 4, 5, 6}; 
    int n = sizeof(a)/sizeof(a[0]); 
	int i = 0; 
	for(i = 0; i < n; i++)
		{
			printf("%d  ", a[i]);
		}
    PrevNext(a, n); 
    for (int i=0; i<n; i++) 
      printf("%d ", a[i]); 
    return 0; 
} 
