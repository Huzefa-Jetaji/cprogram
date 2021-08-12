#include<stdio.h>
int main(){
    int f1,num,sum=1,i;
    printf("Enter any number.\n");
    scanf("%d",&num);
    i=num-1;
    while (i>=1)
    {
        f1=num*i;
        sum=sum*f1;
        num=num-2;
        i=i-2;
    }
    printf("Factorial : %d\n",sum);
    return 0;
}