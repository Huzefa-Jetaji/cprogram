#include<stdio.h>
int main(){
    int a,b,n=2147;
    printf("Give a number to find hcf.\n");
    scanf("%d",&a);
    printf("Give another number to find hcf.\n");
    scanf("%d",&b);
    while (n>=2)
    {
        if (a%n==0 && b%n==0)
        {
            printf("HCF : %d\n",n);
            break;
        }
        else
        n--;
    }
    return 0;
}