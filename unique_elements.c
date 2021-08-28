#include <stdio.h>
int main()
{
    int n, i, j,count;
    printf("Enter a number.\n");
    scanf("%d", &n);
    int unique[n];
    for (i = 0; i < n; i++)
        scanf("%d", &unique[i]);
    for (i = 0; i < n-1; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (unique[i] == unique[j])
                count++;
        }
        if (count == 1)
            printf("%d ", unique[i]);
    }
}