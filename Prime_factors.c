#include <stdio.h>
void prime_factors(int n, int factor)
{
    if (n == 1)
        return;
    else if (n % factor == 0)
    {
        n = n / factor;
        printf("%d ", factor);
    }
    else
        factor++;
    prime_factors(n, factor);
}
int main()
{
    int n, factor = 2;
    printf("Enter a number to find it's prime factor.\n");
    scanf("%d", &n);
    prime_factors(n, factor);
}