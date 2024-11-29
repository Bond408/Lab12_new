#include <stdio.h>
#include <locale.h>

int main(void) {
    int integer(void); {
        setlocale(LC_ALL, "RUS");
        double* pа, x = 5;
        pа = &x;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа++;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа--;
        printf("По адресу %p хранится *ptr=%g\n\n", &pа, *pа);
    }
    int double1(void); {
        setlocale(LC_ALL, "RUS");
        double* pа, x = 5;
        pа = &x;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа--;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа++;
        printf("По адресу %p хранится *ptr=%g\n\n", &pа, *pа);
    }
    int char1(void); {
        setlocale(LC_ALL, "RUS");
        char* pа, x = 5;
        pа = &x;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа++;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа--;
        printf("По адресу %p хранится *ptr=%g\n\n", &pа, *pа);
    }
    int ld1(void); {
        setlocale(LC_ALL, "RUS");
        long double* pа, x = 5;
        pа = &x;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа++;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа--;
        printf("По адресу %p хранится *ptr=%g\n\n", &pа, *pа);
    }
    int sui(void); {
        setlocale(LC_ALL, "RUS");
        short unsigned int* pа, x = 5;
        pа = &x;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа++;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа--;
        printf("По адресу %p хранится *ptr=%g\n\n", &pа, *pа);
    }
    int bool1(void); {
        setlocale(LC_ALL, "RUS");
        _Bool* pа, x = 5;
        pа = &x;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа++;
        printf("По адресу %p хранится *ptr=%g\n", &pа, *pа);
        pа--;
        printf("По адресу %p хранится *ptr=%g\n\n", &pа, *pа);
    }
}