#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y; /* координаты точки */
    int i=0;

    while (i != 1)
    {
        /* ввод координат */
        printf("Введите координату x : ");
        scanf_s("%lf", &x);
        printf("Введите координату y : ");
        scanf_s("%lf", &y);
        system("cls");

        /* вывод только что введенных значений */
        printf("x=%7lf;  y=%7lf\n", x, y);

        /* проверка условий */
        if (x >= -1 and x <= 0 and y <= 0 and y >= -1)
            printf("Точка попадает в область\n\n");
        else if (x <= 1 and x>=0 and y <= 1 and y >= 0 and x + y <= 1){
            printf("Точка попадает в область\n\n");
            }
        else printf("Точка не попадает в область\n\n");
        
        printf("Продолжить? \n1 - Нет \n0 - Да\n");
        scanf_s("%d", &i);
        system("cls");
    }
    return 0;
}
