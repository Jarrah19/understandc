#include <stdio.h>

typedef struct xyz {
    int scanf_int;
    long scanf_long;
    double scanf_double;
} XYZ;

struct xyz scan_xyz (XYZ *a1) {

    scanf("%d", &a1->scanf_int);
    scanf("%ld", &a1->scanf_long);
    scanf("%lf", &a1->scanf_double);
    
    return *a1;
}

int scan_x (int *x) {
    scanf("%d", x);
    
    return *x;
}

int main(void) {
    
    XYZ data = scan_xyz(&data);
    int x = scan_x(&x);
    
    printf("%d\n", data.scanf_int);
    printf("%ld\n", data.scanf_long);
    printf("%lf\n", data.scanf_double);
    printf("%d\n", x);

    return 0;
}
