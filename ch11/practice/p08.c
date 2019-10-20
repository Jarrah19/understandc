#include <stdio.h>


void del_digit(char *str) {
    
    char *tmp = str;
    
    while (*tmp){
        if (*tmp < 48 || *tmp > 57) {
            *str = *tmp;
            str++;
        }
        tmp++;
    }
    *str = '\0';
}

int main(void) {
    
    char *str;
    scanf("%s", str);
    
    del_digit(str);
    
    printf("%s\n", str);
    
    return 0;
}
