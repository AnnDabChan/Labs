#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long long sek, min, hours, day, v1g, v100g, v1000g;
	sek = 60;
	min = 60;
	hours = 24;
	day = 365;
	v1g = sek * min * hours * day;
	v100g = sek * min * hours * day * 100;
	v1000g = sek * min * hours * day * 1000;
	//printf("В 1 году %d сек. \nВ 100 годах %d сек. \nВ 1000 годах %lf сек.", v1g, v100g, v1000g);
}