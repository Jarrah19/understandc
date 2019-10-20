#include <stdio.h>

int main(void) {
    
    int ch;
    char sfname[FILENAME_MAX], dfname[FILENAME_MAX];
    FILE *sfp, *dfp;
    
    printf("请输入原文件名: ");
    scanf("%s", sfname);
    printf("请输入目标文件名: ");
    scanf("%s", dfname);
    
    if ((sfp = fopen(sfname, "r")) == NULL) {
        
        printf("运行原文件失败\n");
    }
    
    else {
        if ((dfp = fopen(dfname, "w")) == NULL) {
            printf("运行目标文件失败\n");
            }
        else{
            while ((ch = fgetc(sfp)) != EOF) {
                if (ch >= 65 && ch <= 90) {
                    ch += 32;
                }
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    
    return 0;
}
