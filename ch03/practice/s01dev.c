#include <stdio.h>
int main(void)

{
    int n1, n2;

    printf("当前是除法运算\n请输入第一个值：");
    scanf("%d", &n1);
    printf("请输入第二个值：");
    scanf("%d", &n2);

    printf(" %d 除以 %d 结果是%.2f\n", n1, n2, (double) n1 / n2);

    return 0;
}