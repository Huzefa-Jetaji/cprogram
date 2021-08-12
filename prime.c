#include <stdio.h>
int main()
{
    int num, i;
    for (i = 1; i <= 300; i++)
    {
        num = i-1 ;
        if (i == 2)
        {
            printf(" %d \n", i);
        }
        while (num >= 2)
        {
            if (i % num == 0)
            {
                break;
            }
            else if (num == 2)
            {
                printf(" %d \n", i);
            }
            
            num--;
        }
    }
    return 0;
}