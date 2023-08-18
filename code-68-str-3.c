//find length of a string
#include<stdio.h>
#include<string.h>
int maint(){
    char str[999];
    gets(str);
    int len;
    len = strlen(str);      //getting length
    printf("%d\n",len);
return 0;
}