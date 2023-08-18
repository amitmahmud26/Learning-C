#include<stdio.h>
int main(){
    int a[33], n;

    a[0] = 0;
    a[1] = 1;

    printf("How many numbers?");
    scanf("%d",&n);

    for(int i=2; i<n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    printf("The fibonacci series is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}