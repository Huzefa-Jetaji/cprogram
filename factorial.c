#include<stdio.h>
double factorial(int n){
    double f=1;
    for (int i = 1; i <=n; i++)
    {
        f=f*i;
    }
    return (f);
    }
    int main(){
        int n;
        printf("Enter a number.\n");
        scanf("%d",&n);
        printf("Factorial : %lf",factorial(n));
    }
