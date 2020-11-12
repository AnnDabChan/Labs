#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Вариант - 5");
    int a0, a1, a2;
    char name0[15], name1[15], name2[15], name02[9], name12[9],name22[9];
    printf("\n\nПроцессор 1 \nНазвание:");
    scanf_s("%s", name0, 15);
    printf("Частота:");
    scanf_s("%d", &a0);
    printf("Тип:");
    scanf_s("%s", name02,9);
    system("cls");

    printf("Вариант - 5\n\n");
    printf("Процессор 2 \nНазвание:");
    scanf_s("%s", name1,15);
    printf("Частота:");
    scanf_s("%d", &a1);
    printf("Тип:");
    scanf_s("%s", name12,9);
    system("cls");

    printf("Вариант - 5\n\n");
    printf("Процессор 3 \nНазвание:");
    scanf_s("%s", name2,15);
    printf("Частота:");
    scanf_s("%d", &a2);
    printf("Тип:");
    scanf_s("%s", name22,2);
    system("cls");

    printf("Вариант - 5\n\n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("|Характеристики ПЭВМ                                                                |\n");
    printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
    printf("|Процессор              |Частота(Mgz)             |RAM(Mb)            |Тип          |\n");
    printf("|- - - - - - - - - - - -|- - - - - - - - - - - - -|- - - - - - - - - -|- - - - - - -|\n");
    printf("|%-22s | %-23d |                   | %-11s |\n", name0, a0, name02);
    printf("|%-22s | %-23d |                   | %-11s |\n", name1, a1, name12);
    printf("|%-22s | %-23d |                   | %-11s |\n", name2, a2, name22);
    printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
    printf("|Тип: C - CISC - процессор, R - RISC - процессор                                    |\n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");


}
