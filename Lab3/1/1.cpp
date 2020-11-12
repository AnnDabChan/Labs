#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    double x=44.4;  /* параметры, которые вводятся */
    double a = 12.5, b = 1.3;  /* параметры, которые задаются в программе */
    double t1, t2;   /* результаты */
    double per, per2, am, bm;       /* рабочая переменная */

    printf("Введите x: ");
    scanf_s("%lf", &x);

    am = -1 * a;
    bm = -1 * b;

    if (x == am or x == bm or x == -1 or tan((a * x) / 2)<0) {
        while (x == am or x == bm or x == -1 or tan((a * x) / 2) < 0) {
            printf("Введите другое значение x: ");
            scanf_s("%lf", &x);
        }
    }

    per = a - b;
    per2 = a + x;
    t1 = -(1 / (per*per) * ((1 / per2) + (1 / (1 + x))) + (2 / (per * per * per)) * log(per2 / (b + x)));

    per = a * x * 3.14 / 180;
    t2 = (-(1 / (2 * a)) * (cos(per) / (sin(per) * sin(per)))) - log(tan(per / 2));

    printf("t1 = %lg\n", t1);
    printf("t2 = %lg\n", t2);

    //double t3, t4;
    //t3 = tan(per / 2);
    //t4 = -log(t3);
    //printf("t3 = %lg\n", t3);
    //printf("t4 = %lg\n", t4);
}