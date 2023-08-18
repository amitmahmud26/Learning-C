//5.101 : Factorial
#include<stdio.h>
int main(){
    int n, fact=1;
    printf("Enter the number to get its factorial: \n");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        fact = fact * i;
        
    }printf("%d\n",fact);
    return 0;
}