#include <stdio.h>

int main(void) {
    
    char fname[FILENAME_MAX];
    int ch;
    FILE *fp;
    
    printf("%s", "请输入文件名");
    scanf("%s", fname);
    
    if ((fp = fopen(fname, "r")) == NULL) {
        printf("打开文件失败\n");
    }
    
    else {
        while ((ch = fgetc(fp)) != EOF)
            putchar(ch);
        fclose(fp);
    }
    
    return 0;
    
}
