/* author: Hajun Park
   title: store string into character array */

#include <stdio.h>

int main (void)
{
	char fruit[32] = "strawberry";

	printf("strawberry: %s\n", fruit);
	printf("strawberry jam: %s %s\n", fruit, "jam");
	printf("favorite fruit: %s\n:", fruit);

	return 0;
}
