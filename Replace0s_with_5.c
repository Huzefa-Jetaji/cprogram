#include <stdio.h>
#include <math.h>
int replace0With5(int n)
{
    int b, sum = 0,a=0;
    while (n != 0)
    {
        b = n % 10;
        if (b == 0)
        {
            b = 5;
        }
        sum = sum + (b * pow(10, a));
        n = n / 10;
        a++;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number.");
    scanf("%d", &n);
    printf("%d\n", replace0With5(n));
}