#include <stdio.h>

int main(void) {
    
    char fname[FILENAME_MAX];
    int ch;
    long unsigned counter = 0;
    FILE *fp;
    
    printf("请输入文件名\n");
    scanf("%s", fname);
    while (getchar() != '\n');
        
    if ((fp = fopen(fname, "r")) == NULL) {
        printf("文件运行失败\n");
    }
    
    else {
        while ((ch = fgetc(fp)) != EOF) {
            counter ++;
        }
        printf("文件 %s 一共有 %lu 个字符\n", fname, counter);
    }
        
    return 0;
}
