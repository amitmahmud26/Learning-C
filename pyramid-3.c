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
if(row % 2 == 0){
            for(col=1; col<= 2*row-1; col++)
        {
            if(col%2==0)
                printf("1");
            else
                printf("0");
        }
}else{
            for(col=1; col<= 2*row-1; col++)
        {
            if(col%2==0)
                printf("0");
            else
                printf("1");
        }
}

        printf("\n");
    }

}
