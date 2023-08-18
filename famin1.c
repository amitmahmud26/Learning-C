#include<stdio.h>
int rev(int x);
int main()
{
    int a;
    printf("Enter the number you want to get reverse of: ");
    scanf("%d",&a);

    printf("The reverse of a function is: %d",rev(a));

return 0;
}
int rev(int x)
{
    int sum = 0;
    while (x > 0)
    {
        
        int mod = x%10;         //312  213
        x = x/10;
    
        sum = sum*10 + mod;
        
    }
    
    return sum;
}