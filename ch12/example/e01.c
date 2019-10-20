#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

void swap_int (int *a, int *b) {
    
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap_char (char *a, char *b) {
    
    char tmp[NAME_LEN];
    
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}

void sort (int a[], char b[][NAME_LEN], int n) {
    for (int i = 0; i < n - 1; i ++) {
        for (int j = 0; j < n - 1; j ++){
            if (a[j] > a[j + 1]) {
                
                swap_int (&a[j], &a[j + 1]);
                swap_char (b[j], b[j + 1]);
            }
        }
    }
}


int main(void) {
    
    int i;
    int height[] = {178, 175, 173, 165, 179};
    char name[][NAME_LEN] = {"Sato", "Sanaka", "Takao", "Mike", "Masaki"};
    
    for (i = 0; i < NUMBER; i++) {
        
        printf("%2d: %-8s%4d\n", i + 1, name[i], height[i]);
    }
    
    sort (height, name, NUMBER);
    
    puts("\n按身高进行升序排列");
    for (i = 0; i < NUMBER; i++) {
        
        printf("%2d: %-8s%4d\n", i + 1, name[i], height[i]);
    }

    return 0;

}
