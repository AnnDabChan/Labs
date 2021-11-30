#include <iostream>
#include <ctime>
#include <cstring>
#define DEBUG

using namespace std;

struct processor
{
    string cpu;
    int freaq;
    char type;
};


void output(processor a[], int n)
{
#if defined DEBUG
    char buffer[32];
    time_t seconds = time(NULL);
    struct tm timeinfo;
    errno_t result = localtime_s(&timeinfo, &seconds);
    result = asctime_s(buffer, 32, &timeinfo);
    printf(" Текущее время и дата: %s \n", buffer);
    cout << "Текущий файл: output.cpp; текущая функция: output " << endl;
#endif
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("|Характеристики ПЭВМ                                                                |\n");
    printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
    printf("|Процессор              |Частота(Mgz)             |RAM(Mb)            |Тип          |\n");
    printf("|- - - - - - - - - - - -|- - - - - - - - - - - - -|- - - - - - - - - -|- - - - - - -|\n");
    for (int i = 0; i < n; i++)
    {
        const char* s = a[i].cpu.c_str();
        char tmp[15];
        strcpy_s(tmp, s);
        printf("|%-22s | %-23d |                   | %-11c |\n", tmp, a[i].freaq, a[i].type);
    }
    printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
    printf("|Тип: C - CISC - процессор, R - RISC - процессор                                    |\n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
#if defined DEBUG
    result = localtime_s(&timeinfo, &seconds);
    result = asctime_s(buffer, 32, &timeinfo);
    printf(" Текущее время и дата: %s \n", buffer);
    cout << "Текущий файл: output.cpp; текущая функция: output " << endl;
#endif
}

