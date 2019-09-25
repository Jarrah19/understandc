#include <stdio.h>
int main(void)
{
	int i;
	int v[5];

	for (i = 0; i < 5; i ++)
	      { v[i+1] = i;
		printf("v[%d] = %d\n", i + 1, v[i + 1]);
		};
	
	return 0;
}
	
