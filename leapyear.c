#include <stdio.h>
int main()
{
    int num;
    printf("Enter a year.\n");
    scanf("%d", &num);

    if (num % 4)
    {
        printf("Not a leap year.\n");
    }
    else
    {
        if (num % 100)
            printf("leap year.\n");
        else
            printf("leap year (with century year).\n");
    }
    return 0;
}