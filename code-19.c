//check if the letter is vowel or consonant
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a letter: \n");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The letter is Vowel");
    }
    else{
        printf("The letter is Consonant");
    }
    return 0;
    
}