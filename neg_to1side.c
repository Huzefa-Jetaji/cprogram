#include <stdio.h>
int main()
{
    int n;
    printf("Enter the dimension of the array.\n");
    scanf("%d", &n);
    int a[n],i=0,j=n-1,temp;
    printf("Give the following array.\n");
    for (int c = 0; c < n; c++)
        scanf("%d", &a[c]);
    while (i<j)
    {
        while(a[i]<0)
        i++;
        while(a[j]>0)
        j--;

        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for ( i = 0; i < n; i++)
    {
        printf("%2d",a[i]);
    }
    
    return 0;
}