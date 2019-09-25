#include <stdio.h>
int main(void) {
	
	int isRepeat;
	
	do {
		int input;
		printf("属于一个整数\n");
		scanf("%d", &input);

		if (input % 2 ){
			printf("输入的是奇数\n");
		} else  {
			printf("输入的是偶数\n");
		}

		printf("好了没\n");
		scanf("%d", &isRepeat);	
	} while (isRepeat != 0);

	printf("终于好了\n");
	return 0;
}
