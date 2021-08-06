#include<stdio.h>
#include<math.h>
void area_of_triangle(int a,int b,int c,float *area){
    float s;
    s=(a+b+c)/2.0;
    *area=sqrt(s*(s-a)*(s-b)*(s-c));
    return;
}
int main(){
    int a,b,c;
    float area;
    printf("Enter the sides of triangle.\n");
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    printf("c : ");
    scanf("%d",&c);
    area_of_triangle(a,b,c,&area);
    printf("Area By Heron's Formula = %f",area);
}