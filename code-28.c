//5.99 : Multiplication Table
#include<stdio.h>
int main(){
    int a, mul;
    printf("Enter the number: \n");
    scanf("%d",&a);
    for ( int i=1; i <= 10; i++)
    {
        mul = a * i;
        printf("%d x %d = %d\n",a,i,mul);
    }
    return 0;
}