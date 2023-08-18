//1.3+2.5+3.7+.........
#include<stdio.h>
int main(){
    int a=1, b=3, n1, n2, sum=0;
    printf("Enter the value of n1 and n2: \n");
    scanf("%d %d",&n1, &n2);
    
    while (a<=n1 && b<=n2)
    {
        sum = sum + a*b;
        a = a + 1;
        b = b + 2;
    }
    printf("The sum is %d",sum);
    return 0;
    
}