#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int igrok, komp;
	printf("Поиграем в игру? Мы оба загадыаем число. Чье больше - тот и выиграл. \nГотов? \nТогда я начинаю. Подожди... \nВсе, я загадал. \nА ты? \nОтлично. \nНапиши своё число:");
	scanf_s("%d", &igrok);
	//igrok = 9;
	komp = igrok + igrok / 2;
	printf("\nХа, а у меня больше! Я загадал число %d", komp);
	printf("\nПобеда за мной!");
}