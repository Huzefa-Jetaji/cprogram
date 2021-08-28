#include <stdio.h>
int main()
{
    int num[6],i;
    printf("Enter any six numbers.\n");
    scanf("%d", &num[6]);
    for ( i = 0; i < 6; i++)
    {
        num[i] % 2 == 0 ? printf("%d", num[i]) : 0;
    }
}