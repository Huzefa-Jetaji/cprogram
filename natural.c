#include <stdio.h>
int main()
{
    int i, a;
    printf("Enter a number.\n");
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            printf(" %d \n", i);
        }
    }
    return 0;
}