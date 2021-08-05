#include<stdio.h>
void circular_shift(int *a,int *b,int *c){
    int d;
    d=*c;
    *c=*b;
    *b=*a;
    *a=d;
    return;
}
int main(){
    int x,y,z;
    printf("Enter the values of x,y,z.(3 4 5..)\n");
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    printf("z = ");
    scanf("%d",&z);
    circular_shift(&x,&y,&z);
    printf("After circular shift : \n");
    printf("x = %d , y = %d , z = %d\n",x,y,z);
}