#include <stdio.h>

int getSize (char const *array) {
int counter = 0;
while (*array++)
counter ++;
return counter;
}

int main(void)
{
    int i;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    for (i = 0; i < getSize(&a); i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    for (i = 0; i < getSize(*p); i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);

    return 0;
}