#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double x1, x2; /* Корни */
    double a=3, b=-18, c=27;  /* Числа */
    double D, d; /* Дискриминант */

    int i = 0;

    while (i != 1)
    {
        printf("Введите числа a, b, c для уравнения: ax^2+bx+c=0 \n");
        scanf_s("%lf %lf %lf", &a, &b, &c);

        D = (b * b) - (4 * a * c);

        if (D < 0)
            printf("Корней нет");
        if (D == 0) {
            x1 = (-b) / (2 * a);
            printf("Корень: \nх = %lf", x1);
        }
        if (D > 0) {
            d = sqrt(D);
            x1 = (d - b) / (2 * a);
            x2 = (-b - d) / (2 * a);
            printf("Корень: \nх1 = %lf \nх2 = %lf", x1, x2);
        }



        printf("\n\nПовторить? \n1 - Нет \n0 - Да\n");
        scanf_s("%d", &i);
        system("cls");
    }
    return 0;
}
    