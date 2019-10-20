#include <stdio.h>
#include <math.h>

double sqr(double n) {
    return n*n;
}

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point pt;
    double fuel;
} Car;

void first_way(Point *dest) {
    puts("目的地的X坐标：");
    scanf("%lf", &dest->x);
    puts("目的地的Y坐标：");
    scanf("%lf", &dest->y);
}

void second_way(Point *start, Point *dest) {
    puts("X方向行进距离：");
    scanf("%lf", &dest->x);
    dest->x += start->x;
    puts("Y方向行进距离：");
    scanf("%lf", &dest->y);
    dest->y += start->y;
}

double distace_of_points (Point a, Point b) {
    return sqrt(sqr(a.x - b.x) + sqr(a.y - b.y));
}

int move(Car *start, Car *dest) {
    dest->fuel = start->fuel - distace_of_points (start->pt, dest->pt);
    return dest->fuel;
}

int main(void) {
    
    int met;
    Car start = {{0, 0}, 90.00},
    dest = {{0, 0,}};
    
   while (1) {
       int select;
       
       printf("开动汽车吗【YES---1/NO--0】：");
       scanf("%d", &select);
       while (getchar() != '\n');
       if (select != 1)break;

       do {
           puts("请选择行驶方式：1.输入坐标 2.输入距离");
           scanf("%d", &met);
           switch (met) {
               case 1: first_way(&dest.pt); break;
               case 2: second_way(&start.pt, &dest.pt); break;
           }
        
       } while (met != 1 && met != 2);
    
       if (move(&start, &dest) >= 0) {
           printf("已到达目的地，当前坐标 (%-3.1f, %-3.1f)，剩余燃料 %-3.1f\n", dest.pt.x, dest.pt.y, dest.fuel);
       }
    
       else puts("\a燃料不足无法行驶。");
       
       start = dest;
       
       if (dest.fuel < 0.001 && dest.fuel > - 0.001) {
           puts("燃料已耗尽，旅程结束");
           break;
       }
   }

    return 0;
}
