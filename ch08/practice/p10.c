#include <stdio.h>

int main(void) {

    int i, counter[10] = {0};

    while ((i = getchar()) != EOF) {
        counter [i - 48] ++;
    }

    for (int i = 0; i < 10; i++) {
    	printf("%d: ", i);
        for (int j = 0; j < counter[i]; j++) {
        	putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
