#include<stdio.h>
int main(){
    int temp,i,n;
    printf("Enter the size of the array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter following array.\n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = n-1; i>n/2; i--)
    {
        temp=arr[n-(i+1)];
        arr[n-(i+1)]=arr[i];
        arr[i]=temp;
    }
    printf("Following reverse array : \n");
    for ( i = 0; i <n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}