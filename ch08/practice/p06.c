#include <stdio.h>

/*返回阶乘的值*/
int timesloop(int n) {
	int mul = 1;
    if (n > 0) {
    	while (n > 0){
    		mul *= (n--);
    	}
    	return mul;
    } else {
        return 1;
    }
}

int main(void) {
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("%d的阶乘为%d\n", num, timesloop(num));

    return 0;
}