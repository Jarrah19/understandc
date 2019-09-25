#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int a, int b) {
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("交换后 a = %d，b = %d\n", a, b);
}

int main(void) {
    srand((unsigned)time(NULL));

    int a = rand() % 10;
    int b = rand() % 10;


    printf("a = %d，b = %d \n", a, b);
    swap (a, b);

    return 0;
}