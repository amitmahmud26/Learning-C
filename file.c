#include <stdio.h>
int main() {
    int c[999];
    FILE *fptr, *fptr2;
    fptr = fopen("input.txt", "r");
    if(fptr == NULL)
        printf("Error");
    fptr2 = fopen("output.txt","w");

    for(int i=0; i<10; i++)
    {
        fscanf(fptr, "%d", &c[i]);
    }
    for(int i=0; i<10; i++)
    {
        fprintf(fptr2, "%d\n", c[i]);
    }

    fclose(fptr);
    fclose(fptr2);

    return 0;
}
