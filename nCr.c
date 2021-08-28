#include <stdio.h>
int factorial(int n)
{
    int s = 1;
    for (int i = 1; i <=n; i++)
    {
        s=s*i;
    }
    return s;
}
int main()
{
    int n, r, b;
    printf("Enter n and r.\n");
    printf("n = ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);
    b = factorial(n) / (factorial(n - r) * factorial(r));
    printf("Answer : %d", b);
}