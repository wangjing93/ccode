#include <stdio.h>

/* ��fahr=0,20,...,300ʱ���ֱ�
   ��ӡ�����¶��������¶ȶ��ձ� */
main() {
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;	/* �¶ȱ������ */
	upper = 300;	/* �¶ȱ������*/
	step = 20;	/* ���� */
	fahr = lower;
	printf("%s %s\n", "���϶�", "���϶�");
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0 );
		printf("%6.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}