//show the results
#include<stdio.h>
int main(){
    int marks;
    printf("enter marks: \n");
    scanf("%d",&marks);

    if(marks >= 80 && marks <=100)
        printf("The result is A+\n");
    
    else if(marks >= 70)
        printf("The result is A\n");
    
    else if(marks >= 60)
        printf("The result is A-\n");

    else if(marks >= 50)
        printf("The result is B\n");

    else if(marks >= 40)
        printf("The result is C\n");

    else if(marks < 33 && marks>=0)
        printf("The result is Fail\n");

    else
        printf("The number is invalid")
    return 0;
}