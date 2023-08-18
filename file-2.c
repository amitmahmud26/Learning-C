#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("File.txt","a");
    if (fptr == NULL)
    {
        printf("Opening Error");
    }
    else
    {
        char name[20];
        int id;
        
        printf("Enter name:\n");
        gets(name);
        printf("Enter ID:\n");
        scanf("%d",&id);

        fprintf(fptr,"Name = %s & ID = %d",name,id);
        fprintf(fptr,"\n");
        printf("File created!");
        
        fclose(fptr);
    }
return 0;
}