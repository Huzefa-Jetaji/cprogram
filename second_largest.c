#include <stdio.h>
int main()
{
    int n, i, large, second_large;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Following Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    large = arr[0], second_large = arr[0];
    for (i = 0; i < n; i++)
        if (arr[i] > large)
            large = arr[i];
    if (large == arr[0])
        second_large = arr[1];
    for (i = 0; i < n; i++)
        if (arr[i] != large)
            if (arr[i] > second_large)
                second_large = arr[i];
    printf("Largest number : %d\n", large);
    printf("Second largest : %d\n", second_large);
}