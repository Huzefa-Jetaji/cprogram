#include <stdio.h>
int main()
{
    int n, i, small, second_smallest;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Following Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    small = arr[0], second_smallest = arr[0];
    for (i = 0; i < n; i++)
        if (arr[i] < small)
            small = arr[i];
    if (small == arr[0])
        second_smallest = arr[1];
    for (i = 0; i < n; i++)
        if (arr[i] != small)
            if (arr[i] < second_smallest)
                second_smallest = arr[i];
    printf("Smallest Number = %d\n", small);
    printf("Second Smallest Number = %d\n", second_smallest);
}