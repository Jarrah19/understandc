#include <stdio.h>

int main(void) {
    
    int ch;
    char sfname[FILENAME_MAX], dfname[FILENAME_MAX];
    FILE *sfp, *dfp;
    
    printf("请输入原文件名:");
    scanf("%s", sfname);
    printf("请输入目标文件名:");
    scanf("%s", dfname);

    if ((sfp = fopen(sfname, "r")) == NULL) {
        printf("原文件运行失败\n");
    }
    else {
        if ((dfp = fopen(dfname,"w")) == NULL) {
            printf("目标文件运行失败\n");
        }
        else {
            while((ch = fgetc(sfp)) != EOF) {
                if(ch >= 97 && ch <= 122)
                    ch -= 32;
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
//    printf("%c %d %c %d %c %d %c %d\n", 'a', 'a', 'z', 'z', 'A', 'A', 'Z', 'Z');
    
    return 0;    
}
