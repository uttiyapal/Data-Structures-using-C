
#include <stdio.h>

int main(){
    char *p;
    p = "abc";
    printf("%s\n",p);

    // char *str = "Uttiya";
    char str[] = "Uttiya";
    str[1]='l'; // The pointer declaration cannot be modified, the character declaration can
    puts(str);

    /* 'scanf' vs 'gets'/'fgets' function */
    char str1[100];
    char str2[100];
    
    scanf("%s",str1); // Enter: " To C, or not to C"
    puts(str1); 
    /* Output: "To" 
    Skips whitespaces at the beginning, and reads until it encounters a whitespace.
    Always stores a '\0' at the end of the line */

    fgets(str2,sizeof(str2),stdin); // Enter: " To C, or not to C"
    puts(str2); 
    /* Output: " To C, or not to C" 
    Keeps all the whitespaces at the beginning, and keeps reading until it encounters a '\n'
    Replaces the '\n' it reads at the end of the string with a '\0' */
}