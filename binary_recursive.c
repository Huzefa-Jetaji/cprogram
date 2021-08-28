#include <stdio.h>
#include <math.h>
int binary(int n, int b, int i)
{
    int c, a;
    if (n == 0)
    {
        return (b);
    }
    b = b + (n%2) * pow(10, i);
    i++;
    binary(n/=2, b, i);
}
int main()
{
    int n, b = 0, i = 0, a;
    printf("Enter a number to convert it into binary form.\n");
    scanf("%d", &n);
    printf("BINARY FORM OF THIS NUMBER : %d", binary(n, b, i));
}