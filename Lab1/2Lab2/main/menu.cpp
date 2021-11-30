#include <iostream>
#include <string>
#include<iomanip>
#include <cmath>
#include <ctime>


//#define DEBUG 


using namespace std;


struct processor
{
    string cpu;
    int freaq;
    char type;
};


void output(processor a[], int n);
void msort(processor a[], int n, int k);


void menu(processor a[], int n)
{
#ifdef DEBUG
    char buffer[32];
    time_t seconds = time(NULL);
    struct tm timeinfo;
    errno_t result = localtime_s(&timeinfo, &seconds);
    result = asctime_s(buffer, 32, &timeinfo);
    printf(" Текущее время и дата: %s \n", buffer);
    cout << "Текущий файл: menu.cpp; текущая функция: menu " << endl;
#endif

    int u;
    cout << "\n выберите действие:\n";
    cout << " 1 - сортировка;\n";
    cout << " 2 - вывод данных массива структур;\n";
    cout << " 0 - выход из программы.\n";

    cin >> u;

    switch (u)
    {

    case 1:
    {
        cout << "\n";
        cout << " 1 - сортировать по названиям процессоров;\n";
        cout << " 2 - сортировать по частоте;\n";
        cout << " 3 - сортировать по типу.\n";

        cin >> u;
        msort(a, n, u);
        menu(a, n);
        break;
    }
    case 2:
    {
        output(a, n);
        menu(a, n);
        break;
    }

    case 0:
    {
#if defined DEBUG
        result = localtime_s(&timeinfo, &seconds);
        result = asctime_s(buffer, 32, &timeinfo);
        printf(" Текущее время и дата: %s \n", buffer);
        cout << "Текущий файл: menu.cpp; текущая функция: menu " << endl;
#endif
        break;
    }
    }

}
