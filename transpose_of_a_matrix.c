#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("ONLY FOR SQUARE MATRIX\n");
    printf("Input the rows and columns of the matrix.\n");
    printf("Rows : ");
    scanf("%d", &r);
    printf("Columns : ");
    scanf("%d", &c);
    int arr[r][c], brr[r][c];
    printf("Now the Following Matrix : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%-4d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            brr[j][i] = arr[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%-4d", brr[i][j]);
        }
        printf("\n");
    }
}