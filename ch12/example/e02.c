#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main (void) {
    
    struct student takao;
    strcpy(takao.name, "Takao");
    takao.height = 175;
    takao.weight = 62.5;
    
    printf("姓名 = %s\n", takao.name);
    printf("身高 = %d\n", takao.height);
    printf("体重 = %.1f\n", takao.weight);
    printf("奖学金 = %ld\n", takao.schols);
    
    return 0;
}
