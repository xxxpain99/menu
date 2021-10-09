#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	int b = 0;

	cout << "Что желаете заказать?" << endl;
	cout << "1 - Наггетсы" << endl;
	cout << "2 - Пицца" << endl;
	cout << "3 - Чизбургер" << endl;
	cout << "4 - Роллы" << endl;
	cout << "6 - Кока-Кола" << endl;
	cout << "0 - Выход из программы" << endl;
	cout << "Введите число\n" << endl;


	for (;;)
	{
		

		cin >> a;

		switch (a)
		{
		case 1: cout << "Вы заказали Наггетсы за 120 рублей\n" << endl;
			b += 120; break;
		case 2: cout << "Вы заказали Пиццу за 200 рублей\n"<< endl;
			b += 200; break;
		case 3: cout << "Вы заказали Чизбургер за 150 рублей\n" << endl;
			b += 150; break;
		case 4: cout << "Вы заказали Роллы за 450 рублей\n" << endl;
			b += 450; break;
		case 5: cout << "Вы заказали Кока-Колу за 70 рублей\n"<< endl;
			b += 70; break;
		case 0: system("cls"); cout << "Итого= " << b;  cout << "  Спасибо за покупку! Приятного аппетита!\n"; exit(0); break;
		default: cout << "Ошибка\n" << endl; break;

		}


	}

	return 0;
}