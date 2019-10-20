#include <stdio.h>
#include <string.h>

#define NAME_LEN 64
#define NUMBER 5

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student (Student *a, Student *b) {
    Student tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_by_height (Student a[], int n) {
    for (int i = 0; i < n - 1; i ++) {
        for (int j = 0; j < n - 1 - i; j ++) {
            if (a[j].height > a[j + 1].height)
                swap_Student(&a[j], &a[j + 1]);
        }
    }
}

void sort_by_name (Student a[], int n) {
    for (int i = 0; i < n - 1; i ++) {
        for (int j = 0; j < n - 1 - i; j ++) {
            int k = 0;
            while (a[j].name[k] && a[j + 1].name[k]) {
                if (a[j].name[k] > a[j + 1].name[k]) {
                    swap_Student(&a[j], &a[j + 1]);
                    break;
                }
                if (a[j].name[k] < a[j + 1].name[k]) break;
                else k++;
            }
        }
    }
}

void scanf_from_keboard (Student *a) {
    printf("姓名：");
    scanf("%s", a->name);
    while (getchar() != '\n');
    printf("身高：");
    scanf("%d", &a->height);
    printf("体重：");
    scanf("%f", &a->weight);
    printf("奖学金数额：");
    scanf("%ld", &a->schols);
}

int main(void) {
    
    Student std[NUMBER];
    
    for (int i = 0; i < NUMBER; i ++) {
        scanf_from_keboard(&std[i]);
    }
    
    puts("按照身高排序");
    sort_by_height (std, NUMBER);

    for (int i = 0; i < NUMBER; i ++) {
        printf("%-12s %3d  %4.1f  %-8ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }

    puts("按照姓名排序");
    sort_by_name (std, NUMBER);
    
    for (int i = 0; i < NUMBER; i ++) {
        printf("%-12s %3d  %3.1f  %-8ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }

    
    return 0;
}
