#include <stdio.h>

int main(void) {

    for (float i = 0, j = 0; i <= 1; i += 0.01, j++) {

        printf("%f  %f\n", i, j/100.0);
    }

    return 0;

}