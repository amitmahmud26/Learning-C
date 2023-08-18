//print letter by letter
#include<stdio.h>
#include<string.h>
int main(){
    char str[999];
    gets(str);
    int len;
    len = strlen(str);      //getting length
    printf("%d\n",len);

    int i=0;
    while (i <= len)        //str[i] != '\0' also can be used
    {
        printf("%c\n",str[i]);
        i++;
    }
return 0;
}