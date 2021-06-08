#include <stdio.h>
int main()
{
    int n, i;
    for (i = 1; i <= 300; i++)
    {
        n = i;
        if (i == 2)
        {
            printf(" %d \n", i);
        }

        while (n-- >= 2)
        {
            if (i % n == 0)
            {
                break;
            }
            else if (n == 2)
            {
                printf(" %d \n", i);
            }
        }
    }
    return 0;
}