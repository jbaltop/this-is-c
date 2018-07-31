/* author: Hajun Park
   title: use integer variables */

#include <stdio.h>

int main (void)
{
	short sh = 32767;
	int in = -2147483648;
	long ln = 2147483647;
	/* long long type is omitted because of the limitation of gcc */
 
	printf("short: %d\n", sh); 
	printf("int: %d\n", in); 
	printf("long: %ld\n", ln); 

	return 0;
}
