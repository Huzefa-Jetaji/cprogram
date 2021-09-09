#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number.\n");
    scanf("%d", &n);
    int  range[n];
    printf("Following Array : ");
    for ( i = 0; i < n; i++)
        scanf("%d",&range[i]);
    int max=range[0],min=range[0];
    for (i = 1; i < n; i++)
    {
    if (range[i]>max)
        max=range[i];
    if(range[i]<min)
        min=range[i];
    }
    printf("Maxmum Number : %d\n",max);
    printf("Minimum Number : %d\n",min);
}