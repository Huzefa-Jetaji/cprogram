#include <stdio.h>
int main()
{
    int n, i, j, r, c;
    printf("Enter rows for matrix.\n");
    scanf("%d", &r);
    printf("Enter coloumns for matrix\n");
    scanf("%d", &c);
    int arr[r][c];
    printf("Input the matrix for given rows and columns.\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    printf("Printing the following Matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
}