#include <stdio.h>
int main()
{
    int n, i,j;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] % 2 == 0)
            i++;
        while (arr[j] % 2 != 0)
            j--;
        int temp;
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }
    for (i = 0; i < n; i++)
        printf("%-10d", arr[i]);
}