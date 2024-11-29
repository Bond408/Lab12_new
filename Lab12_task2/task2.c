#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "RUS");
	float PI = 3.14159, * p1, * p2;
	p1 = p2 = &PI;
	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);
}