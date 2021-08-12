#include<stdio.h>
int main(){
    int n,sum,r;
    printf("Give me some number.\n");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of the digits : %d\n",sum);
    return 0;
}