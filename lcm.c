#include <stdio.h>
int main()
{
    int a, b, n = 2;
    printf("Enter one number to find LCM.\n");
    scanf("%d", &a);
    printf("Enter another number to find LCM.\n");
    scanf("%d", &b);
    while(n<=2147483647){
        if(n%a==0 && n%b==0){
            printf("LCM : %d\n",n);
            break;
        }
        else
        n++;
    }
    return 0;
}