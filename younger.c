#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter ages of Ram,Shyam and Ajay.\n");
    printf("Ram's Age:");
    scanf("%d", &a);
    printf("Shyam's Age:");
    scanf("%d", &b);
    printf("Ajay's Age:");
    scanf("%d", &c);
    if (a < b)
    {
        if (a < c)
            printf("Ram is youngest of the three.\n");
        else
            printf("Ajay is youngest of the three.\n");
    }
    else
    {
        if (b < c)
            printf("Shyam is youngest of the three.\n");
        else
            printf("Ajay is youngest of the three.\n");
    }
    return 0;
}