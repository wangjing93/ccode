#include <stdio.h>

int temperature(int fahr);

main() {
	int c, celsius;
	celsius = 0;
	c = 300;
	//while((c = getchar()) != EOF) {
		printf("%d", temperature(c));
	//}
}

int temperature(int fahr) {
	return 5 * (fahr - 32) / 9;
}