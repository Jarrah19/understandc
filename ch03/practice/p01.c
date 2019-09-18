#include <stdio.h>
int main(void) {
    int n1, n2;

    printf("整数A：");
    scanf("%d", &n1);

    printf("整数B：");
    scanf("%d", &n2);

    if (n1 % n2) {
        printf("%d不是%d的约数。\n", n2, n1);
    } else {
        printf("%d是%d的约数。\n", n2, n1);
    }

    return 0;
}
