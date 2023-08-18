#include<stdio.h>
int main(){
    int a[100][100],transpose[100][100], nRow, nCol, row, col;

    printf("Enter the number of row and column:\n");
    scanf("%d %d",&nRow, &nCol);
    //scanning the matrix
    printf("Enter the elements of the matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    //execusion
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            transpose[col][row] = a[row][col];
        }
    }
    //printing the matrix
    printf("The matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    //printing transposed matrix
    printf("Transposed matrix:\n");
    for(row=0; row<nCol; row++)
    {
        for(col=0; col<nRow; col++)
        {
            printf("%d ",transpose[row][col]);
        }
        printf("\n");
    }
return 0;
}