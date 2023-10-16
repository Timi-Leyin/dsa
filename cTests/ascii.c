#include <stdio.h>

int main(){
    char character = 'A';  // Change this to the character you want to find the ASCII code for

    int ascii_code = (int)character;  // Cast the character to an integer to get its ASCII code

    printf("The ASCII code of '%c' is %d\n", character, ascii_code);

    return 0;
}