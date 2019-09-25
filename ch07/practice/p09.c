#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double getSide (area) {

	return sqrt((double) area);
}

int main(void) {

	srand((unsigned)time(NULL));

	int area = rand () %82;

	printf("面积为 %d 的正方形边长为 %f \n", area, getSide (area));


	return 0;
}