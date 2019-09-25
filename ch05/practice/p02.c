#include <stdio.h>
int main(void)
{
	int i, v[5];

	for (i = 5; i > 0; i --)
		{
		v[6 - i] = i;
		printf("v[%d] = %d\n", 6 - i, v[6-i]);
		}

return 0;
}
