#include <stdio.h>
int sum_of_first_natural_numbers(int n, int s)
{
    if (n == 0)
        return (s);
    s = s + n;
    n--;
    sum_of_first_natural_numbers(n, s);
}
int main()
{
    int n, sum = 0;
    printf("Enter a number for which sum of first natural numbers you want.\n");
    scanf("%d", &n);
    printf("Sum of first natural numbers = %d\n", sum_of_first_natural_numbers(n, sum));
}