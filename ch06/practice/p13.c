#include <stdio.h>

/*将4行3列矩阵a和b的值存储在三维数组c中*/
void mat_add(const int a[4][3], const int b[4][3] , int c[2][4][3]) {
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            c[0][i][j] = a[i][j];
        }

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            c[1][i][j] = b[i][j];
        }
}

/*显示4行3列矩阵*/
void mat_print(const int m[4][3]) {
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", m[i][j]);
        }

        putchar('\n');
    }
}

int main(void) {
    int i, j;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int tensu[2][4][3];

    mat_add(tensu1, tensu2, tensu);/*求两次考试的分数之和*/

    puts("第一次考试的分数"); mat_print(tensu1); /*显示第一次考试的分数*/

    puts("第二次考试的分数"); mat_print(tensu2); /*显示第二次考试的分数*/


    return 0;
}