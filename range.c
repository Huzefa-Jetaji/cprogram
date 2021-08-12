#include<stdio.h>
int main(){
    int l,num,x,a,b,r;
    printf("Set the limit for your range of 'ascending' numbers.\n");
    scanf("%d",&l);
    x=l;
    while (l>=1)
    {
         printf("Entet the set of numbers(like 1,2,3,4,..).\n",num);
         scanf("%d",&num);
        if (x==l)
        {
            a=num;
        }
        else if (l==1)
        {
            b=num;
        }
        l=l-1;
    }
    r=b-a;
    printf("Range of your set of numbers is %d\n",r);
    return 0;
}