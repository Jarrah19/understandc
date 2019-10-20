#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int daysOfMonths [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int specialFebruary(int *y) {

    if (* y % 100 == 0) {if (* y % 400 == 0) return 1; else return 0;}

    else if (*y % 4 == 0) {return 1;}

    else {return 0;}
}

void decrement_date(int *y, int *m, int *d) {
	
    if (*d == 1 && *m == 1) {*d = 31; *m = 12; *y = *y - 1;}

    else if (*d == 1) {*d = daysOfMonths [*m - 2]; *m = *m - 1;}

    else {*d = *d - 1;}

    printf("现在来到了前一天：%4d年%2d月%2d日\n", *y, *m, *d);
}

void increment_date(int *y, int *m, int *d) {

    if (*d == 31 && *m == 12) {*d = 1; *m = 1; *y = *y + 1;}

    else if (*d == daysOfMonths[*m - 1]) {*d = 1; *m = *m + 1;}

    else {*d = *d + 1;}

    printf("现在来到了后一天：%4d年%2d月%2d日\n", *y, *m, *d);
}

int main(void) {

	srand((unsigned)time(NULL));

    int y, m, d, go;

    do {
        printf("请输入一个年份：");
        scanf("%d", &y);

        if (y <= 0) {
            printf("请输入公元元年以后的年份。\n");
        }

    } while (y <= 0);

    if (specialFebruary(&y)) { daysOfMonths[1] ++;}

    do {
        printf("请输入一个月份：");
        scanf("%d", &m);

        if (m < 1 || m > 12) {
            printf("请输入 1 到 12 的一个整数。\n");
        }

    } while (m < 1 || m > 12);

    do {
        printf("请输入一个日期：");
        scanf("%d", &d);

        if (d < 1 || d > daysOfMonths[m - 1]) {
        	if (m == 2) printf("%d 年的 ", y);
            printf("%d 月没有 %d 日，请输入 1 到 %d 的一个整数。\n", m, d, daysOfMonths[m - 1]);
        }

    } while (d < 1 || d > daysOfMonths[m - 1]);

    printf("您现在在%4d年%2d月%2d日，您想穿越到哪一天？\n 1. 前一天   0. 后一天\n请输入：", y, m, d);
    scanf("%d", &go);

    switch (go) {

    case (0): {increment_date(&y, &m, &d);}; break;

    case (1): {decrement_date(&y, &m, &d);}; break;

    default: printf("让你乱输，现在哪都去不了了，留在%4d年%2d月%2d日吧！告辞~\n", y, m, d); break;
    }

    return 0;
}
