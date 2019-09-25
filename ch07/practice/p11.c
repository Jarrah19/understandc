#include <stdio.h>

int main(void) {
    float sum1 = 0, sum2 = 0;

    for (float i = 0, j = 0; i <= 1; i += 0.01, j++) {

        printf("%f  %f\n", i, j / 100.0);

        sum1 += i;
        sum2 += j / 100;
    }

    printf("累计值为  累计值为\n%f  %f\n", sum1, sum2);


    return 0;

}