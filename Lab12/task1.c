#include <stdio.h>
#include <locale.h>
int main(void) {
	
	int * pi, i = 5;
	float *pf, f = 2.1f;
	char  *pc, c = 'q';
	double *pd, d = 2.23424452552652352;
	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));
	printf("%lu\n", sizeof(pc));
	printf("%lu\n", sizeof(pd));
}