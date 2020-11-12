#include <iostream>
using namespace std;
    int main()
    {
        setlocale(LC_ALL, "Russian");
        int a1, a2, a3, a4, a5, a6;
        a1 = sizeof(char);
        a2 = sizeof(short);
        a3 = sizeof(int);
        a4 = sizeof(long);
        a5 = sizeof(float);
        a6 = sizeof(double);
        printf("Количество бит в классе char: %d", a1);
        printf("\nКоличество бит в классе chort: %d", a2);
        printf("\nКоличество бит в классе int: %d", a3);
        printf("\nКоличество бит в классе long: %d", a4);
        printf("\nКоличество бит в классе float: %d", a5);
        printf("\nКоличество бит в классе double: %d", a6);
    }