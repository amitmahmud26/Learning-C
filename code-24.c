//Conditional operator / Ternary Operator
#include<stdio.h>
int main(){
    int num1, num2, large;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);

    large = (num1 > num2) ? num1 : num2;
    printf("The larger number is %d",large);

    return 0;
}
