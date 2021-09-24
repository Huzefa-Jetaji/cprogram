#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the columns and rows of the matrix.\n");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter the following matrix : ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    for ( i = 0; i < r; i++)
    {
        for (j=0;j<c;j++)
        {
            if(i>=j)
            printf("%d  ",arr[i][j]);
            else
            printf("0  ");
        }
        printf("\n");       
    }
    
}