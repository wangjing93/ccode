#include <stdio.h>

main() {
	int c;
	c = getchar();
	printf("%d\n",c != EOF);
	printf("%s\n", EOF);
}