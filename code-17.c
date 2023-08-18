//which number is larger?
#include<stdio.h>
int main(){
    int num1 , num2;
    scanf("%d %d",&num1, &num2);
    if(num1 < num2)
        printf("num2 is larger\n");
    else if(num1 > num2)
        printf("num1 is larger\n");
    else
        printf("numbers are equal");
    return 0;
}