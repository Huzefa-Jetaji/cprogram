#include<stdio.h>
int main(){
    int r,c,i,j,cnt=0;
    printf("Enter the columns and rows of the matrix.\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter the following matrix.\n");
    for ( i = 0; i < r; i++)
        for (j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            arr[i][j]==0?cnt++:0;
        }  
    cnt>((r*c)/2)?printf("Given matrix is Sparse matrix.\n"):printf("Given matrix is not Sparse matrix.\n");
}