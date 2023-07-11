#include<stdio.h>
int max(int m, int n) { return (m > n)? m: n; }
int *add(int A[], int B[], int m, int n)
{
int size = max(m, n);
int *sum [size];
for (int i = 0; i<m; i++)
	sum[i] = A[i];
for (int i=0; i<n; i++)
	sum[i] += B[i];
return sum;
}
void printPoly(int poly[], int n)
{
	for (int i=0; i<n; i++)
	{
	printf("%d", poly[i]);
	if (i != 0)
		printf( "x^", i) ;
	if (i != n-1)
	printf( " + ");
	}
}
int main()
{
	int A[] = {5, 0, 10, 6};
	int B[] = {1, 2, 4};
	int m = sizeof(A)/sizeof(A[0]);
	int n = sizeof(B)/sizeof(B[0]);
	printf( "First polynomial is \n");
	printPoly(A, m);
	printf("\nSecond polynomial is \n");
	printPoly(B, n);
	int *sum = add(A, B, m, n);
	int size = max(m, n);
	printf( "\nsum polynomial is \n");
	printPoly(sum, size);
	return 0;
}



// #include<stdio.h>
// int main(){
// int a[10], b[10], c[10],m,n,k,k1,i,j,x;
// printf("Enter the no. of terms of the 1st polynomial:");
// scanf("%d", &m);
// printf("Enter the degrees and coefficients:");
// for (i=0;i<2*m;i++)
// scanf("%d", &a[i]);
// printf("First polynomial is:");
// k1=0;
// if(a[k1+1]==1)
// printf("x^%d", a[k1]);
// else
// printf("%dx^%d", a[k1+1],a[k1]);
// k1+=2;
// while (k1<i)
// {
// printf("+%dx^%d", a[k1+1],a[k1]);
// k1+=2;
// }
// printf("\nEnter the no. of terms of 2nd polynomial:");
// scanf("%d", &n);
// printf("Enter the degrees and co-efficients:");
// for(j=0;j<2*n;j++)
// scanf("%d", &b[j]);
// printf("Second polynomial is:");
// k1=0;
// if(b[k1+1]==1)
// printf("x^%d", b[k1]);
// else
// printf("%dx^%d",b[k1+1],b[k1]);
// k1+=2;
// while (k1<2*n)
// {
// printf("+%dx^%d", b[k1+1],b[k1]);
// k1+=2;
// }
// i=0;
// j=0;
// k=0;
// while (m>0 && n>0)
// {
// if (a[i]==b[j])
// {
// c[k+1]=a[i+1]+b[j+1];
// c[k]=a[i];
// m--;
// n--;
// i+=2;
// j+=2;
// }
// else if (a[i]>b[j])
// {
// c[k+1]=a[i+1];
// c[k]=a[i];
// m--;
// i+=2;
// }
// else
// {
// c[k+1]=b[j+1];
// c[k]=b[j];
// n--;
// j+=2;
// }
// k+=2;
// }
// while (m>0)
// {
// c[k+1]=a[i+1];
// c[k]=a[i];
// k+=2;
// i+=2;
// m--;
// }
// while (n>0)
// {
// c[k+1]=b[j+1];
// c[k]=b[j];
// k+=2;
// j+=2;
// n--;
// }
// printf("\nSum of the two polynomials is:");
// k1=0;
// if (c[k1+1]==1)
// printf("x^%d", c[k1]);
// else
// printf("%dx^%d", c[k1+1],c[k1]);
// k1+=2;
// while (k1<k)
// {
// if (c[k1+1]==1)
// printf("+x^%d", c[k1]);
// else
// printf("+%dx^%d", c[k1+1], c[k1]);
// k1+=2;
// }
// return 0;
// }