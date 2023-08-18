//with library function
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double base, expo, power;
//     printf("Enter base: ");
//     scanf("%lf",&base);

//     printf("Enter exponent: ");
//     scanf("%lf",&expo);

//     power = pow(base,expo);

//     printf("Power is:%.2lf",power);
// }

//without library function
#include<stdio.h>
int main(){
    double base, expo, power=1;
    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter exponent: ");
    scanf("%lf",&expo);

    for(int i=1; i<=expo; i++)
    {
        power = power * base;
    }
    printf("Power is:%.2lf",power);
}