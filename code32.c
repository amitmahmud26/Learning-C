//Series - 1+2+3+......+n
//while
#include<stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while (i<=n)
    {
        sum = sum+ i;
        i++;
    }
    
    printf("The sum is %d",sum);
    return 0;
}