#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);

    for ( row = 1; row <= n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<= n*row-1; col++)
        {
            printf(col%2);
        }
        printf("\n");
    }

    for ( row = n; row >= 1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<= n*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}