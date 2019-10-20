# divination.c
占卜游戏

# numberGuessing.c
猜数游戏

# p01.c
将代码清单
```
#include <stdio.h>

int main(void)
{
    char *p = "123";
    printf("p = \"%s\"\n", p);
    p = "456";/*OK!*/
    printf("p = \"%s\"\n", p);
    return 0;
}
```
对p的赋值进行如下修改。
```
p = "456" + 1;
```
请编写程序确认运行结果，并对运行结果进行分析。

# p02.c
请编写一段程序，将通过计算求出各数组的字符串个数，用for循环表达式字符串数组。

# p03.c
将本文中学习的str_copy函数的调用作为printf函数的实参，将字符串s复制到d。

# p04.c
不使用下标运算符，编写如下函数，显示字符串s。

```
void put_string(const char *s) { /* ... */ }
```

# p05.c
不使用下标运算符，编写如下函数，返回字符串s中字符c的个数（若不存在,则为0）。

```
int str_chnum(const char *s, int c) { /* ... */ }
```

# p06.c
不使用下标运算符，编写如下函数，若字符串S中含有字符C（若含有多个，以先出现的为准），则返回指向该字符的指针，否则返回空指针。

```
char *str_chr(const char *s, int c) { /* ... */ }
```

# p07.c

不使用下标运算符，对字符串中的英文字符进行大小写转换。

# p08.c
编写如下函数，删除字符串str内的所有数字字符。
```
void del_digit(char *str) { /* ... */ }
```
例如，如果接收"AB1C9",就返回"ABC"。注意不要使用下标运算符。

