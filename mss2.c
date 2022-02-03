#include <stdio.h>
int main()
{
    int n, i, currentSum = 0, maxSum = 0;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Following Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (maxSum < currentSum)
            maxSum = currentSum;
        if (currentSum < 0)
            currentSum = 0;
    }
    printf("Maximum Subarray Sum is %d\n", maxSum);
}