#include<stdio.h>
int main(){
    int i,sum=0;
    printf("Enter a number to find the sum of first n natural numbers.\n");
    scanf("%d",&i);
    for ( ; i >=1; i--)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}