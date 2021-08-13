#include <stdio.h>
int digits_sum(int num,int sum)
{
    int n;
    if (num == 0)
        return(sum);
    n=num%10;
    sum=sum+n;
    digits_sum(num=num/10,sum);
}
int main()
{
    int num, addition;
    printf("Enter five digit number.\n");
    scanf("%d", &num);
    addition=digits_sum(num,addition);
    printf("Sum of the digits of five digit number is %d",addition);
}
