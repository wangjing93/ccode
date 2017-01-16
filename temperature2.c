#include <stdio.h>

/* 当celsius=-17,-6,...,148时，分别
   打印涉世温度与华氏温度对照表 */
main() {
	int fahr, celsius;
	int lower, upper, step;
	lower = -17;	/* 温度表的下限 */
	upper = 148;	/* 温度表的上限*/
	step = 11;	/* 步长 */
	celsius = lower;
	printf("%s %s\n", "摄氏度", "华氏度");
	while(celsius <= upper) {
		fahr = celsius *9 / 5 + 32;
		printf("%6d %3d\n", celsius, fahr);
		celsius = celsius + step;
	}
}