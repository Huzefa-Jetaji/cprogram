#include<stdio.h>
int main(){
    int n;
    printf("Enter the dimension of the array.\n");
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}