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
		switch (c) {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			ndigit[c-'0']++;
			break;
		case 'a': case 'b': case 'c': case 'd': case 'e':
		case 'f': case 'g': case 'h': case 'i': case 'j':
		case 'k': case 'l': case 'm': case 'n': case 'o':
		case 'p': case 'q': case 'r': case 's': case 't':
		case 'u': case 'v': case 'w': case 'x': case 'y':
		case 'z':
			nalpha[c-'a']++;
			break;
		case 'A': case 'B': case 'C': case 'D': case 'E':
		case 'F': case 'G': case 'H': case 'I': case 'J':
		case 'K': case 'L': case 'M': case 'N': case 'O':
		case 'P': case 'Q': case 'R': case 'S': case 'T':
		case 'U': case 'V': case 'W': case 'X': case 'Y':
		case 'Z':
			nalpha[c-'A']++;
			break;
		case ' ':
		case '\n':
		case '\t':
			nwhite++;
			break;
		default:
			nother++;
			break;
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
