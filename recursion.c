#include<stdio.h>
void rec(int n);
int main()
{
    int n;
    scanf("%d",&n);
    rec(n);
return 0;
}
void rec(int x)
{
    printf("Have a good day! %d\n",x);
    if (x == 1)
    {
        return;
    }
    else
    rec(x -1);

    
}