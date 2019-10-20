#include <stdio.h>

void put_string (const char *s) {
    
    printf("%s\n", s);
}

int main(void)
{
    char *ptr = "abcdfefgh";
    
    put_string(ptr);
    return 0;
}
