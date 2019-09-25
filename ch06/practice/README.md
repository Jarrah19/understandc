# p01.c
创建一个函数，返回两个int型整数中较小一数的值。
```
int min2(int a,int b){/*...*/}
```
为了确认函数的动作，还需要大家创建一个合适的main函数来组成一段完整的程序（之后的练习也是如此）。

# p02.c
创建一个函数，返回三个int型整数中的最小值。
```
int min3(int a,int b,int c){/*...*/}
```

# p03.c
创建一个函数，返回int型整数的立方。
```
int cube(int x){/*...*/}
```

# p04.c
创建一个函数，返回int型整数的四次幂。
```
int pow4(int x){/*...*/}
```

# p05.c
创建一个函数，返回1到n之间所有整数的和。
```
int sumup(int n){/*...*/}
``` 
# p06.c
创建一个函数，连续发10次响铃。
```
void alert(int n) { /*...*/ }
```

*** 不知道什么原因（计算机系统原因？），最多响铃五次***

# p07.c
创建一个函数，在屏幕上显示出“你好。”并换行。
```
void hello(void){/*...*/}
```

# p08.c
创建一个函数，返回元素个数为 n 的 int 型数组 v 中的最小值。
```
int min_of(const int v[]，int n){/*...*/}
```

# p09.c
创建一个函数，对元素个数为 n 的 int 型数组 v 进行倒序排列。
```
void rev_intary{int v[],int n){/*...*/)

```
# p10.c
创建一个函数，对元素个数为 n 的 int 型数组 v2 进行倒序排列，并将其结果保存在数组 v1 中。
```
void intary_rcpy(int v1[],const int v2[],int n){/*...*/}

```

# p11.c
创建一个函数search_idx，将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。
```
int search_idx(const int v[] int idx[],int key,int n);
```
例如，如果v中所接收的数组的元素是{1,7,5,7,2,4,7}，key为7的话，{1,3,6}就会被存储在id中x，并返回3。

# p12.c
创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。
```
void mat_mul(const int a[4][3],const int b[3][4],int c[3][3]){/*...*/}
```

# p13.c
改写如下代码，将两次考试的分数存储在三维数组中。
```
#include <stdio.h>

/*将4行3列矩阵a和b的和存储在c中*/
void mat_add(const int a[4][3], const int b[4][3] , int c[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
}

/*显示4行3列矩阵*/
void mat_print(const int m[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        putchar('\n');
    }
}

int main(void)
{
    int i, j;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int sum[4][3];

    mat_add(tensu1, tensu2, sum);/*求两次考试的分数之和*/

    puts("第一次考试的分数"); mat_print(tensu1); /*显示第一次考试的分数*/

    puts("第二次考试的分数"); mat_print(tensu2); /*显示第二次考试的分数*/

    puts("总分"); mat_print(sum); /*显示总分*/

    return 0;
}
```
# p14.c
编写一段程序，为double型数组的所有元素分配静态存储期，并确认它们都被初始化为0.0

# p15.c

创建函数put_count，显示被调用的次数（如下显示的是调用3次函数put_count的运行结果）
```
void put_count() {/*...*/}
```
```
put_count:第一次
put_count:第二次
put_count:第三次
```