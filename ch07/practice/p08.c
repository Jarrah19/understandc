#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand((unsigned)time(NULL));

	float f = rand() % 10;
	double d = rand() % 10;
	long double ld = rand() % 10;

	printf("float型 ：%lu 位\ndouble型：%lu 位\nlong double型：%lu 位\n", sizeof(f), sizeof(d), sizeof(ld));

	return 0;
}