#include <stdio.h>
int main(void)
{
    int    n1 = 1; 
    double d1 = 1.00000; 

    
    printf("整型常量 乘 浮点型常量 的结果示例： %f\n", 1 * 1.0);
    printf("整型常量 乘 int型变量 的结果示例： %d\n", 1 * n1);
    printf("整型常量 乘 double型变量 的结果示例： %f\n", 1 * d1);
    printf("浮点型常量 乘 int型变量 的结果示例： %f\n", 1.0 * n1);
    printf("浮点型常量 乘 double型变量 的结果示例： %f\n", 1.0 * d1);
    printf("int型变量 乘 double型变量 的结果示例： %f\n", n1 * d1);

    return 0;
}