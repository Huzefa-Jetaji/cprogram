#include<stdio.h>
#include<math.h>

int main(){
    float t,v,wcf;//t=Temperature,v=velocity,wcf=wind chill factor
    printf("Enter the temperature of your room.\n");
    scanf("%f",&t);

    printf("Enter the wind velocity of your room.\n");
    scanf("%f",&v);

    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);

    printf("Wind Chill Factor is %f\n",wcf);
    return 0;
}