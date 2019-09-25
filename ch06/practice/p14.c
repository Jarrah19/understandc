#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int i;
	static double v[4];
	srand((unsigned)time(NULL));

	for (i = 0; i < 4; i ++) {
		v[i] = rand() % 10;
		printf("%.2f ", v[i]);
	}

	putchar('\n');

}