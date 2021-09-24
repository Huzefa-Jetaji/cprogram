#include <stdio.h>
int main()
{
    int i, j, k, r1, c1, r2, c2;
    printf("First matrix : \n");
    printf("Enter rows for first matrix : ");
    scanf("%d", &r1);
    printf("Enter columns for first matrix : ");
    scanf("%d", &c1);
    printf("Second matrix : \n");
    printf("Enter rows for second matrix : ");
    scanf("%d", &r2);
    printf("Enter columns for second matrix : ");
    scanf("%d", &c2);
    int a[r1][c1], b[r2][c2], c[r1][c2], sum = 0;
    if (r2 != c1)
    {
        printf("Multiplication of Matrix is not possible.\n");
        printf("Column of first matrix and row of second matrix must be same.\n");
    }
    else
    {
        printf("First matrix : \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Second matrix : \n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%-4d", c[i][j]);
            }
            printf("\n");
        }
    }
}