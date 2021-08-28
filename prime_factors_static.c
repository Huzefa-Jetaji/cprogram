#include <stdio.h>
void prime_factors_static(int n)
{
    static int factor = 2;
    if (n == 1)
        return;
    else if (n % factor == 0)
    {
        n = n / factor;
        printf("%d ", factor);
    }
    else
        factor++;
    prime_factors_static(n);
}
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d", &num);
    prime_factors_static(num);
}