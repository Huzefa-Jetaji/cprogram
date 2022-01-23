#include <stdio.h>
int main()
{
    int t, n, i, k = 0;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    int a[n], c0 = 0, c1 = 0, c2 = 0;
    printf("Give the array in 0, 1 and 2 .\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            c0++;
        if (a[i] == 1)
            c1++;
        else
            c2++;
    }
    for (i = 0; i < c0; i++)
        a[k++] = 0;
    for (i = 0; i < c1; i++)
        a[k++] = 1;
    for (i = 0; i < c2; i++)
        a[k++] = 2;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}