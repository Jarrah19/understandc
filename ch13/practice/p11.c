#include <stdio.h>

int main(void) {
    
    double da[10] = {3.04159265358979323846, 3.14159265358979323846, 3.24159265358979323846, 3.34159265358979323846, 3.44159265358979323846, 3.54159265358979323846, 3.64159265358979323846, 3.74159265358979323846, 3.84159265358979323846, 3.94159265358979323846};
    FILE *fp;
    
    for(int i = 0; i < 10; i++) {
        printf("%23.21lf\n", da[i]);
    }
    
    putchar('\n');
    
    if ((fp = fopen("data_file", "wb")) == NULL) {
        printf("文件打开失败\n");
    }
    else {
        fwrite(da, sizeof(double), 10, fp);
        fclose(fp);
    }
            
    if ((fp = fopen("data_file", "rb")) == NULL) {
        
        printf("文件打开失败\n");
    }
    else {
        fread(da, sizeof(double), 10, fp);
        for(int i = 0; i < 10; i++) {
            printf("%23.21lf\n", da[i]);
        }
        fclose(fp);
    }
    
    return 0;
}
