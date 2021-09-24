#include <stdio.h>
int main()
{
    int r, c, i, j, cnfm = 1;
    printf("Enter the rows and columns of the matrix.\n");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("The Following Matrix : ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (arr[i][j] != 0 && arr[j][i] != 1)
            {
                cnfm=0;
                break;
            }
    cnfm==1?printf("Given matrix is identity matrix.\n"):printf("Not a identity matrix.\n");
}