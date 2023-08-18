/*C program to check number is power or 2 or not.*/
 
#include <stdio.h>
 
int main()
{
    int num;
    int flag;
     
    printf("Enter an integer number: ");
    scanf("%d",&num);
    
    flag=0;
    
    while(num!=1)
    {
        if(num%2!=0){
            flag=1;
            break;
        }
        num=num/2;
    }
  
    if(flag==0)
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}
