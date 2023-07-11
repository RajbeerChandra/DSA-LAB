#include <stdio.h>
void main() {
  static int m1[10][10], m2[10][10];
  int i, j, m, n, a, b, c, p, q, r;
  printf("Enter the order \n");
  scanf("%d * %d", & m, & n);
  printf("Enter matrix\n");
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j) {
      scanf("%d", & m1[i][j]);
      m2[i][j] = m1[i][j];
    }
  }
  printf("Enter the numbers of two rows to be exchanged \n");
  scanf("%d %d", & a, & b);
  for (i = 0; i < m; ++i) {
    c = m1[a - 1][i]; 
    m1[a - 1][i] = m1[b - 1][i];
    m1[b - 1][i] = c;
  }
  printf("Enter the numbers of two columns to be exchanged\n");
  scanf("%d %d", & p, & q);
  printf("The given matrix is \n");
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j)
      printf(" %d", m2[i][j]);
    printf("\n");
  }
  for (i = 0; i < n; ++i) {
    r = m2[i][p - 1]; 
    m2[i][p - 1] = m2[i][q - 1];
    m2[i][q - 1] = r;
  }
  printf("interchanging the two rows\n");
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j) {
      printf(" %d", m1[i][j]);
    }
    printf("\n");
  }
  printf(" interchanging the two columns\n");
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j)
      printf(" %d", m2[i][j]);
    printf("\n");
  }
}