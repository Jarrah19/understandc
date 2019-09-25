#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int marks [6] [2], subDatas [2] [2] = {0}, studentDatas [6] [2] = {0};
    int i, j, k, n = 1;
    srand((unsigned)time(NULL));

    printf("\n六名同学的两科成绩如下：\n");

    for (i = 0; i < 6; i ++) {
        printf("同学%d: ", n ++);

        for (j = 0; j < 2; j ++) {
            marks [i] [j] = rand() % 101;

            if (j == 0) { printf("语文："); }
            else { printf("数学："); }

            printf("%2d ", marks [i] [j]);
        }

        putchar('\n');
    }

    printf("\n每门课程总分与平均分如下：\n");

    for (k = 0; k < 2; k ++) {
        if (k == 0) {
            printf("语文: ");
        } else { printf("数学: "); }

        for (j = 0; j < 2; j ++) {

            for (i = 0; i < 6; i ++) {
                subDatas [k] [j] += marks [i] [k];
            }

            if (j == 0) { printf("总分：%3d ", subDatas [k] [j]);}
            else { printf("平均分：%4.2f", subDatas [k] [j] / 6.0); }

        }

        putchar('\n');
    }


    printf("\n六名同学的总分与平均分如下：\n");

    for (n = 1, i = 0; i < 6; i ++) {

        printf("同学%d: ", n ++);


        for (k = 0; k < 2; k ++) {
            for (j = 0; j < 2; j ++) {
                studentDatas [i] [k] += marks [i] [j];
            }

            if (k == 0) { printf("总分：%3d ", studentDatas [i] [k]);}
            else { printf("平均分：%4.2f", studentDatas [i] [k] / 2.0); }
        }

        putchar('\n');

    }



    putchar('\n');

    return 0;

}