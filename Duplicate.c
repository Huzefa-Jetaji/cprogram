#include <stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    int array[n], duplicate[n];
    printf("Give the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        duplicate[i] = -1;
    }
    for (i = 0; i < n-1; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                duplicate[j] = 0;
            }
        }
        if (duplicate[i] != 0)
            duplicate[i] = count;
    }
    printf("Duplicate Numbers : ");
    for (i = 0; i < n; i++)
        if (duplicate[i] > 1)
            printf("%d ", array[i]);
}