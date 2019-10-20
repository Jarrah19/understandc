#include <stdio.h>

#define NAME_LEN 64
#define NUMBER 5

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main(void) {
    
    struct student takao = {"Takao", 173, 67.3};
    
       printf("姓名 = %s\n", takao.name);
       printf("身高 = %d\n", takao.height);
       printf("体重 = %.1f\n", takao.weight);
       printf("奖学金 = %ld\n", takao.schols);
    
    return 0;
}
