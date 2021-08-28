#include<stdio.h>
int main(){
    int n,s=0;
    printf("Enter the dimension of the array.\n");
    scanf("%d",&n);
    int sum[n];
    printf("Now define the array.\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&sum[i]);
        s=s+sum[i];
    }
    printf("Sum of the array is %d",s);
}