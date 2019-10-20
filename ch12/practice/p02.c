#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct {
    
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
    
} Student;

int main(void) {
    
    Student sanaka;
    
    puts("请输入姓名");
    gets(sanaka.name);
    puts("请输入身高");
    scanf("%d", &sanaka.height);
    puts("请输入体重");
    scanf("%f", &sanaka.weight);
    puts("请输入奖学金金额");
    scanf("%ld", &sanaka.schols);
    
    printf("%s\n", sanaka.name);
    printf("%d\n", sanaka.height);
    printf("%f\n", sanaka.weight);
    printf("%ld\n", sanaka.schols);
    
    return 0;

}
