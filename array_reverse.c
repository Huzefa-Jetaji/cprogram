#include <stdio.h>
int main()
{
    int n;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    int num[n];
    printf("Now give the array.\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", num[i]);
}