//Check wheather the year is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: \n");
    scanf("%d",&year);
    if(year % 400 == 0)
        printf("Leap year\n");
    else if(year % 100 != 0 && year % 4 == 0)
        printf("Leap year\n");
    else
        printf("Not leap year\n");
    return 0;
}