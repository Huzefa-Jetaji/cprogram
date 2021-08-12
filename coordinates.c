#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, r;
    float theta;
    printf("Enter the cartesian coordinate of x:");
    scanf("%d", &x);
    printf("Enter the cartesian coordinate of y:");
    scanf("%d", &y);

    r = x * x + y * y;
    theta = atan(y / x);
    

    printf("Polar coordinates : (%d,%f)", r, theta);
    return 0;
}