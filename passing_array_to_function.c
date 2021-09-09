#include <stdio.h>
void passing_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * 3;
    return;
}
int main()
{
    int n, i;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Following Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    passing_array(&arr[0], n);
    for (i = 0; i < n; i++)
        printf("%-5d", arr[i]);
}