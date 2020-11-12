#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c, p, s;
    printf("Площадь треугольника со сторонами: \n");
    printf("Сторона а = ");
    a = 3;
    printf("%lf \n", a);
    //scanf_s("%f", &a);
    printf("Сторона b = ");
    b = 4;
    printf("%lf \n", b);
    //scanf_s("%f", &b);
    printf("Сторона c = ");
    c = 5;
    printf("%lf \n", c);
    //scanf_s("%f", &c);
    p = (a + b + c) / 2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Площадь треугольника abc равна %f", s);
}