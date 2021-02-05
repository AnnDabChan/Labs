
#include <iostream>

int umnoj2(int a, int b) {

    if (b == 1)
        return a;
    else
        return a + umnoj2(a, b - 1);
}

int main()
{
    int a = 5, b = 3;
    int c = umnoj2(a, b);
    std::cout << c;
}

