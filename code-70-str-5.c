//copying,compare,
#include<stdio.h>
#include<string.h>
int main(){
    char str[99];
    char str2[99];
    gets(str);
    gets(str2);
    char temp[99];

    strcpy(temp,str);
    strcpy(str,str2);
    strcpy(str2,temp);

    printf("%s\n",str);
    printf("%s",str2);
    printf("\n");
    int d = strcmp(str,str2);
    if (d == 0)
    {
        printf("Same.\n");
    }
    else
    {
        printf("Not same.\n");
    }
    

return 0;
}
