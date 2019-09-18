#include <stdio.h>
int main(void) {
    int n1, n2, n3;

    printf("请输入两个整数\n整数1：");
    scanf("%d", &n1);
    printf("整数2：");
    scanf("%d", &n2);
    printf("整数3：");
    scanf("%d", &n3);
    printf("它们的和是%d。\n", n1 + n2 + n3);
    return 0;
}