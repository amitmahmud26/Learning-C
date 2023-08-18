#include<stdio.h>
int power(int base, int exponent);
int main()
{
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d",&b, &e);

    int p = power(b, e);
    printf("Power is: %d",p);
return 0;
}

int power(int base, int exponent)
{
    int po = 1;
    for(int i=1; i <= exponent; i++)
    {
        po = po*base;
    }
    return po;
}
