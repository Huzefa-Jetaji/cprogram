#include <stdio.h>
int factorial(int n)
{
    static int s = 1;
    if (n == 1)
        return s;
    s = s * n;
    n--;
    factorial(n);
}
int main(){
    int n,a,b,c;
    printf("Enter a number.\n");
    scanf("%d",&n);
    a=factorial(n);
    b=factorial(n-2);
    c=a/b;
    printf("Factorial: %d,%d",a,b);
}