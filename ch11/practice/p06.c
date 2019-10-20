#include <stdio.h>

int *str_chr (const char *s, int c) {
    
    char *a;
    while (*s++) {
        
        if (*s == c) {a = s; return a;
        }}
    
    return NULL;
}

int main(void) {
        
    char *str = "Construction Complete";
    
    printf("%lu\n", str_chr(str, 'C'));
    
    
    return 0;
}
