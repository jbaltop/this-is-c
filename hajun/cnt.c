#include <stdio.h>

main() /* count digits, alphabets, white space, others */
{
	int c, i, nwhite, nother, ndigit[10], nalpha[26]; 

	nwhite = nother = 0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;
	for (i = 0; i < 26; i++)
		nalpha[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			ndigit[c-'0']++;
		} else if (c >= 'a' && c <= 'z') {
			nalpha[c-'a']++;
		} else if (c >= 'A' && c <= 'Z') {
			nalpha[c-'A']++;
		} else if (c == ' ' || c == '\n' || c == '\t') {
			nwhite++;
		} else {
			nother++;
		}
	}
	printf("digits =");
	for (i = 0; i < 10; i++)
		printf("%d: %d\t", i, ndigit[i]);
	printf("alphabets =");
	for (i = 0; i < 26; i++)
		printf("%c: %d\t", i+'a', nalpha[i]);
	printf(", white space = %d, other = %d\n",
		nwhite, nother);

	return 0;
}
