#include <stdio.h>
int main()
{
    int n, i, inval, p;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Following Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Give element to be inserted in an array.\n");
    scanf("%d", &inval);
    for (i = 0; i < n; i++)
        if (inval < arr[i])
        {
            p = i;
            break;
        }
    for (i = n - 1; i >= p; i--)
        arr[i + 1] = arr[i];
    arr[p] = inval;
    for (i = 0; i <= n; i++)
        printf("%-3d", arr[i]);
}