#include <stdio.h>

#define NAME_LEN 64


int main(void) {
    
    FILE *fp;
    int tbc = 1;
    
    if ((fp = fopen("hw.dat", "w")) == NULL) {
        
        printf("文件无法打开\n");
    }
    
    else {
        do {
            char name[NAME_LEN];
            double height, weight;
            scanf("%s%lf%lf", name, &height, &weight);
            fprintf(fp, "%s %3.0lf %3.1lf\n", name, height, weight);
            printf("是否继续：1.是 0.否");
            scanf("%d", &tbc);
        } while (tbc);
    }
    
    
    
    fclose(fp);
    
    return 0;
}
