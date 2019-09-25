#include <stdio.h>
int main(void) {
    int h, i, j;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int tensu[2][4][3] = {0};
    int sum[4][3];

    /*求两次考试的分数之和*/
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = tensu1[i][j] + tensu2[i][j];
        }
    }



    /*显示第一次考试的分数*/
    puts("第一次考试的分数");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu1[i][j]);
        }

        putchar('\n');
    }

    /*显示第二次考试的分数*/
    puts("第二次考试的分数");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu2[i][j]);
        }

        putchar('\n');
    }

    /*显示总分*/
    puts("总分");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", sum[i][j]);
        }

        putchar('\n');
    }

    for (h = 0; h < 2; h++) {
        if (h == 0) for (i = 0; i < 4; i++) {
                for (j = 0; j < 3; j++) {
                    (tensu [h] [i] [j]) = (tensu1[i][j]);
                }
            }

        else for (i = 0; i < 4; i++) {
                for (j = 0; j < 3; j++) {
                    (tensu [h] [i] [j]) = ( tensu2 [i][j]);
                }
        }
    }


    /*显示两次考试的分数*/
    puts("两次考试的分数\n");

    for (h = 0; h < 2; h ++) {
        if (h == 0) {
            printf("第一次考试：\n");
        } else { printf("第二次考试：\n"); }

        for (i = 0; i < 4; i ++) {
            for (j = 0; j < 3; j ++) {
                printf("%d ", tensu [h] [i] [j]);
            }
            putchar('\n');

        }

        if (h == 1) { putchar('\n'); }

    }



    return 0;
}