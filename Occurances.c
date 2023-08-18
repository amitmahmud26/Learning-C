#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[99];
    gets(str);

    char str2;
    scanf("%c",&str2);
    int l2 = tolower(str2);
    int count=0;
    int len  = strlen(str);
    for (int i = 0; i < len; i++)
    {
        int l = towlower(str[i]);
        if (l == l2)
        {
            count++;
        }
    }
    printf("%d",count);
return 0;
}