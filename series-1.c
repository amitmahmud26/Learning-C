//1^2 + 2^2 +....+ n^2
#include<stdio.h>
int main(){
    int n, sum=0, i;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + i*i;
    }
    printf("Sum = %d",sum);
    return 0;
}