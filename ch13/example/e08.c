#include <stdio.h>

int main(void) {
    FILE *fp;
    double pi = 3.14159265358979323846;

    printf("从变量pi得到的圆周率为%23.21f\n", pi);

    /*写入操作*/
    if ((fp = fopen("PI.txt", "w")) == NULL) {
        printf("文件打开失败\n");
    } else {
        fprintf(fp, "%f\n", pi);
        fclose(fp);
    }

    /*读取操作*/
    if ((fp = fopen("PI.txt", "r")) == NULL) {
        printf("文件打开失败\n");
    } else {
        fscanf(fp, "%lf", &pi);
        printf("从文件读取的圆周率为%23.21f\n", pi);
        fclose(fp);
    }

    return 0;
}
