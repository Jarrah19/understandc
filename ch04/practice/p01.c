#include <stdio.h>
int main(void) {

    int input;


    do	{
        printf("请输入一个整数：\n");
        scanf("%d", &input);

        if (input > 0) {
            printf("%d是一个正数。\n", input);
        } else if (input < 0) {
            printf("%d是一个负数。\n", input);
        }
    } while (input != 0);

    return 0;

}