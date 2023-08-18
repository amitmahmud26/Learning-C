//C programming Bangla Tutorial 5.49 : quadratic equation | ax^2+bx+c C program
#include<stdio.h>
    int main(){
    double a,b,c,x1,x2;
    printf("Enter the value of a, b and c: \n");
    scanf("%lf %lf %lf",&a,&b,&c);

    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("The values are %lf %lf",x1,x2);
    return 0;
}
