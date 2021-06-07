#include <stdio.h>
int main()
{
    int  num, i ;
    float series=0, sum = 1;
    for (i=1; i<=7;i++)
    {
        
       
        for(num=i;num>=1;num--)
        {
           
            sum = sum * num;
        }
       series=series+i/sum;
       
    }
    printf("Sum of the Series is %f\n",series);
    return 0;
}
