//C programming Bangla Tutorial 5.53 : Math | x raised to the power y (x^y)
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,power;
    printf("Enter the value of x and y: \n");
    scanf("%d %d",&x,&y);
    power = pow(x,y);
    printf("The result is %d",power);
    return 0;
}