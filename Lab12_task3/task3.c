#include <stdio.h>
#include <locale.h>

int main(void) {
    int integer(void); {
        setlocale(LC_ALL, "RUS");
        double* p�, x = 5;
        p� = &x;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�++;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�--;
        printf("�� ������ %p �������� *ptr=%g\n\n", &p�, *p�);
    }
    int double1(void); {
        setlocale(LC_ALL, "RUS");
        double* p�, x = 5;
        p� = &x;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�--;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�++;
        printf("�� ������ %p �������� *ptr=%g\n\n", &p�, *p�);
    }
    int char1(void); {
        setlocale(LC_ALL, "RUS");
        char* p�, x = 5;
        p� = &x;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�++;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�--;
        printf("�� ������ %p �������� *ptr=%g\n\n", &p�, *p�);
    }
    int ld1(void); {
        setlocale(LC_ALL, "RUS");
        long double* p�, x = 5;
        p� = &x;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�++;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�--;
        printf("�� ������ %p �������� *ptr=%g\n\n", &p�, *p�);
    }
    int sui(void); {
        setlocale(LC_ALL, "RUS");
        short unsigned int* p�, x = 5;
        p� = &x;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�++;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�--;
        printf("�� ������ %p �������� *ptr=%g\n\n", &p�, *p�);
    }
    int bool1(void); {
        setlocale(LC_ALL, "RUS");
        _Bool* p�, x = 5;
        p� = &x;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�++;
        printf("�� ������ %p �������� *ptr=%g\n", &p�, *p�);
        p�--;
        printf("�� ������ %p �������� *ptr=%g\n\n", &p�, *p�);
    }
}