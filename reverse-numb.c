#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int y = reverse(a);
    printf("Reverse = %d",y);
return 0;
}
int reverse(int n)
{
    int r, sum=0;                   //problem
    while (n>0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum*10 + r;
    }
    return sum;
    
}