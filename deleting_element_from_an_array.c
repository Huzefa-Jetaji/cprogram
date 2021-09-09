#include <stdio.h>
int main()
{
    int n, i, inval, p;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Following Array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Input the location to be deleted.\n");
    scanf("%d", &p);
    if (p <= n)
        for (i = p - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
    else
        printf("Location is greater than the size of the array.\n");
    for (i = 0; i < n - 1; i++)
        printf("%-4d", arr[i]);
}