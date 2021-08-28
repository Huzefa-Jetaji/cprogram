#include <stdio.h>
int sum_of_first(int n)
{
    static int sum = 0;
    int num;
    if (n == 0)
        return sum;
    num = n % 10;
    n = n / 10;
    sum = sum + num;
    sum_of_first(n);
}
int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
    printf("Sum of five digit number is %d", sum_of_first(n));
}