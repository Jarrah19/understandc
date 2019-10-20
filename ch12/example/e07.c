#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

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
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].height > a[j + 1].height)
                swap_Student(&a[j], &a[j + 1]);
        }
    }
}

int main (void) {
    
    Student a[NUMBER] = {
        {"Sato", 178, 61.2, 80000},
        {"Sanaka", 175, 62.5, 73000},
        {"Takao", 173, 86.2, 0},
        {"Mike", 165, 72.3, 70000},
        {"Masaki", 179, 77.5, 70000},
    };
    
    for (int i = 0; i < NUMBER; i ++) {
        printf("%-8s  %6d %6.1f %7ld\n", a[i].name, a[i].height, a[i].weight, a[i].schols);
    }
    
    sort_by_height (a, NUMBER);
    
    puts("\n按身高排序。");
    for (int i = 0; i < NUMBER; i ++) {
        printf("%-8s  %6d %6.1f %7ld\n", a[i].name, a[i].height, a[i].weight, a[i].schols);
    }
    
    return 0;
}
