#include <stdio.h>
int main(void)
{
	int begin, end, gap;

	printf("开始数值 (cm)：");
	scanf("%d", &begin);

	printf("结束数值 (cm)：");
	scanf("%d", &end);

	printf("间隔数值 (cm)：");
	scanf("%d", &gap);

	for ( ; end > begin; begin += gap)
		printf("%dcm      %.2fkg\n", begin, 0.90*begin - 90);
	
	printf("%dcm      %.2fkg\n", end, 0.90*end - 90);

	return 0;
}
