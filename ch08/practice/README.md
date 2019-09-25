# p01.c
请定义一个函数式宏diff(x,y)，返回x、y二值之差。

# p02.c
现定义如下函数式宏，其功能为返回x、y中的较大值。
```
#define max(x,y) (((x)>(y))?(x):(y))
```
而下面两个使用了该宏的表达式的功能为计算a、b、c、d中的最大值。
```
max(max(a, b), max(c, d))
max(max(max(a, b), c), d)
```
请显示并观察它们是如何展开的。

# p03.c
定义一个函数式宏swap(type，a，b)以使type型的两值互换。

例如:假设int型变量x、y的值分别为5、10,那么调用swap(int,x,y)后，x、y中应分别保存10、5。

# p04.c
创建一个程序，对代码进行改写，依然使用冒泡排序法，但排序时要按照从前往后的顺序，而非从后往前(这是针对上一节内容的练习)。
```
#include <stdio.h>

#define NUMBER 5
/*冒泡排序*/
void bsort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

int main(void)
{
    int i;
    int height[NUMBER];

    printf("请输入%d人的身高。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%2d号：", i + 1);
        scanf("%d", &height[i]);
    }

    bsort(height, NUMBER);

    puts("按升序排列。");

    for (i = 0; i < NUMBER; i++)
        printf("%2d号：%d\n", i + 1, height[i]);
    return 0;
}
```

# p05.c
请在程序中定义表示性别、季节等的枚举类型，并有效使用它们。

# p06.c
不使用递归调用的方式来实现阶乘函数factorial。

# p07.c
编写如下函数，求出从n个不同整数中取出r个整数的组合数。
```
int combination(int n,int r){/*...*/}
```

# p08.c
创建一个函数，使用辗转相除法求两个整数值x和y的最大公约数。
```
int gcd(int x, int y){/*...*/}
```
* 辗转相除法 将两个整数值作为长方形的边长。用以短边为边长的正方形来填充该长方形，然后对剩余部分的长方形重复进行同样的操作。当长方形被正方形填满时，该正方形的边长就是之前提到的两个整数值的最大公约数。

# p09.c
创建一个程序，计算标准输入中出现的行数。

# p10.c
计算标准输入流中出现的数字字符数，将数字字符的出现次数用并排的*表示。