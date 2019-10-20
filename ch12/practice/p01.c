#include <stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    double weight;
    long schols;
};

int main(void) {
    struct student takao = {"Takao", 173, 86.2, 250};
    
    printf("姓名 = %s，地址是 %lu\n", takao.name, &takao.name);
    printf("身高 = %d，地址是 %lu\n", takao.height, &takao.height);
    printf("体重 = %f，地址是 %lu\n", takao.weight, &takao.weight);
    printf("奖学金 = %lu，地址是 %lu\n", takao.schols, &takao.schols);
    
    return 0;
}
