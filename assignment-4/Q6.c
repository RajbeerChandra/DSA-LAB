#include <stdio.h>

void main()
{
    static int ma[10][10], mb[10][10];
    int i, j, k, a, m, n;
    printf("Enter  matrix \n"); 
    scanf("%d %d", &m, &n);
    printf("Enter co-efficient of  matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &ma[i][j]); 
            mb[i][j] = ma[i][j];
        }
    }
    printf("The matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", ma[i][j]);
        }
        printf("\n");
    }
    printf(" rows in ascending order\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k = (j + 1); k < n; ++k)
            {
                if (ma[i][j] > ma[i][k])
                {
                    a = ma[i][j];
                    ma[i][j] = ma[i][k];
                    ma[i][k] = a;
                }
            }
        }
    } 
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", ma[i][j]);
        }
        printf("\n");
    }
    printf("columns in descending order \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            for (k = i + 1; k < m; ++k)
            {
                if (mb[i][j] < mb[k][j])
                {
                    a = mb[i][j];
                    mb[i][j] = mb[k][j];
                    mb[k][j] = a;
                }
            }
        }
    } 
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", mb[i][j]);
        }
        printf("\n");
    }
}