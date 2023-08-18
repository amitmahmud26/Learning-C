// #include<stdio.h>
// // int fact(int n);
// int main()
// {
//     // int n;
//     // scanf("%d",&n);
//     // int result = fact(5);
//     printf("%d",fact(5));
// return 0;
// }
// int fact(int x)
// {
//     if (x <= 1)
//     {
//         return 1;
//     }
    
//     return x * fact(x - 1);

    
// }
#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
