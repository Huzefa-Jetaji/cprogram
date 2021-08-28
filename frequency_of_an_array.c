#include <stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter a number.\n");
    scanf("%d", &n);
    int arr[n], dup[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        dup[i] = -1;
    }
    for (i = 0; i < n-1; i++)
    {
        count = 1;
        for (j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                dup[j] = 0;
            }
        }
        if (dup[i] != 0)
            dup[i] = count;
    }
    for (i = 0; i < n; i++)
    {
        if (dup[i] > 0){
            printf("%d appears %d times.\n", arr[i], dup[i]);
        }
    }
}