#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <clocale>
#define S 3

/*template  <typename T, size_t Nmat>
-void print_mat(T(&mas)[Nmat][Nmat]) { /* Вывод матрицы 
    for (short l = 0; l < Nmat; l++) {
        for (short r = 0; r < Nmat; r++) {
            printf("%5d", mas[l][r]);
        }
        printf("\n");
    }
    printf("\n\n");
}*/

template  <typename T, size_t Nmas>
void print_mas(T(&mas)[Nmas]) { /* Вывод массива */
    for (short l1 = 0; l1 < Nmas; l1++) { printf("%i ", mas[l1]); } 
    printf("\n\n");
}


template  <typename T, size_t N>
void perevod(T(&Ap)[N]) {
    short l = 0, r = 0;  /* текущие индексы */
    short l1 = 0; /* граничные номера столбцов */
    int Ar[S][S]; /* матрица */
    double sum; double arifm;

    for (l = 0, l1 = 0; l < S; ++l) /*перевод массив-матрица*/
        for (r = 0; r < S; ++r)
            Ar[l][r] = Ap[l1++];


    for (r = 0; r < S; ++r) { /*перемножение*/
        sum = 0;
        for (l = 0; l < S; ++l) { sum += Ar[l][r]; }
        arifm = sum / S;
        for (l = 0; l < S; ++l) { Ar[l][r] *= arifm; }
    }

    for (l1 = 0; l = 0; l < S; l++) /*перевод матрица-массив*/
        for (r = 0; r < S; r++)
            Ap[l1++] = Ar[l][r];
}

int main() {
    setlocale(LC_ALL, "Russian");
    const int D = 9;
    int Ap[D]; /* массив */

    for (short l1 = 0; l1 < D; l1++) {  /* Заполнение массива */
        printf("Введите число: ");
        scanf_s("%d", &Ap[l1]);
    }

    print_mas(Ap);

    perevod(Ap);

    print_mas(Ap);

    return 0;
}