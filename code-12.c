//C programming Bangla Tutorial 5.52 : Math | Square root | সংখ্যার বর্গমূল
#include<stdio.h>
#include<math.h>
int main(){
    double N,Result;
    printf("Please enter a number: \n");
    scanf("%lf",&N);
    Result = sqrt(N);
    printf("The square root of the number is %.2lf",Result);
    return 0;
}