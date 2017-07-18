#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define ENTER '\n'
main() {
	int c, snl, tnl, enl;

	snl = tnl = enl = 0;
	for(; (c = getchar()) != EOF; ) {
		if(c == SPACE) {
			++snl;
		}
		if(c == TAB) {
			++tnl;
		}
		if(c == ENTER) {
			++enl;
		}
	}
	printf("space counts:%2d,tab counts:%2d, enter counts:%2d", snl, tnl, enl);
}