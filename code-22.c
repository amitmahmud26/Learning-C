//write a program using switch wheather it is a vowel or a consonant
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charecter: \n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel\n");
            break;

        default:
            printf("Consonant\n");
    }
    return 0;
}