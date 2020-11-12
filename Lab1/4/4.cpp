#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    printf("Через дополнительную пременную:");
    printf("\n\nДо обмена:");
    int a, b, dop;
    printf("\nПеременная a = ");
    //scanf_s("%d", &a1);
    a = 6;
    printf("%d", a);

    printf("\nПеременная b = ");
    //scanf_s("%d", &a2);
    b = 9;
    printf("%d", b);

    dop = a;
    a = b;
    b = dop;
    printf("\n\nПосле обмена: \nПеременная a = %d \nПеременная b = %d \n\n\n", a, b);



    printf("Без дополнительной пременной:");
    printf("\n\nДо обмена:");
    printf("\nПеременная a = ");
    //scanf_s("%d", &a1);
    a = 2;
    printf("%d", a);

    printf("\nПеременная b = ");
    //scanf_s("%d", &a2);
    b = 4;
    printf("%d", b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n\nПосле обмена: \nПеременная a = %d \nПеременная b = %d \n", a, b);
}