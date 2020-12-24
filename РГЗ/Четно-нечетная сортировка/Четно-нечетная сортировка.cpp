#include <iostream>
#include <cstdio>
#include <time.h> 
#include <chrono>
using namespace std;

int print_mas(int* mas, int n) { /* Вывод массива */
	for (short l1 = 0; l1 < n; l1++) { printf("%i ", mas[l1]); }
	printf("\n\n");
    return 0;
}

int Sorting(int*mas, int n)
{
    int m = n / 2;
    double temp = 0;
    for (int k = 0; k < n; k++)
    { //цикл по числу проходов               
        if (k % 2 == 0)
            for (int j = n - 1; j > 0; j -= 2)
            {
                if (mas[j] < mas[j - 1])
                {
                    temp = mas[j];
                    mas[j] = mas[j - 1];
                    mas[j - 1] = temp;
                }
            }
        else
            for (int j = n - 2; j > 0; j -= 2)
            {
                if (mas[j] < mas[j - 1])
                {
                    temp = mas[j];
                    mas[j] = mas[j - 1];
                    mas[j - 1] = temp;
                }
            }
    }
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
	//for (i = 0; i < n; a[i++] = p) {p++;} /*Упорядоченный массив*/
	//for (i = 0; i < n; a[i++] = n-p) { p++; } /*Обратно упорядоченый массив массив*/

	print_mas(a, n);
	
    auto start = std::chrono::high_resolution_clock::now();

	Sorting(a, n);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    
	print_mas(a, n);

    printf("\n\n%f", duration);

	return 0;
}