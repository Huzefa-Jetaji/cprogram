#include <stdio.h>
int main()
{
    int n;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    int array1[n], array2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
        array2[i] = array1[i];
    }
    for (int i = 0; i < n; i++)
        printf("%d ", array2[i]);
}