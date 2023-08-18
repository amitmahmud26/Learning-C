#include<stdio.h>
int main(){
    int row, col;
    int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            printf("%d\t",a[row][col]);
        }
        printf("\n");
    }
return 0;
}