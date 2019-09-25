#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial(int n) {
    if (n > 0)

    {
        return n * factorial(n - 1);
    }

    else return 1;

}

int combination(int n, int r) {

    return factorial(n) / (factorial(r) * factorial(n - r));
}


int main(void) {
	srand((unsigned)time(NULL));

    int n = rand() % 9 + 1;
    int r = rand() % n + 1;

    printf("%d 个不同整数中取出 %d 个整数的组合数为 %d\n", n, r, combination(n, r));

    return 0;
}