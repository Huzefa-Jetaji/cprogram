#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number.\n");
    scanf("%d", &n);
    int array1[n], array2[n], array3[2 * n];
    printf("First Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &array1[i]);
    printf("Second Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &array2[i]);
    for (i = 0; i < n; i++)
    {
        array3[i] = array1[i];
    }
    for (i = 0,j=n; i < n; i++)
    {
        array3[j] = array2[i];
        j++;
    }
    for (i = 0; i < (2 * n - 1); i++)
        for (j = i + 1; j < 2 * n; j++)
            if (array3[j] > array3[i])
            {
                int temp;
                temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", array3[i]);
    }
}