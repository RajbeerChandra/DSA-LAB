#include <stdio.h>
int main()
{
    int n, m, c, d, f[10][10], s[10][10], sum[10][10], diff[10][10];
    printf("Enter row and column");
    scanf("%d%d", &m, &n);
    printf("Enter ele", m * n);
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &f[c][d]);
    printf("enter ele of 2 array", m * n);
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &s[c][d]);
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", f[c][d]);
        }
        printf("\n");
    }
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", s[c][d]);
        }
        printf("\n");
    }
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = f[c][d] + s[c][d];
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            diff[c][d] = f[c][d] - s[c][d];
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
    return 0;
}