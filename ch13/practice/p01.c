#include <stdio.h>

int main(void) {
    
    FILE *fp;
    char filename[64];
    
    gets(filename);
    
    fp = fopen(filename, "r");
    
    if (fp == NULL) {
        printf("无法打开文件\n");
    }
    
    else {
        printf("成功打开了文件\n");
        fclose(fp);
    }
    
    return 0;
}
