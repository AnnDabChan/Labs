#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a1, a2, a4, a8;
    printf("Число, которое возведут в восьмую степень: ");
    //scanf_s("%d", &a1);
    a1 = 2;
    printf("%d", a1);
    a2 = a1 * a1;
    a4= a2 * a2;
    a8= a4 * a4;
    printf("\nРезультат: %d", a8);
}