#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

struct student {
    
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};


void hiriko (struct student *a) {
    
    if ((*a).height < 180) (*a).height = 180;
    if ((*a).weight > 80) (*a).weight = 80;
    
}

int main(void) {
    
    struct student sanaka;
    strcpy (sanaka.name, "Sanaka");
    sanaka.height = 173;
    sanaka.weight = 62.5;
    sanaka.schols = 75000;
    
    printf("%s\n", sanaka.name);
    printf("%d\n", sanaka.height);
    printf("%lf\n", sanaka.weight);
    printf("%ld\n", sanaka.schols);
    
    hiriko (&sanaka);
    
    printf("%s\n", sanaka.name);
    printf("%d\n", sanaka.height);
    printf("%lf\n", sanaka.weight);
    printf("%ld\n", sanaka.schols);

    return 0;
}
