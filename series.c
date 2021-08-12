#include <stdio.h>
int main()
{
    int  num, a, i ;
    float series=0.0, sum = 1.0,f;
    for (i=1; i<=7;i++)
    {
        a=i;
        num=a-1;
        while(num>=1)
        {
            f = num * a;
            sum = sum * f;
            a = a - 2;
            num = num - 2;
        }
       series=series+i/sum;
       
    }
    printf("Sum of the Series is %f\n",series);
    return 0;
}