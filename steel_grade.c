#include<stdio.h>

int main(){
    float h,c,t;
    int g;
    printf("Enter the hardness of steel.\n");
    scanf("%f",&h);
    printf("Enter the carbon content of steel.\n");
    scanf("%f",&c);
    printf("Enter the tensile strength of steel.\n");
    scanf("%f",&t);

    if(h>50 && c<0.7 && t>5600)
    g= 10;
    else if(h>50 && c<0.7 && t<5600)
    g=9;
    else if(c<0.7 && t>5600 && h<50)
    g=8;
    else if(h>50 && t>5600 && c>0.7)
    g=7;
    else if(h>50 || c<0.7 || t>5600)
    g=6;
    else
    g=5;
    printf("Grade of the Steel is : GRADE %d\n",g);
    return 0;
}