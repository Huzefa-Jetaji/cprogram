#include<stdio.h>
int main(){
    int num;
    printf("Enter a Year.\n");
    scanf("%d",&num);

    if(num%4)
    printf("Not a Leap Year.\n");

    else if(num%100)
    printf("Leap Year With Century Year.\n");

    else 
    printf("Leap Year.\n");

    return 0;
}