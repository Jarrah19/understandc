#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap (int *n1, int *n2) {
	*n1 = *n1 ^ *n2;
	*n2 = *n1 ^ *n2;
	*n1 = *n1 ^ *n2; 
}

void sort3(int *n1, int *n2, int *n3) {

    for (int i = 0; i < 3; i ++) {
    	if (*n1 > *n2) swap (n1, n2);
    	if (*n2 > *n3) swap (n2, n3);
    }
    printf("%d %d %d \n", *n1, *n2, *n3);
}



int main(void) {

    srand((unsigned)time(NULL));
    int n1 = rand() % 21, n2 = rand() % 21, n3 = rand() %21;

    printf("%d %d %d \n", n1, n2, n3);

    sort3(&n1, &n2, &n3);

    return 0;
}