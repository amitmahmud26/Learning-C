// 5.147 : Pattern
#include<stdio.h>
int main(){
    int i, col, row,n;
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {   
        for(col=n-row; col>=1; col--)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%c",col+96);
        }printf("\n");
    }
}
