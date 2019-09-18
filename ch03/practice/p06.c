#include <stdio.h>

int main(void)
{
int n1,n2,n3;

printf( "请输入3个整数：\n整数1：" );
scanf( "%d", &n1 );

printf( "整数2：" );
scanf( "%d", &n2 );

printf("整数3：");
scanf( "%d", &n3 );

(n1<n2) ? n1=n1:(n1=n2);
(n1<n3) ? n1=n1:(n1=n3);

printf("三个整数中的最小值为：%d。\n",n1);

return 0;
}
