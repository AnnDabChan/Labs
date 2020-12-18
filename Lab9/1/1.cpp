#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <clocale>
#define S 9
int Ar[S][S]; /* матрица */

int main(void) {
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    short l=0, r=0;  /* текущие индексы */
    short l1=0, r1=0; /* граничные номера столбцов */
    short dd=0;    /* Сумма */

    /* Заполнение массива */
    for (l = 0; l < S; l++)
    {
        for (r = 0; r < S; r++)
        {
            Ar[l][r] = rand() % 99;

        }
    }

    /* вывод матрицы */
    for (l = 0; l < S; l++) {
        for (r = 0; r < S; r++) {
            printf("%5d", Ar[l][r]);
        }
        printf("\n");
    }
    printf("\n\n");
   
    /*Сумма*/
    for (r1 = 0; r1 < S; r1++) {
        l = l1;
        for (r = 0; r < S; r++) {
            dd += Ar[l][r];
        }
        r = r1;
        for (l = 0; l < S; l++) {
            dd += Ar[l][r];
        }
        dd -= Ar[l1][r1];
        Ar[l1][r1]= dd;
        l1++;
        dd = 0;
    }
    

  /* вывод матрицы */
    for (l = 0; l < S; l++) {
        for (r = 0; r < S; r++) {
            printf("%5d", Ar[l][r]);
        }
        printf("\n");
    }
    return 0;
}