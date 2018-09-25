#include <stdio.h>

int main (void)
{
	int age;
	float height;

	printf("age and height:");
	scanf("%d%f", &age, &height);	
	printf("age: %d height: %.1fcm\n", age, height);

	return 0;
}
