#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 5
/*冒泡排序*/
void spring(void)
{
   puts("春困"); 
}

void summer(void)
{
   puts("夏乏"); 
}

void fall(void)
{
   puts("秋惰"); 
}

void winter(void)
{
   puts("冬眠"); 
}

void male(void) {
    puts("蔡徐坤");
}

void female(void) {
    puts("李宇春");
}

enum seasons {Spring = 2, Summer, Fall, Winter};

enum gender {Male, Female};

enum gender choice(void) {
    int g;
    printf("请输入性别: 男 【0】 女 【1】\n");
    scanf ("%d", &g);
    return g;
}

enum seasons selcect(void) {
    int s;
    printf("请输入季节: 春 【2】 夏 【3】秋 【4】冬 【5】\n");
    scanf ("%d", &s);
    return s;
}




int main(void)
{
    enum seasons selected;
    enum gender chosen;

    switch (chosen = choice()) {
        case Male: male(); break;
        case Female: female(); break;
        default: puts("滚蛋 ，别瞎几把输！"); break;
    }

    switch (selected = selcect()) {
        case Spring: spring(); break;
        case Summer: summer(); break;
        case Fall: fall(); break;
        case Winter: winter(); break;        
        default: puts("滚蛋 ，别瞎几把输！"); break;
    }


    return 0;
}