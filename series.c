#include <stdio.h>
int main()
{
    int i;
    float series = 0, sum = 1, n;
    for (i = 1; i <= 7; i++)
    {
        for (n = i; n >= 1; n--)
        {
            sum = sum * n;
        }
        series = series + i / sum;
        sum = 1;
    }
    printf("Sum of the Series is %f\n", series);
    return 0;
}
