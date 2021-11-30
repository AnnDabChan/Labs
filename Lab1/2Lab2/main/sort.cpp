#include <iostream>
#include <string>
#include <ctime>

using namespace std;

#define DEBUG
struct processor
{
    string cpu;
    int freaq;
    char type;
};

void msort(processor a[], int n, int k)
{
#if defined DEBUG
    char buffer[32];
    time_t seconds = time(NULL);
    struct tm timeinfo;
    errno_t result = localtime_s(&timeinfo, &seconds);
    result = asctime_s(buffer, 32, &timeinfo);
    printf(" Текущее время и дата: %s \n", buffer);
    cout << "Текущий файл: sort.cpp; текущая функция: msort " << endl;
#endif

    string tmp;
    int tmp1;
    char tmp2;
    switch (k)
    {
    case 1:
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i].cpu > a[j].cpu)
                {
                    tmp = a[i].cpu;
                    a[i].cpu = a[j].cpu;
                    a[j].cpu = tmp;

                    tmp1 = a[i].freaq;
                    a[i].freaq = a[j].freaq;
                    a[j].freaq = tmp1;

                    tmp2 = a[i].type;
                    a[i].type = a[j].type;
                    a[j].type = tmp2;
                }
            }
        }
        break;
    }

    case 2:
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i].freaq > a[j].freaq)
                {
                    tmp1 = a[i].freaq;
                    a[i].freaq = a[j].freaq;
                    a[j].freaq = tmp1;

                    tmp = a[i].cpu;
                    a[i].cpu = a[j].cpu;
                    a[j].cpu = tmp;

                    tmp2 = a[i].type;
                    a[i].type = a[j].type;
                    a[j].type = tmp2;
                }
            }
        }
        break;
    }
    case 3:
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i].type > a[j].type)
                {
                    tmp2 = a[i].type;
                    a[i].type = a[j].type;
                    a[j].type = tmp2;

                    tmp = a[i].cpu;
                    a[i].cpu = a[j].cpu;
                    a[j].cpu = tmp;

                    tmp1 = a[i].freaq;
                    a[i].freaq = a[j].freaq;
                    a[j].freaq = tmp1;
                }
            }
        }
        break;
    }
    }
#if defined DEBUG
    result = localtime_s(&timeinfo, &seconds);
    result = asctime_s(buffer, 32, &timeinfo);
    printf(" Текущее время и дата: %s \n", buffer);
    cout << "Текущий файл: sort.cpp; текущая функция: msort " << endl;
#endif
}