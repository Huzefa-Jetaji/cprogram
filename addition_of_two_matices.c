#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the number of rows for both of the matrices.\n");
    scanf("%d", &r);
    printf("Enter the number of coloumns for both of the matrices.\n");
    scanf("%d", &c);
    int a[r][c], b[r][c], sum[r][c];
    printf("Enter the first matrix.\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the Second matrix.\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    printf("The sum of both of the matrix.\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%-4d", sum[i][j]);
        }
        printf("\n");
    }
}