#include <stdio.h>
int factorial(int n)
{
    int s = 1;
    if (n == 0)
        return (1);
    for (int i = 1; i <= n; i++)
    {
        s = s * i;
    }
    return s;
}
int pascal_triangle(int n, int r)
{
    int b;
    b = factorial(n) / (factorial(n - r) * factorial(r));
    return b;
}
int main()
{
    int n, i, j;
    printf("Enter the no. of rows.\n");
    scanf("%d", &n);
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <=i; j++)
        {
            printf(" %d ", pascal_triangle(i, j));
        }
        printf("\n");
    }
}