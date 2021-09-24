#include <stdio.h>
int main()
{
    int n, cnt, i, j;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n], dup[n];
    printf("Give the Matrix : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        dup[i] = -1;
    }
    for (i = 0; i < n - 1; i++)
    {
        cnt = 0;
        for (j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                dup[j] = 0;
                cnt++;
            }
        }
        if (dup[i] != 0)
            dup[i] = cnt;
    }
    for (i = 0; i < n; i++)
    {
        if (dup[i] > n / 2)
        {
            printf("Majority Element = %d", arr[i]);
            break;
        }
        i == n - 1 ? printf("There is no majority element.\n") : 0;
    }
}