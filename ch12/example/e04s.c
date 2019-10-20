#include <stdio.h>

#define NUMBER 5
#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

void hikoro (struct student *a) {
    if (a->height < 180) a->height = 180;
    if (a->weight > 80) a->weight = 80;
}

int main(void) {
    
    struct student sanaka = {"Sanaka", 173, 62.5, 75000};
    
    printf("%s\n", sanaka.name);
    printf("%d\n", sanaka.height);
    printf("%f\n", sanaka.weight);
    printf("%ld\n", sanaka.schols);

    hikoro (&sanaka);
    
    printf("%s\n", sanaka.name);
    printf("%d\n", sanaka.height);
    printf("%f\n", sanaka.weight);
    printf("%ld\n", sanaka.schols);

    return 0;
}
