#include <stdio.h>
int findSum(int a[], int n)
{
    if(n<=0)
        return 0;
    return (findSum(a, n - 1) + a[n - 1]);
}
int main()
{
    int n;
    printf("Enter the dimension of arrays.\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the following array.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sum of arrays : %d",findSum(a, n));
    return 0;
}