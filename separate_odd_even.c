#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter dimension of the array.\n");
    scanf("%d", &n);
    int arr[n], odd_arr[100], even_arr[100];
    printf("Following Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int oddcnt = 0, evencnt = 0;
    for (i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
        {
            even_arr[evencnt] = arr[i];
            evencnt++;
        }
        else
        {
            odd_arr[oddcnt] = arr[i];
            oddcnt++;
        }
    printf("Even array : ");
    for (i = 0; i < evencnt; i++)
        printf("%4d", even_arr[i]);
    printf("\nOdd array : ");
    for (i = 0; i < oddcnt; i++)
        printf("%4d", odd_arr[i]);
}