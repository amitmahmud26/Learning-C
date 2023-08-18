//5.104 : Prime number
#include<stdio.h>
int main(){
    int num, i, count=0;
    printf("Enter a positive number you want to know is it a prime number: \n");
    scanf("%d,&num");

    for ( i = 2; i < num; i++)
    {
        if (num%i==0)
        {                   //it has a problem
            count++;
            break;
        }
        
    }
    if (count==0)
    {
        printf("Prime Number.\n");
    }
    else
        printf("Not Prime Number.\n");

    getch();
    
}