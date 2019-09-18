#include <stdio.h>
int main(void) {
    int n1 , n2, n3, n4;

    printf("请输入四个整数。\n整数A：");
    scanf("%d", &n1);

    printf("整数B: ");
    scanf("%d", &n2);

    printf("整数C: ");
    scanf("%d", &n3);

    printf("整数D：");
    scanf("%d", &n4);

    if (n1 > n2) { n1 = n1; }
    else { n1 = n2; }

    if (n1 > n3) { n1 = n1; }
    else { n1 = n3; }

    if (n1 > n4) { n1 = n1; }
    else { n1 = n4; }

    printf("四个整数中最大值为：%d。\n", n1);

    return 0;
}
