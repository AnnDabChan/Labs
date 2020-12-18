#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <clocale>
int Ar[100];   /* массив, который обрабатывается */
int Ap[100];   /* массив, который обрабатывается */

int main(void) {
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    int i, j=0;    /* индексы в массиве */
    int nn=0; /* количество эл-тов в последовательности */
    int ib=0;      /* индекс начала последовательности */

    /* заполнение массива случайными числами */
    for (i = 0; i < 100; Ar[i++] = -100 + rand() % 201 );
    /* вывод начального массива */
    printf("Начальный массив:\n");
    for (i = 0; i < 100; printf("%4d  ", Ar[i++]));
    printf("\n\n");

   
    for (i = 0; i < 100; i++) { /* перебор массива */
        if (Ar[i] > 0) {
            nn++;
         }
        else if (nn >= 5) {
           while (nn != 0) {
               Ap[j++] = i - nn;
               nn--;
               ib++;
            }
        }
        else {
            nn = 0;
        }
    }
    if (nn >= 5) {
        while (nn != 0) {
            Ap[j++] = i - nn;
            nn--;
            ib++;
        }
    }
    if (ib == 0) {
        printf("Нет подходящего пордка чисел.\n");
    }
    else {
        printf("Результат:\n");
        for (j = 0; j < ib; printf("%4d  ", Ap[j++]));
    }
    return 0;
}