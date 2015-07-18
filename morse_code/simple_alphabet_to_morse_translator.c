/*
 * simplest morse code decode
 * written by baltop
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	int len = 0;
	int i = 0;
	char ch;

	if (argc != 2) {
		printf("usage: %s \"alphabets\"\n", argv[0]);
		return -1;
	}
	len = strlen(argv[1]);

	printf("alphabet source: %s\n", argv[1]);
	printf("morse code:\n");
	for (i = 0; i < len; i++) {
		ch = toupper(argv[1][i]);
		switch (ch) {
		case 'A':
			printf("._");
			break;
		case 'B':
			printf("_...");	
			break;
		case 'C':
			printf("_._.");
			break;
		case 'D':
			printf("_..");
			break;
		case 'E':
			printf(".");
			break;
		case 'F':
			printf(".._.");
			break;
		case 'G':
			printf("__.");
			break;
		case 'H':
			printf("....");
			break;
		case 'I':
			printf("..");
			break;
		case 'J':
			printf(".___");
			break;
		case 'K':
			printf("_._");
			break;
		case 'L':
			printf("._..");
			break;
		case 'M':
			printf("__");
			break;
		case 'N':
			printf("_.");
			break;
		case 'O':
			printf("___");
			break;
		case 'P':
			printf(".__.");
			break;
		case 'Q':
			printf("__._");
			break;
		case 'R':
			printf("._.");
			break;
		case 'S':
			printf("...");
			break;
		case 'T':
			printf("_");
			break;
		case 'U':
			printf(".._");
			break;
		case 'V':
			printf("..._");
			break;
		case 'W':
			printf(".__");
			break;
		case 'X':
			printf("_.._");
			break;
		case 'Y':
			printf("_.__");
			break;
		case 'Z':
			printf("__..");
			break;
		case '1':
			printf(".____");
			break;
		case '2':
			printf("..___");
			break;
		case '3':
			printf("...__");
			break;
		case '4':
			printf("...._");
			break;
		case '5':
			printf(".....");
			break;
		case '6':
			printf("_....");
			break;
		case '7':
			printf("__...");
			break;
		case '8':
			printf("___..");
			break;
		case '9':
			printf("____.");
			break;
		case '0':
			printf("_____");
			break;
		}

		if (ch != ' ') {
			printf(" ");
		} else {
			printf("\n");
		}

		continue;

		if (ch != ' ') {
			printf(" ");
		} else {
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}
