#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%f\n", 3.4);
	printf("%.1f\n", 3.45);
	printf("%.10f\n", 3.4);

	printf("%d and %d equal %d.\n",10, 20, 10+20);
	printf("%.1f - %.1f = %.1f\n", 3.4, 1.2, 3.4-1.2);

	return 0;
}
