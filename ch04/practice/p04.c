#include <stdio.h>
int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    if (no < 0) printf("该整数小于0");
    else { while (no >= 1) {
        printf("%d ", no--);
             }
          printf("\n");
    }
    return 0;
}
