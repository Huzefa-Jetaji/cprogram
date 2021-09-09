#include <stdio.h>
int main()
{
    int n, i, *small;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Following Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    small = &arr[0];
    for (i = 0; i < n; i++)
        if (*(arr + i) < *small)
            *small = *(arr + i);
    printf("Smallest number = %d",*small);
}