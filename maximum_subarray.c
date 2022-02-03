#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter dimension of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Give the array.\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%-3d", arr[k]);
            }
            printf("\n");
        }
    }
}