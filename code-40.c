// 5.149 : Pattern
#include<stdio.h>
int main(){
    int i, col, row;

    for(row=3; row>=1; row--)
    {   
        for(col=0; col<=row; col++)
        {
            printf(" ",col);
        
        for(col=1; col<=row-1; col++)
        {
            printf("%d ",col);
        }
        }printf("\n");
    }
}
