#include <stdio.h>

int main(void) {

    char sfname[FILENAME_MAX], dfname[FILENAME_MAX];
    FILE *sfp, *dfp;
    int ch;

    printf("请输入原文件名\n");
    scanf("%s", sfname);
    printf("请输入目标文件名\n");
    scanf("%s", dfname);

    if ((sfp = fopen(sfname, "r")) == NULL) {

        printf("打开原文件失败\n");
    }

    else {
        if ((dfp = fopen(dfname, "w")) == NULL) {
            printf("打开目标文件失败\n");
        } 
        else {
            while ((ch = fgetc(sfp)) != EOF) {
            fputc(ch, dfp);
                putchar(ch);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}
