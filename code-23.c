//Make a calculator using switch
#include<stdio.h>
int main(){
    double num1, num2;
    char op;
    
    printf("Enter the operator (+,-,*,/): \n");
    scanf("%c",&op);
    printf("Enter two numbers:\n");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
        case '+':
        printf("The Sum is: %.2lf\n",num1+num2);
        break;

        case '-':
        printf("The Difference is: %.2lf\n",num1-num2);
        break;

        case '*':
        printf("The Multiplication is: %.2lf\n",num1*num2);
        break;

        case '/':
        printf("The Division is: %.2lf\n",num1/num2);
        break;

    default:
        printf("Invalid calculation");
    }
}