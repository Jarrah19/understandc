#include <stdio.h>
int str_chnum(const char *s, int c) {
    int count = 0;
    while (*s++) {
        if (*s == c)
        count ++;
    }
    
    return count;
}

int main(void) {
    
    char *ptr = "abcdefg";
    
    printf("%d\n", str_chnum(ptr, 'c'));
    return 0;
    
}
