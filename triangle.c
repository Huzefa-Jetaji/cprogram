#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, s, area;
    printf("Enter the three sides of a triangle.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    s = a + b + c / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The area of triangle is %d\n", area);
    return 0;
}