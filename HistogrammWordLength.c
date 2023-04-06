#include <stdio.h>
#include <string.h>

int main() {
    char currentCharacter;
    char input[1000] = {0};
    char *p;
    int counter;

    p = input;  

    printf("Enter some words all on the same line. To see the result press next line (Enter): \n \n");

    while(currentCharacter != '\n') {
        currentCharacter = getchar();
        *(p++) = currentCharacter;
        
    }

    *(p++) = '\0';
    p = input;
    currentCharacter = *p;

    while(currentCharacter != '\0') {       
        if(currentCharacter == ' ') {
            printf("\n");
        } else {
            printf("*");
        }    
        p++;
        currentCharacter = *p;
    }

    return 0;
}
