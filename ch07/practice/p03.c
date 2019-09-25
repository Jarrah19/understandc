#include <stdio.h>
#include <limits.h>

unsigned rrotate(unsigned x, int n){
	x >>= n;
	return x;
}

unsigned lrotate(unsigned x, int n) {
	x <<= n;
	return x;
}

#define NUMBER 3

int main(void) {

	unsigned n = 63;

    printf("%u >> %d = %u\n", n, NUMBER, rrotate(n, NUMBER));
    printf("%u << %d = %u\n", n, NUMBER, lrotate(n, NUMBER));

 }