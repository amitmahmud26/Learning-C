//Number of vowels, consonants, words, digits and other
#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() {

  char str[150];
  int vowels, consonant, digit, word;

  // initialize all variables to 0
  vowels = consonant = digit = word = 0;

  // get full str of string input
  printf("Enter a str of string: ");
  gets(str);

  // loop through each character of the string
  for (int i = 0; str[i] != '\0'; ++i) {

    // convert character to lowercase
    str[i] = tolower(str[i]);

    // check if the character is a vowel
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u') {

      // increment value of vowels by 1
      ++vowels;
    }

    // if it is not a vowel and if it is an alphabet, it is a consonant
    else if ((str[i] >= 'a' && str[i] <= 'z')) {
      ++consonant;
    }

    // check if the character is a digit
    else if (str[i] >= '0' && str[i] <= '9') {
      ++digit;
    }

    // check if the character is an empty word
    else if (str[i] == ' ') {
      ++word;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWords: %d", word+1);
  printf("\nCharacters: %d", vowels+consonant);

  return 0;
}