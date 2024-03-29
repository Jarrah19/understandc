#include <stdio.h>

int main(void) {
    FILE *fp;
    double pi = 3.14159265358979323846;

    printf("从变量pi得到的圆周率为%23.21f\n", pi);

    /*写入操作*/
    if ((fp = fopen("PI.bin", "wb")) == NULL) {
        printf("文件打开失败\n");
    } else {
        fwrite(&pi, sizeof(double), 1, fp);
        fclose(fp);
    }

    /*读取操作*/
    if ((fp = fopen("PI.bin", "rb")) == NULL) {
        printf("文件打开失败\n");
    } else {
        fread(&pi, sizeof(double), 1, fp);
        printf("从文件读取的圆周率为%23.21f\n", pi);
        fclose(fp);
    }

    return 0;
}
