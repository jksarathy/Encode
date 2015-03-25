#include <stdio.h>
#include <ctype.h>

#define OFFSET_MODULO 26
#define UPPER_LB 65
#define UPPER_HB 90
#define LOWER_LB 97
#define LOWER_HB 122
#define UPPER_OFFSET 5
#define LOWER_OFFSET 3


int main(int argc, char **argv) {

	int offset = 17;
	int c;

	while ((c = getchar()) != EOF) {
		if (c >= UPPER_LB && c <= UPPER_HB) {
			c = ((c + offset - 'A') % OFFSET_MODULO) + 'A';
			offset = (offset + UPPER_OFFSET) % OFFSET_MODULO;
		}
		else if (c >= LOWER_LB && c <= LOWER_HB){
			c = ((c + offset - 'a') % OFFSET_MODULO) + 'a';
			offset = (offset + LOWER_OFFSET) % OFFSET_MODULO;
		}
		putchar(c);
	}


	return 0;
}
