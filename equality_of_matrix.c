#include <stdio.h>
int main()
{
    int r1, c1, i, j;
    printf("Enter the rows and columns of first matrix.\n");
    scanf("%d%d", &r1, &c1);
    int a[r1][c1], b[r1][c1];
    printf("First matrix : \n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Second matrix : \n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            a[i][j]!=b[i][j]?printf("Given two matrices are not equal.\n"):0;
        }
        i==r1-1?printf("Given two matrices are equal.\n"):0;
    }
}