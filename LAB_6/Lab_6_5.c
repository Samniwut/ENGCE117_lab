#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count = 0;
int count_vowels_with_pointer(char *str);

int main(){
    int MAX_SIZE = 100;
    char sentence[100];
    int vowel_count;

    printf("Enter sentence :");
    if(fgets(sentence, MAX_SIZE, stdin) ==NULL){
    return 1;
    }
    sentence[strcspn(sentence, "\n")] = '\0';

    char *char_prt = sentence;
  vowel_count =  count_vowels_with_pointer(&char_prt);
    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String : \"%s""\n",sentence);
    printf("Total Vpwal Count : %d\n",vowel_count);
    return 0;
}
int count_vowels_with_pointer(char *str){
    while (*str != '\0') {
        char current_char_lower = tolower(*str); 
        if (current_char_lower == 'a' || 
            current_char_lower == 'e' || 
            current_char_lower == 'i' || 
            current_char_lower == 'o' || 
            current_char_lower == 'u') {
        }
        count++;
        str++;}
    return count;

}

