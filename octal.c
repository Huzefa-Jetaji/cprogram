#include <stdio.h>
#include <math.h>
int main()
{
    int r, r1 = 0, num, sum = 0;
    float a, c;
    printf("Enter any number of base 10.\n");
    scanf("%d", &num);

    while (num > 0)
    {
        r = num % 8;

        a = r / 8;
        c = num / 8;
        sum = sum + r * pow(10, r1);
        r1 = r1 + 1;
        num = c - a;
    }
    printf("Octal Equivalent is %d\n", sum);
    return 0;
}