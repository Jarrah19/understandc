#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand((unsigned)time(NULL));

	float f = rand() % 10;
	double d = rand() % 10;
	long double ld = rand() % 10;

	printf("float型 ：%f\ndouble型：%f\nlong double型：%Lf\n", f, d, ld);

	return 0;
}