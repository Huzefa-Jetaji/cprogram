#include<stdio.h>
int main(){
    int a,b,s=1;
    printf("SQUARING NUMBER\n");
    printf("Enter base of squaring number.\n");
    scanf("%d",&a);
    printf("And the exponent of base number.\n");
    scanf("%d",&b);
   for ( ; b >=1; b--)
   {
       s=s*a;
   }
   printf("a power b : %d\n",s);
   return 0;
}