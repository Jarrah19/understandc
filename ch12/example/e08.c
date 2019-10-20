#include <stdio.h>
#include <math.h>

typedef struct{
    double x;
    double y;
} Point;

Point scan_point (Point *a, char b[64]) {
    printf("%s的X坐标：", b);
    scanf("%lf", &a->x);
    printf("%s的Y坐标：", b);
    scanf("%lf", &a->y);
    
    return *a;
}

double sqr(double n) {
    return n*n;
}

double distance_of (Point l, Point w) {
    return sqrt(sqr(l.x - w.x) + sqr(l.y - w.y));
}

int main(void) {
    
    Point a, b;
    
    a = scan_point(&a, "当前地点");
    b = scan_point(&b, "目的地");
    
    printf("点 A 的坐标为 (%-.1lf, %-.1lf), 点 B 的坐标为 (%-.1lf, %-.1lf)\n两点之间的距离为%-.2lf\n", a.x, a.y, b.x, b.y, distance_of(a, b));
    
    return 0;
}
