#include <stdio.h>

/* count lines in input */
main() {
	int c, nl;

	nl = 0;
	while((c = getchar()) != EOF) {
		//putchar(c);
		if(c == '\n') {
			++nl;
		}
	}
	printf("%d\n", nl);
}