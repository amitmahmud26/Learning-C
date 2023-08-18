#include<stdio.h>
int main(){
    int a[100][100], sum=0, nRow, nCol, row, col;

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
    //execusion
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            if(row==col)
            {
                sum = sum + a[row][col];
            }
        }
    }
    //printing the tress
    printf("Tress is %d",sum);
return 0;
}