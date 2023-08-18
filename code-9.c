//write a program that take two numbers and show the sum and average.
#include<stdio.h>
int main(){
    int num1, num2, sum;
    float avr;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1, &num2);

    sum = num1 + num2;
    printf("The sum is %d\n",sum);
    
    avr = (float) sum/2; //type casting //or we could write avr = sum/2.0
    printf("The average is: %.2f\n",avr);

    return 0;
}