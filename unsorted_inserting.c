#include <stdio.h>
int main()
{
    int n, i, p, inval;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    printf("Following Array : ");
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to be inserted in unsorted list.\n");
    scanf("%d", &inval);
    printf("Give location at which element to be inserted.\n");
    scanf("%d", &p);
    if (p > n)
        printf("Location is not within the range of dimension.\n");
    else
    {
        for (i = n - 1; i >= p; i--)
            arr[i + 1] = arr[i];
        arr[p] = inval;
        for (i = 0; i <= n; i++)
            printf("%4d", arr[i]);
    }
}