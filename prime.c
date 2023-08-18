// #include<stdio.h>
// int prime(int);
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     int p = prime(a);
//     if (p == 1)
//     {
//         printf("Prime");
//     }
//     else
//         printf("Not Prime");
// return 0;
// }
// int prime(x)
// {
//     int flag = 1;
//     for(int i=2; i<x/2; i++)
//     {
//         if (x % i == 0)
//         {
//             flag = 0;
//             // break;
//         }   
//     }
//     return flag;
// }

#include<stdio.h>
void isPrime(int);
int main(){
    int n;
    printf("Type a number: ");
    scanf("%d",&n);
    printf("Prime less than %d: ",n);
    isPrime(n);
return 0;
}

void isPrime(int x){
    for (int i = 2; i <= x; i++)
    {
        int check = 0;
        if (i <= 1)
        {
            check = 1;
        }
        
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                check = 1;
            }
        }
        if (check == 0)
        {
            printf("%d ",i);
        }
    }
}