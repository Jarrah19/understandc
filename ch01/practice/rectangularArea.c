#include <stdio.h>
int main(void) {
    int width;
    int height;

    printf("求长方形的面积。\n长: ");
    scanf("%d", &width);

    printf("宽: ");
    scanf("%d", &height);
    printf("面积是 %d。\n", width * height);
    return 0;
}