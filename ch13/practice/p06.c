#include <stdio.h>

int main(void) {
    
    char fname[FILENAME_MAX];
    int ch, counter = 0;
    FILE *fp;
    
    printf("请输入文件名：");
    scanf("%s", fname);
    
    if ((fp = fopen(fname, "r")) == NULL)
        printf("文件运行失败\n");
    
    else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch == '\n')
                counter ++;
        }
        fclose(fp);
    }
    printf("文件 %s 一共有 %d 行。\n", fname, counter + 1);
    
    return 0;
}
