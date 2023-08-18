//Series - 1+2+3+......+n
//do-while
#include<stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    do
    {
        sum = sum+ i;
        i++;
    }
    while (i<=n);
    
    printf("The sum is %d",sum);
    return 0;
}