#include <stdio.h>
void pairWithGivenSum(int arr[], int n, int gs)
{
    int i, j, k = 1;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n; j++)
        {

            if (gs == (arr[i] + arr[j]) && k)
            {
                printf("Pair of elements can make the given sum by the value of index %d and %d", i, j);
                k = 0;
                break;
            }
        }
        if (k == 0)
            break;
    }
}
int main()
{
    int n, gs;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Given Sum.\n");
    scanf("%d", &gs);
    printf("Now the Following Matrix : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    pairWithGivenSum(&arr[0], n, gs);
}