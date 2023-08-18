//Write a program that takes the exam marks for three subjects for five students as input in a 2‐D array and prints the average marks for each student and the maximum marks for each subject as output.

#include <stdio.h>
int main () {
    int marks[5][3], avrg[5][1]={0}, max[3];
    int row, col;

    for (row = 0; row < 5; row++) {
        printf("Enter marks for student %d: ", row+1);
        for (col = 0; col < 3; col++) {
            scanf("%d", &marks[row][col]);
        }
    }



    for (row = 0; row < 5; row++) {
        int sum= 0;
        for (col = 0; col < 3; col++) {
            sum += marks[row][col];
        }
        for (col = 0; col < 1; col++) {
            avrg[row][col] = sum / 3;
        }
    }
    

    for (row = 0; row < 5; row++) {
        max[row] = -1;
        for (col = 0; col < 1; col++) {
            printf("Average marks for student %d: %d", row+1, avrg[row][col]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for (col = 0; col < 3; col++) {
        max[col] = -32768;
        for (row = 0; row < 5; row++) {
            if(marks[row][col] > max[col]){
                max[col] = marks[row][col];
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        printf("Maximum marks for subject %d: %d\n",i+1, max[i]);
    }
        return 0;
}