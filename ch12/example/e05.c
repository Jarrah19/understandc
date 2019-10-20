#include <stdio.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void hiriko (struct student *a) {
    if (a->height < 180) a->height = 180;
    if (a->weight > 80) a->weight = 80;
}

int main(void) {
    
    Student yamete = {"Yamete", 172, 66.6, 250};
    
    printf("%s\n", yamete.name);
    printf("%d\n", yamete.height);
    printf("%f\n", yamete.weight);
    printf("%ld\n", yamete.schols);
    
    hiriko(&yamete);
    
    printf("%s\n", yamete.name);
    printf("%d\n", yamete.height);
    printf("%f\n", yamete.weight);
    printf("%ld\n", yamete.schols);

    return 0;
}
