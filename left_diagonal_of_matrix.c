#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Input the size of the square matrix.\n");
    scanf("%d", &r);
    int arr[r][r], sum = 0;
    printf("Following matrix : ");
    for (i = 0; i < r; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &arr[i][j]);
    for (i = r - 1, j = 0; i >= 0;)
    {
        sum+=arr[i][j];
        i--;
        j++;
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of left diagonal of the matrix = %d", sum);
}