#include<stdio.h>
int *multiplyTwoPolynomials(int A[], int B[], int m, int n)
{
 int *productPolynomial = new int[m + n - 1];
 for (int i = 0; i < m + n - 1; i++) {
 productPolynomial[i] = 0;
 }
 for (int i = 0; i < m; i++) {
 for (int j = 0; j < n; j++) {
 productPolynomial[i + j] += A[i] * B[j];
 }
 }
 return productPolynomial;
}
void printPolynomial(int polynomial[], int n) {
 for (int i = n - 1; i >= 0; i--) {
 printf("%d",polynomial[i]);
 if (i != 0) {
 printf("x^%d",i);
 printf(" + ");
 }
 }
 printf("\n");
}
int main() {
 int m, n;
 printf("Enter no. of terms of 1st polynomial:");
 scanf("%d",&m);
 printf("Enter no. of terms of 2nd polynomial:");
 scanf("%d",&n);
 int A[m];
 int B[n];
 printf("Enter coefficeients for 1st polynomial:");
 for(int i=0; i<m; i++){
 scanf("%d",&A[i]);
 }
 printf("Enter coefficeients for 2nd polynomial:");
 for(int i=0; i<n; i++){
 scanf("%d",&B[i]);
 }
 printf("First polynomial: ");
 printPolynomial(A, m);
 printf("Second polynomial: ");
 printPolynomial(B, n);
 int *productPolynomial = multiplyTwoPolynomials(A, B, m, n);
 printf("Product polynomial: ");
 printPolynomial(productPolynomial, m + n - 1);
 return 0;
}