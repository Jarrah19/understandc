#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int x, int y) {

    if (x == y) {
        return x;
    } else if (x < y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }

    x = x - y;

    return gcd (x, y);
}

int main(void) {

	srand((unsigned)time(NULL));

	int x = rand() % 100 + 1, y = rand () % 100 + 1;

	printf("%d 与 %d 的最大公约数为 %d。\n", x, y, gcd(x, y));

	return 0;

}