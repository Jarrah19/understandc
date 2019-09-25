#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 5

int min_of(const int v[], int n) {
    int i, min = 0xFFFFFFF;

    for (i = 0; i < n; i++) {
        if (min > v[i])
            min = v [i];
    }

    return min;
}


int main(void) {
    int i, x[NUMBER];
    srand((unsigned)time(NULL));

    printf("{");

    for (i = 0; i < NUMBER; i++) {
    	x [i] = rand() % 10;
    	printf("%2d ", x [i]);

    }
    printf("}\n最小值为 %d \n", min_of(x, NUMBER));

	    
    return 0;
}