//C programming Bangla Tutorial 5.51 : Math | Absolute value | সংখ্যার পরম মান
#include<stdio.h>
int main(){
    int number;
    printf("Please enter a number: \n");
    scanf("%d",&number);
    number = abs(number);
    printf("the absolute value of the number is %d",number);
    return 0;
}