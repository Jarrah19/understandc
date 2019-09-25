#include <stdio.h>
#include <limits.h>

int main(void) {

	unsigned n = 63;

    printf("%u = %u\n", n << 3, n * 2 * 2 * 2);
    printf("%u = %u\n", n >> 3, n / (2 * 2 * 2));

 }