//sum with array
#include<stdio.h>
int main(){
    int n[5], sum=0, i;
    float avr;

    for(i=0; i<5; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0; i<5; i++)
    {
        //printf("%d \t",n[i]);
        sum = sum + n[i];
        avr = sum/5.0;
        
    }
    printf("the sum is %d\n",sum);
    printf("the average is %.2f\n",avr);
    return 0;
}