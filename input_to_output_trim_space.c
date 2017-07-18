#include <stdio.h>

main(){
	int in,ln;
	ln = 0;
	while((in = getchar()) != EOF) {
		if(in == ' ') {
			if(ln == 0) {
				putchar(in);
			}
			ln = 1;
		} else {
			putchar(in);	
		}
	}
	
}