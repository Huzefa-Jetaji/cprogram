#include <stdio.h>
int main()
{
    int i, n,ind_max,ind_min;
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
        if (arr[i] > max){
            max = arr[i];
            ind_max=i;
            }
        if (arr[i] < min){
            min = arr[i];
            ind_min=i;
            }
    }

    printf("Max index : %d\n", ind_max);
    printf("Min index : %d\n", ind_min);
    return 0;
}