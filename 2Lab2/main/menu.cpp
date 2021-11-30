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
    printf(" ������� ����� � ����: %s \n", buffer);
    cout << "������� ����: menu.cpp; ������� �������: menu " << endl;
#endif

    int u;
    cout << "\n �������� ��������:\n";
    cout << " 1 - ����������;\n";
    cout << " 2 - ����� ������ ������� ��������;\n";
    cout << " 0 - ����� �� ���������.\n";

    cin >> u;

    switch (u)
    {

    case 1:
    {
        cout << "\n";
        cout << " 1 - ����������� �� ��������� �����������;\n";
        cout << " 2 - ����������� �� �������;\n";
        cout << " 3 - ����������� �� ����.\n";

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
        printf(" ������� ����� � ����: %s \n", buffer);
        cout << "������� ����: menu.cpp; ������� �������: menu " << endl;
#endif
        break;
    }
    }

}
