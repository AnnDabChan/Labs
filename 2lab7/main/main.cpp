#include <iostream>

using namespace std;


struct processor
{
    string cpu;
    int freaq;
    char type;
};


void menu(processor a, int n);


int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << " Введите количество данных:  ";
    cin >> n;
    processor info;
    menu(info, n);

}
