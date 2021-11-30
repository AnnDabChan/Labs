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
    printf(" ������� ����� � ����: %s \n", buffer);
    cout << "������� ����: output.cpp; ������� �������: output " << endl;
#endif
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("|�������������� ����                                                                |\n");
    printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
    printf("|���������              |�������(Mgz)             |RAM(Mb)            |���          |\n");
    printf("|- - - - - - - - - - - -|- - - - - - - - - - - - -|- - - - - - - - - -|- - - - - - -|\n");
    for (int i = 0; i < n; i++)
    {
        const char* s = a[i].cpu.c_str();
        char tmp[15];
        strcpy_s(tmp, s);
        printf("|%-22s | %-23d |                   | %-11c |\n", tmp, a[i].freaq, a[i].type);
    }
    printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
    printf("|���: C - CISC - ���������, R - RISC - ���������                                    |\n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
#if defined DEBUG
    result = localtime_s(&timeinfo, &seconds);
    result = asctime_s(buffer, 32, &timeinfo);
    printf(" ������� ����� � ����: %s \n", buffer);
    cout << "������� ����: output.cpp; ������� �������: output " << endl;
#endif
}

