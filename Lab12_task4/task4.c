#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "RUS");
	float array[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	float* ptr_a;
	printf("%p %p %p\n", array, &array[0], &array);
	ptr_a = array;
	printf("Адрес: %p, значение: %f\n", ptr_a, *ptr_a);
	ptr_a++;
	printf("ptr_a++: %p, значение: %f\n", ptr_a, *ptr_a);
	ptr_a+= 4;
	printf("ptr_a + 4: %p, значение: %f\n", ptr_a, *ptr_a);
	ptr_a -= 2;
	printf("ptr_a - 2: %p, значение: %f\n", ptr_a, *ptr_a);

	ptr_a = &array[0];
	for (int n = 0; n < 10; n += 2) {

		printf("Адрес: %p, знач: %f\n", ptr_a, *ptr_a);
		ptr_a += 2;

	}
	ptr_a = &array[9];
	for (int n = 9; n >= 0; n -= 2) {

		printf("Адрес: %p, знач: %f\n", ptr_a, *ptr_a);
		ptr_a -= 2;

	}
}