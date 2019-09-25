#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cube (int a) {
	return a * a * a;
}

int main(void) {
	srand((unsigned)time(NULL));

	int a = rand () % 11;

	printf("%d的立方为%d\n", a, cube(a));

	return 0;
	
}