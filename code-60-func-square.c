#include<stdio.h>
int sqr(int a){
    return a*a;
}

int main(){
    int n;
    printf("Enter the number you want to get square of:\n");
    scanf("%d",&n);
    int square = sqr(n);
    printf("%d",square);
}