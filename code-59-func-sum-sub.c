#include<stdio.h>
int sum(int a, int b, int c)
{
    return a+b+c;
}
int sub(int a, int b)
{
    return a-b;
}
void time(int a, int b)
{
    printf("%d",(a*b));
}
int sqr(int s)
   { return s*s;}
int main(){
    int result = sum(1,2,30);
    printf("%d\n",result);

    result = sum(2,1,3);                
    printf("%d\n",result);

    result = sub(2,1);
    printf("%d\n",result);

    // result = time(2,3);
    // printf("%d\n",result);
    //void
    time(2,5);
    int square = sqr(5);
    printf("%d",square);

return 0;
}