#include <stdio.h>
int main()
{
    int i, j, r, sum = 0;
    printf("Input the size of the square matrix.\n");
    scanf("%d", &r);
    int arr[r][r];
    printf("Input following array.\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
                sum += arr[i][j];
        }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of right diagonal of a matrix = %d", sum);
}