#include<stdio.h>
int main(){
    int a,b,c,s;
    printf("Enter three angles of a triangle.\n");
    printf("Angle a:");
    scanf("%d",&a);
    printf("Angle b:");
    scanf("%d",&b);
    printf("Angle c:");
    scanf("%d",&c);
    s=a+b+c;
    if (s==180)
    {
        printf("Triangle is valid.\n");
    }
    else
    printf("Triangle is not valid.\n");
    return 0;
}