#include<stdio.h>
int digitPosition(int number);
int main()
{
    int n;
    scanf("%d",&n);
    digitPosition(n);
    printf("%d",digitPosition(n));
return 0;
}
int digitPosition(int number)
{
    int x = (number/10) % 10;
    return x;
}