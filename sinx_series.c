#include<stdio.h>
#include<math.h>
void sinx_series(float radian,float *sum){
    int num,n=3,fact,k=1;
    *sum=radian;
    for (int i = 1; i <=10; i++)
    {
        fact=1;
        for (int i = 1; i <=n; i++)
        {
            fact=fact*i;
        }
        num=pow(radian,n)/fact;
        if (k)
        {
            num=-1*num;
            k=0;
        }
        else
            k=1;
        *sum=*sum+num;
        n+=2;
    }
    return;
}
int main(){
    int x;
    float radian,pi=3.14,sum;
    printf("Enter degree.\n");
    scanf("%d",&x);
    radian=x*(pi/180);
    sinx_series(radian,&sum);
    
    printf("Sum of the series=%f",sin(sum));
}