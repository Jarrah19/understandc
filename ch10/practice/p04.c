#include <stdio.h>

#define NUMBER 5

void set_idx(int *v, int n) {

	for (int i = 0; i < n; i ++) {
		v[i] = i;
		printf("%d ", v[i]);
	}
	putchar ('\n');
}

int main(void) {

    int *array;

    set_idx (array, NUMBER);

    return 0;

}