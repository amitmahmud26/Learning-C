#include<stdio.h>
int main(){
    FILE *fptr;
    char i;
    int count=0;
    fptr = fopen("count.txt","r");
    if (fptr == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File found\n");
        for(i = getc(fptr); i != EOF; i = getc(fptr))
        {
            if (i == '\n')
            {
                count++;
            }
            
        }
        printf("Total Lines = %d",count);
    }
    fclose(fptr);
return 0;
}