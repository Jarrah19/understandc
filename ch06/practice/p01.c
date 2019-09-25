#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min2 (int a, int b){
	int min;
	if (a > b) 
		min = b;
	else min = a;

	return min;
}

int main(void){
	srand((unsigned)time(NULL));
		int a = rand() % 11, b = rand() % 11 ;

	printf("a = %d, b = %d\n, 其中较小值为%d。", a, b, min2 (a, b));

return 0;

}