#include <stdio.h>
#include <string.h>

#define ALLCHARS 255

int main() {
    char currentCharacter;
    int input[255] = {0};
    int i;

    while(currentCharacter != '\n') {
        currentCharacter = getchar();
        input[currentCharacter] += 1;
    }

    for(int i = 0; i <= ALLCHARS; i++) {
        if(input[i] != 0) {
            printf("\n");
            printf("%c =>", i);
        }
        while(input[i] > 0) {
            printf("*");
            input[i] -= 1;
        }
    }

    return 0;
}
