#include <stdio.h>
#define NAME_LEN 64

typedef struct{
    char name[NAME_LEN];
    double height;
    double weight;
    
} Student;

void swap (Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void sort_by_height (Student a[], int n) {
    for (int i = 0; i < n - 1; i ++) {
        for (int j = 0; j < n - 1 - i; j ++) {
            if (a[j].height > a[j + 1].height) swap(&a[j], &a[j + 1]);
        }
    }
}

int main (void) {
    
    Student std[100];
    int num = 0, i = 0;
    double hsum = 0, wsum = 0;
    FILE *fp;
    
    fp = fopen ("hw.dat", "r");
    
    if (fp == NULL) {
        printf("无法打开文件");
    }
    
    else {
        while (fscanf(fp, "%s%lf%lf", std[i].name, &std[i].height, &std[i].weight) == 3) {
            wsum += std[i].weight;
            hsum += std[i].height;
            i++;
        }
    
        sort_by_height (std, i);
    
        for (int j = 0; j < i; j ++) {
            printf("%s %3.0lf %3.1lf\n", std[j].name, std[j].height, std[j].weight);
        }
    
        printf("%s %3.0lf %3.1lf\n", "总计", hsum, wsum);

        fclose(fp);
    }
    
    return 0;
}
