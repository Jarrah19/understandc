#include <stdio.h>

int main(void) {
    
    char sfname[FILENAME_MAX], dfname[FILENAME_MAX];
    FILE *sfp, *dfp;
    int ch;
    
    printf("请输入原文件名：");
    scanf("%s", sfname);
    printf("请输入目标文件名：");
    scanf("%s", dfname);
    
    if ((sfp = fopen(sfname, "r")) == NULL) {
        printf("原文件打开失败\n");
    }
    else {
        if ((dfp = fopen(dfname, "w")) == NULL) {
            printf("目标文件打开失败\n");
        }
        else {
            while ((ch = fgetc(sfp)) != EOF) {
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    
    return 0;
}
