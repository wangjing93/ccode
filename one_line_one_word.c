#include <stdio.h>

#define OUT 0
#define IN 1
main() {
	int c, state;
	state = OUT;	
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else {
			state = IN;
		}
		if(state == OUT) {
			putchar('\n');
		} else if(state == IN){
			putchar(c);
		}
	}
}