#include <stdio.h>
int main(void)
{
    int no;

    printf ("请输入一个整数：");
    scanf ("%d",&no);

    if (no<0) printf("%d ",no);
    else { while (no >= 0) {
        printf ("%d ",no--);
            }
        printf("\n");
       }
   

    return 0;
}

