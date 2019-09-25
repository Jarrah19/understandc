#include <stdio.h>

#define ROWS 5
#define COLUMNS 128

int compareString(char target[], char source[], int arrayLength) {
    for (int i = 0; i < arrayLength; ++i) {
        if (target[i] !=  source[i]) {
            return 0;
        }

    }

    if (source[arrayLength] != '\0') {
        return 0;
    }

    return 1;
}

int main(void) {
    char cs[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++) {
        printf("cs[%d] : ", i);
        scanf("%s", cs[i]);

        if (compareString(cs[i], "$$$$$", 5)) {
            break;
        }
    }

    for (int i = 0; i < ROWS; i++) {

        if (compareString(cs[i], "$$$$$", 5)) {
            break;
        }

        printf("cs[%d] = \"%s\"\n", i, cs[i]);
    }


    return 0;
}