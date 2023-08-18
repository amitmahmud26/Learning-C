#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);

    gcd(a,b);
    printf("%d",gcd(a,b));
return 0;
}
int gcd(int x, int y)
{
    int max, min;
    if(x>y)
    {
        max = x, min = y;
    }
    else
    {
        min = x, max = y;
    }
    while (max % min != 0)
    {
        int temp = min;
        min = max % min;
        max = temp;
    }
    return min;
    // printf("GCD is: %d",min);
    
}