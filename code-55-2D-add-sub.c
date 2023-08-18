#include<stdio.h>
int main(){
    int row, col, nRow, nCol, first[100][100], second[100][100], sum[100][100], sub[100][100];
    
    printf("Enter the number of row and column:\n");
    scanf("%d %d",&nRow, &nCol);
    //scanning first matrix
    printf("Enter the elements of first matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            scanf("%d",&first[row][col]);
        }
    }
    //scanning second matrix
    printf("Enter the elements of second matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            scanf("%d",&second[row][col]);
        }
    }
    //printing first matrix
    printf("First matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            printf("%d ",first[row][col]);
        }
        printf("\n");
    }
    //printing second matrix
    printf("Second matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            printf("%d ",second[row][col]);
        }
        printf("\n");
    }
    //adding two matrices
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            sum[row][col] = first[row][col] + second[row][col];
        }
    }
    //printing added matrix
    printf("The added matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            printf("%d ",sum[row][col]);
        }
        printf("\n");
    }
    //subtracting two matrices
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            sub[row][col] = first[row][col] - second[row][col];
        }
    }
    //printing subtracted matrix
    printf("The subtracted matrix:\n");
    for(row=0; row<nRow; row++)
    {
        for(col=0; col<nCol; col++)
        {
            printf("%d ",second[row][col]);
        }
        printf("\n");
    }
return 0;
}