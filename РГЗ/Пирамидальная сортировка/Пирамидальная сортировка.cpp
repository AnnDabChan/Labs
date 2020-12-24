#include <iostream>
#include <time.h> 
#include <chrono>
using namespace std;

void iswap(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int print_mas(int* mas, int n) { /* Вывод массива */
    for (short l1 = 0; l1 < n; l1++) { printf("%i ", mas[l1]); }
    printf("\n\n");
    return 0;
}

int Sorting(int* mas, int n){
    int sh = 0; // Смещение
    bool b;
    do
    {
        b = false;
        for (int i = 0; i < n; i++)
        {
            if (i * 2 + 2 + sh < n)
            {
                if ((mas[i + sh] > mas[i * 2 + 1 + sh]) || (mas[i + sh] > mas[i * 2 + 2 + sh]))
                {
                    if (mas[i * 2 + 1 + sh] < mas[i * 2 + 2 + sh])
                    {
                        iswap(mas[i + sh], mas[i * 2 + 1 + sh]);
                        b = true;
                    }
                    else if (mas[i * 2 + 2 + sh] < mas[i * 2 + 1 + sh])
                    {
                        iswap(mas[i + sh], mas[i * 2 + 2 + sh]);
                        b = true;
                    }
                }
                // Дополнительная проверка для последних двух элементов;
                // с её помощью можно отсортировать пирамиду
                // состоящую всего лишь из трёх элементов
                if (mas[i * 2 + 2 + sh] < mas[i * 2 + 1 + sh])
                {
                    iswap(mas[i * 2 + 1 + sh], mas[i * 2 + 2 + sh]);
                    b = true;
                }
            }
            else if (i * 2 + 1 + sh < n)
            {
                if (mas[i + sh] > mas[i * 2 + 1 + sh])
                {
                    iswap(mas[i + sh], mas[i * 2 + 1 + sh]);
                    b = true;
                }
            }
        }
        if (!b)
            ++sh; // Смещение увеличивается, когда на текущем этапе сортировать больше нечего
    } while (sh + 2 < n); // Конец сортировки
    return 0;
}


int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    const int n = 45;
    int a[n];
    int i = 0, p = 0;

    for (i = 0; i < n; a[i++] = rand() % n); /*Рандомный массив*/
    //for (i = 0; i < n; a[i++] = p) { p++; } /*Упорядоченный массив*/
    //for (i = 0; i < n; a[i++] = n-p) { p++; } /*Обратно упорядоченый массив массив*/

    print_mas(a,n);

    auto start = std::chrono::high_resolution_clock::now();

    Sorting(a,n);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    print_mas(a,n);

    printf("\n\n%f", duration);

    return 0;
}