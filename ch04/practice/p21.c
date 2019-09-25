#include <stdio.h>
int main(void)
{
	int l, w, n;

	printf ("请输入一个正整数作为边长：");
	scanf("%d", &n);

	for ( l = 0; l <= n; l ++) 
	{	for ( w = 0; w <= n; w++)
			printf (" *  ");
		printf ("\n\n");
     
	};
	
	return 0;
}
