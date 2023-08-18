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
    int max = c[0];
    for(int i=0; i<10; i++)             // !feof(fptr)     for the length/ in while loop
    {
        if(max < c[i])
        {
            max = c[i];
        }
    }
    fprintf(fptr2, "%d\n", max);

    fclose(fptr);
    fclose(fptr2);

    return 0;
}
