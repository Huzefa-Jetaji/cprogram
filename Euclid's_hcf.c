#include <stdio.h>
void Euclid_hcf(int a, int *b, int c)
{
    int b1;
    c = a / *b;
    b1 = a - *b * c;
    while (b1 != 0)
    {
        a=*b;
        *b=b1;
        c=a/ *b;
        b1=a-*b*c;
    }
    return;
}
int main()
{
    int a, b, c, b1;
    printf("Enter two numbers for finding hcf\n");
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    Euclid_hcf(a, &b, c);
    printf("hcf by Euclid's Algorithm : %d\n", b);
}