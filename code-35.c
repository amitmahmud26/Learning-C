// 5.136 : Series | 1-2+3-4+5-6
#include<stdio.h>
#include<math.h>
int main(){
    int i, n, sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)                 //it has problem
    {
        sum = sum + pow(-1,(i+1)) * i;
        i++;
    }
    printf("The sum is %d",sum);
    return 0;
}