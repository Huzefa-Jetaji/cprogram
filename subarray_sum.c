// BRUTE FORCE ALGORITHM
#include <stdio.h>
int main()
{
    int z = 0, n, i, j, k, sum, max, a;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    a = n * ((n + 1) / 2.0);
    int arr[n], s[a];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            sum = 0;
            for (k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            s[z] = sum;
            z++;
        }
    }
    max = s[0];
    for (i = 1; i < a; i++)
        if (s[i] > max)
            max = s[i];
    printf("Maximum Subarray Sum is %d\n", max);
}