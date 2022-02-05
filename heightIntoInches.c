#include<stdio.h>

struct height{
    int feet;
    int inches;
};
int main()
{
    struct height f;
    int i;
    printf("Enter your height ( in feet inches format");
    // f.feet=3;
    scanf("%d%d",&f.feet,&f.inches);
    i=f.feet*12+f.inches;

    printf("%d\n",i);
}