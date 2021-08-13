#include <stdio.h>
int prime(int n, int i)
{
    if (n == i)
        return (i);
    else if (n == 1)
        return (i);
    else if (n % i == 0)
        return (i);
    else
    {
        i++;
        prime(n, i);
    }
}
int main()
{
    int n, i = 2, a;
    printf("Enter a number to check whether it is prime number.\n");
    scanf("%d", &n);
    n == prime(n, i) ? printf("%d is a prime number.\n", n) : printf("%d is not a prime number.\n", n);
    return 0;
}