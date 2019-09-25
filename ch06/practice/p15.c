#include <stdio.h>

void put_count(void){
	static int count = 1;
	printf("put_count：第%d次\n", count++);
}

int main(void) {

	int i;

	for (i = 0; i < 6; i ++) {
		put_count();	
	}

}