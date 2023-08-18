/*Write a program that will take 10 positive integers into an array A. Now find all the
integers that are divisible by 3 and replace them by -1 in array A. Finally show all
elements of array A.*/
#include<stdio.h>
int main(){
    int i=0 , j=0,
     A[10];
    for(i=0 ; i<10 ; i++)
        {
            scanf("%d",&A[i]);
            if(A[i] % 3 == 0)
                A[i] = -1;
        }
    for(j=0 ; j<10 ; j++)
        {
            printf("%d",A[j]);
        }
    printf("\n");
    return 0;
}
