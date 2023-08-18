//Write a program to take a nXn 2‐D array of numbers as input(n<=10) and
// find the minimum number of the entire array. Then replace the maximum number of each column by that value.

#include <stdio.h>
int main () {
    int array[10][10] = {0};
    int row, col, n;
    int min[1], max[10];
    
    printf("n:");
    scanf("%d", &n);
    
    printf("Enter numbers:\n");
\
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            scanf("%d", &array[row][col]);
        }
    }
    
    

    min[0] = array[0][0];
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            if(array[row][col] < min[0]){
                min[0] = array[row][col];
            }
        }
    }
    printf("Minimum is: %d\n", min[0]);
    
    

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            if(array[i][j] == min[0]){
                array[i][j] = 0;
            }
        }
    }
    
    
    
    

    for (row = 0; row < n; row++) {
        max[row] = min[0];

        for (col = 0; col < n; col++) {
            if(array[col][row] > max[row]){
                max[row] = array[col][row];
            }
        }

        for (col = 0; col < n; col++) {
            if(array[col][row] == max[row]){
                array[col][row] = min[0];
            }
        }
    }
    
    

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}