#include <stdio.h>
int main()
{
    int n, c=0, a = 1;
    printf("Enter any number.\n");
    scanf("%d",&n);
    while (n >0)
    {
        c = c + a;
        n = n / 10;
    }
    printf("No. of DIGITS in a given number : %d.\n",c);
    return 0;
}