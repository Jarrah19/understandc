#include <stdio.h>

int main(void) {
    
    char sfname[FILENAME_MAX], dfname[FILENAME_MAX], a[1024];
    FILE *sfp, *dfp;
    int n = 0;
    
    puts("原文件名");
    scanf("%s", sfname);
    puts("目标文件名");
    scanf("%s", dfname);
    
    if ((sfp = fopen(sfname, "rb")) == NULL) {
        
        printf("原文件运行失败\n");
    }
    else {
        while(fgetc(sfp) != EOF) n++;
        fread(a, sizeof(char), n, sfp);
        fclose(sfp);
    }
    
    if ((dfp = fopen(dfname, "wb")) == NULL) {
        
        printf("目标文件运行失败\n");
    }
    else {
        fwrite(a, sizeof(char), n, dfp);
        fclose(dfp);
    }
    
    return 0;
}
