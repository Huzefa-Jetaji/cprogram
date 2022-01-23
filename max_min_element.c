#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the following array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max element : %d\n", max);
    printf("Min element : %d\n", min);
    return 0;
}