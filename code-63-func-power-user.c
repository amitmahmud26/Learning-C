#include<stdio.h>
#include<math.h>
void calc_power(double base, double expo);

int main(){
    double base, expo;
    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter exponent: ");
    scanf("%lf",&expo);

    calc_power(base,expo);
    
}
void calc_power(double base, double expo)
{
    double power=1;
    
    // power = pow(base,expo);
    for(int i=1; i<=expo; i++)       //by for loop
    {
        power = power * base;
    }
    printf("Power is: %.2lf",power);
}