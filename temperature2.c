#include <stdio.h>

/* ��celsius=-17,-6,...,148ʱ���ֱ�
   ��ӡ�����¶��뻪���¶ȶ��ձ� */
main() {
	int fahr, celsius;
	int lower, upper, step;
	lower = -17;	/* �¶ȱ������ */
	upper = 148;	/* �¶ȱ������*/
	step = 11;	/* ���� */
	celsius = lower;
	printf("%s %s\n", "���϶�", "���϶�");
	while(celsius <= upper) {
		fahr = celsius *9 / 5 + 32;
		printf("%6d %3d\n", celsius, fahr);
		celsius = celsius + step;
	}
}