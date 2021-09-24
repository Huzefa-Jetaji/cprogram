#include <stdio.h>
int main()
{
    int r, c, s, i, j;
    printf("Enter the columns and rows of the matrix.\n");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter the following Matrix : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Sum of rows : ");
    for (i = 0; i < r; i++)
    {
        s = 0;
        for (j = 0; j < c; j++)
        {
            s += arr[i][j];
            printf("%-4d", s);
        }
        printf("\n");
    }
    printf("Sum of columns : ");
    for (i = 0; i < c; i++)
    {
        s = 0;
        for (j = 0; j < r; j++)
        {
            s += arr[i][j];
            printf("%-4d", arr[i][j]);
        }
    }
}