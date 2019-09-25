#include <stdio.h>
int main(void) {

    int input, number;

    scanf("%d", &input);

    for (number = 1; number <= input; number++) {
        printf("%d ", number);
    }

    putchar('\n');

    return 0;
}
