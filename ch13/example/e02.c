#include <stdio.h>

int main(void) {
    
    int ninzu = 0;
    char name[64];
    double weight, height;
    double hsum = 0;
    double wsum = 0;
    FILE *fp;
    
    fp = fopen("hw.dat", "r");
    
    if (fp == NULL) {
        printf("无法打开文件\n");
    }
    
    while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
        printf ("%s %3.0lf %3.1lf\n", name, height, weight);
        hsum += height;
        wsum += weight;
    }
    
    printf ("%s %3.0lf %3.1lf\n", "总计", hsum, wsum);

    return 0;
    
}
