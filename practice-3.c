#include<stdio.h>
int main(){
    int a[10],i,n,sum=0;
    float avr;
    printf("How many numbers?");
    scanf("%d",&n);
    printf("Enter %d numbers: \n",n);
    
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("sum = %d\n",sum);
    //avr = sum/5.0;
    printf("Average is = %.2f",(float)sum/n);
    return 0;
    
}