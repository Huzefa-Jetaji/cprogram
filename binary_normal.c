#include<stdio.h>
#include<math.h>
int binary(int n){
    int a=0,c=0,i;
    while (n!=0)
    {
        a=a+(n%2)*pow(10,c);
        c++;
        n/=2;
    }
    return(a);
}
int main(){
    int n;
    printf("Enter any number.\n");
    scanf("%d",&n);
    printf("BINARY FORM OF THIS NUMBER : %d",binary(n));
}