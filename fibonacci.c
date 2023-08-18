#include<stdio.h>
int fibo(x);
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        fibo(i);
        printf("%d ",fibo(i));
    }
    
}
int fibo(x)
{
    if(x == 0)
    return 0;
    if(x == 1)
    return 1;

    return fibo(x-1) + fibo(x-2);
}
