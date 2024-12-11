#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void printbytes(void* ptr, int size) {
	unsigned char* cptr = (unsigned char*)ptr;
	for (int i = 0; i < size; i++) {
		printf("%.2x ", cptr[i]);
	}
	printf("\n");
}

void main() {
	int x = 0x12345678;
	int* prt;
	unsigned char *a1, *a2, *a3, *a4;
	unsigned char *a;

	prt = &x;
	a = (unsigned char*)prt;

	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);

	int z = 12345;
	float f = 12345;
	double d = 12345;

	printf("int:\n");
	printbytes(&z, sizeof(z));

	printf("float:\n");
	printbytes(&f, sizeof(f));

	printf("double:\n");
	printbytes(&d, sizeof(d));

}
