#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min3 (int a, int b, int c){
	if (a > b) 
		a = b;
	if (a > c)
		a = c;
	return a;
}

int main(void){
	srand((unsigned)time(NULL));
		int a = rand() % 11, b = rand() % 11, c = rand() % 11;

	printf("a = %d, b = %d, c = %d\n其中最小值为 %d 。\n", a, b, c, min3 (a, b, c));

return 0;

}