#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

Student abcd (char a[], int b, float c, long d) {
    Student tmp;
    
    strcpy(tmp.name, a);
    tmp.height = b;
    tmp.weight = c;
    tmp.schols = d;
    
    return tmp;
}

int main(void) {
    
    Student handsome = {"Handsome", 180, 60, 1000};
    
    printf("%s\n", handsome.name);
    printf("%d\n", handsome.height);
    printf("%f\n", handsome.weight);
    printf("%ld\n", handsome.schols);
    
    handsome = abcd ("realHandsome", 169, 75, 0);
    
    printf("%s\n", handsome.name);
    printf("%d\n", handsome.height);
    printf("%f\n", handsome.weight);
    printf("%ld\n", handsome.schols);

    return 0;

}
